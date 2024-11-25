nasm -f win64 asmfile.asm
gcc -c main.c -o main.obj -m64
gcc main.obj asmfile.obj -o main.exe -m64
main.exe
pause 