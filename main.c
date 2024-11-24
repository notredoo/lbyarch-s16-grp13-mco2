#include <stdio.h>
#include <stdlib.h>
#include <time.h>   

extern float imgCvtGrayInttoFloat(int grayInt);

int main() {
    int height, width;
    int i, j;
    double totalTime;

    scanf("%d %d", &height, &width);

    int **grayIntValues = (int **)malloc(height * sizeof(int *));
    float **grayFloatValues = (float **)malloc(height * sizeof(float *));
    for (i = 0; i < height; i++) {
        grayIntValues[i] = (int *)malloc(width * sizeof(int));
        grayFloatValues[i] = (float *)malloc(width * sizeof(float));
    }

    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            scanf("%d", &grayIntValues[i][j]);
        }
    }

    printf("\nConverted Grey Float Values: \n");

    clock_t startTime = clock();
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            grayFloatValues[i][j] = imgCvtGrayInttoFloat(grayIntValues[i][j]);    
            printf("%.2f ", grayFloatValues[i][j]);
        }
        printf("\n");
    }
    clock_t endTime = clock();  

    totalTime = (double)(endTime - startTime)/CLOCKS_PER_SEC;
    
    printf("Total Execution Time (in seconds): %f s", totalTime);

    for (i = 0; i < height; i++) {
        free(grayIntValues[i]);
        free(grayFloatValues[i]);
    }
    free(grayIntValues);
    free(grayFloatValues);

    return 0;
}