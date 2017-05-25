// run it with:
//    gcc.exe -c main.c -o main.o -I"E:/Dev-Cpp/MinGW64/include" -I"E:/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"E:/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.8.1/include" 
//    gcc.exe main.o -o main.exe -L"E:/Dev-Cpp/MinGW64/lib" -L"E:/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib" -static-libgcc
//    main.exe
//    main.exe --port=9091
#include <stdio.h>
#include <string.h>
#include <getopt.h>

static const struct option long_option[]={
	{"port", required_argument, NULL, 'p'}
};

int main(int argc, char *argv[]) {
	char *port = NULL;
	int opt = 0;
	while((opt = getopt_long(argc, argv, "p", long_option, NULL)) != -1)
	{
		switch(opt)
		{
			case 0:
				printf("no args.\n");
				break;
			case 'p':
				port = optarg;  
				break;
		}
	}
	if (port == NULL)
	{
		port = "9090";
	}
	printf("port=%s\n", port);
	return 0;
}