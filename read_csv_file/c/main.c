// run it with:
//    gcc.exe -c main.c -o main.o -I"E:/Dev-Cpp/MinGW64/include" -I"E:/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"E:/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.8.1/include" 
//    gcc.exe main.o -o main.exe -L"E:/Dev-Cpp/MinGW64/lib" -L"E:/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib" -static-libgcc
//    main.exe
#include <stdio.h>

int main(int argc, char *argv[]) {
	FILE *fp = fopen("e:/test.csv", "r");
	if(fp == NULL) 
	{
		return -1;
	}
	
	char line[1024];
	while(fgets(line, sizeof(line), fp)) 
	{
		printf("%s", line);
	}
	printf("\nend.\n");
	
	return 0;
}