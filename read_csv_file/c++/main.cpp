// run it with:
//   g++.exe -c main.cpp -o main.o -I"E:/Dev-Cpp/MinGW64/include" -I"E:/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"E:/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.8.1/include" -I"E:/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.8.1/include/c++" 
//   g++.exe main.o -o main.exe -L"E:/Dev-Cpp/MinGW64/lib" -L"E:/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib" -static-libgcc
//   main.exe
#include <iostream>  
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	ifstream fin("../test.csv");
	string line; 
	while (getline(fin, line)) 
	{
		cout << line << endl;	
	}
	cout << "end." << endl;
	
	return 0;
}
