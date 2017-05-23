// run it with:
//    gcc.exe -c main.c -o main.o -I"E:/Dev-Cpp/MinGW64/include" -I"E:/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"E:/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.8.1/include" 
//    gcc.exe main.o -o main.exe -L"E:/Dev-Cpp/MinGW64/lib" -L"E:/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib" -static-libgcc
//    main.exe
#include <stdio.h>

void trim(char* s, char c)
{
    char *t  = s;
    while (*s == c){s++;};
    if (*s)
    {
        char* t1 = s;
        while (*s){s++;};
        s--;
        while (*s == c){s--;};
        while (t1 <= s)
        {
            *(t++) = *(t1++);
        }
    }
    *t = 0;
}

int main(int argc, char *argv[]) {
	char s[] = " xx ";
	trim(s, ' ');
	printf("ret=%s\n", s);
	return 0;
}
