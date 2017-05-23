// run it with:
//    gcc.exe -c main.c -o main.o -I"E:/Dev-Cpp/MinGW64/include" -I"E:/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"E:/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.8.1/include" 
//    gcc.exe main.o -o main.exe -L"E:/Dev-Cpp/MinGW64/lib" -L"E:/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib" -static-libgcc
//    main.exe
#include <stdio.h>

int binary_search(int* data, int val, int low, int high)
{
	int mid = (low + high) / 2;
	int midVal = data[mid];
	if (midVal == val)
	{
		return mid;
	}
	if (mid == low || mid == high)
	{
		return -1;
	}
	
	if (midVal > val)
	{
		return binary_search(data, val, low, mid);
	} 
	else 
	{
		return binary_search(data, val, mid, high);	
	}
}

int main(int argc, char *argv[]) {
	int data[]={1, 3, 7, 8, 9, 19, 21, 49, 56};
	int len = sizeof(data) / sizeof(data[0]); 
	int val = 8;
	int i = binary_search(data, val, 0, len-1);
	printf("val=%d, i=%d\n", val, i);

	val = 18;
	i = binary_search(data, val, 0, len-1);
	printf("val=%d, i=%d\n", val, i);

	return 0;
}
