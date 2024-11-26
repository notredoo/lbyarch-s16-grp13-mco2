<h1>Grayscale Image Conversion and Performance Analysis</h1>
<p>This project contains a C program and an x86-64 assembly program for converting grayscale image representations from integer-based pixel values to single-precision float-based pixel values. The performance of the programs was evaluated using sizes 10x10, 100x100, and 1000x1000. Execution times were measured, and the correctness of the results was verified.</p>

<h2>Execution Time and Performance Analysis</h2>

<h3>10x10</h3>
<p><strong>Data file:</strong> <code>input10x10.txt</code><br>
<strong>Average execution time:</strong> 0.0038667 seconds</p>
<p>The program performs efficiently with small sizes, achieving execution times below 4 milliseconds. The low variance in execution times indicates consistent performance.</p>

<h3>100x100</h3>
<p><strong>Data file:</strong> <code>input100x100.txt</code><br>
<strong>Average execution time:</strong> 0.3185667 seconds</p>
<p>For medium-sized sizes, the average execution time is approximately 318 milliseconds. The increase in computational time reflects the larger data size, yet the program demonstrates stable processing capability.</p>

<h3>1000x1000</h3>
<p><strong>Data file:</strong> <code>input1000x1000.txt</code><br>
<strong>Average execution time:</strong> 33.4136 seconds</p>
<p>The execution time for large sizes is significantly higher due to the computational complexity of processing a 1000x1000 size. Optimizations, such as algorithm improvements, might be needed for faster processing of large data.</p>

<h2>Correctness Verification</h2>
<p>To verify the correctness of the program:</p>
<ol>
    <li>Run the program using the provided test data files (<code>input10x10.txt</code>, <code>input100x100.txt</code>, <code>input1000x1000.txt</code>).</li>
    <li>Check that the output matches the expected float-based grayscale pixel values calculated from the input data using the formula <code>f = i / 255</code>.</li>
    <li>A sample screenshot of the correctness check and program output for a 10x10 image size is provided below.</li>
</ol>
<h3>Screenshot: Correctness Check (10x10 Image Size)</h3>
![image](https://github.com/user-attachments/assets/98cc7d0e-715a-4dd7-8511-3ed8eff7a2cc) ![image](https://github.com/user-attachments/assets/28a10cf3-54fe-48f5-9d16-78e457559902)
<h3>Screenshot: Program Output (10x10 Image Size)</h3>
![image](https://github.com/user-attachments/assets/794b1a03-2ed6-49f5-b9ae-a2b11a89eb08)

<h2>Usage</h2>
<h3>Batch Files</h3>
<p>To compile and run the programs, use the following batch files:</p>

<h4>run.bat</h4>
<pre>
nasm -f win64 asmfile.asm
gcc -c main.c -o main.obj -m64
gcc main.obj asmfile.obj -o main.exe -m64
main.exe
pause
</pre>

<h4>run10x10.bat</h4>
<pre>
nasm -f win64 asmfile.asm
gcc -c main.c -o main.obj -m64
gcc main.obj asmfile.obj -o main.exe -m64
main.exe < input10x10.txt
pause
</pre>

<h4>run100x100.bat</h4>
<pre>
nasm -f win64 asmfile.asm
gcc -c main.c -o main.obj -m64
gcc main.obj asmfile.obj -o main.exe -m64
main.exe < input100x100.txt
pause
</pre>

<h4>run1000x1000.bat</h4>
<pre>
nasm -f win64 asmfile.asm
gcc -c main.c -o main.obj -m64
gcc main.obj asmfile.obj -o main.exe -m64
main.exe < input1000x1000.txt
pause
</pre>

<h2>Project Specifications</h2>
<p>This project focuses on mapping grayscale images from 8-bit integer-based values to single-precision float-based values for compatibility across different image processing libraries. The conversion formula used is:</p>
<pre>
f = i / 255
</pre>
<p>Where:</p>
<ul>
    <li><code>f</code>: Float-based pixel value</li>
    <li><code>i</code>: Integer-based pixel value</li>
</ul>
<p>For example:</p>
<pre>
Integer-based image:
64,  89, 114, 84
140, 166, 191, 84
216, 242, 38,  84

Converted to float-based image:
0.25, 0.35, 0.45, 0.33
0.55, 0.65, 0.75, 0.33
0.85, 0.95, 0.15, 0.33
</pre>

<p>This mapping ensures compatibility and interoperability across various libraries while maintaining image fidelity during processing.</p>
