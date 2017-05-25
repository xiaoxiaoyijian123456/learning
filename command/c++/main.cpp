// run it with:
//   download cmdline.h from : https://github.com/tanakh/cmdline
//
//   g++.exe -c main.cpp -o main.o -I"E:/Dev-Cpp/MinGW64/include" -I"E:/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"E:/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.8.1/include" -I"E:/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.8.1/include/c++" 
//   g++.exe main.o -o main.exe -L"E:/Dev-Cpp/MinGW64/lib" -L"E:/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib" -static-libgcc
//   main.exe
//   main.exe --port=9091
//   main.exe -p 9091
#include "cmdline.h"

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	cmdline::parser a;
	a.add<int>("port", 'p', "set port", false, 9090, cmdline::range(1, 65535));
	a.parse_check(argc, argv);
	
	cout << "port=" << a.get<int>("port") << endl;
	
	return 0;
}