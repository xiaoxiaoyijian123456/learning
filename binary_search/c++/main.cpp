// run it with:
//   g++.exe -c main.cpp -o main.o -I"E:/Dev-Cpp/MinGW64/include" -I"E:/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"E:/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.8.1/include" -I"E:/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.8.1/include/c++" 
//   g++.exe main.o -o main.exe -L"E:/Dev-Cpp/MinGW64/lib" -L"E:/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib" -static-libgcc
//   main.exe
#include <algorithm>  
#include <iostream>  
#include <iterator>  
#include <vector>

using namespace std;

int main(int argc, char** argv) {
	int arr[]={1, 3, 7, 8, 9, 19, 21, 49, 56};
	size_t cnt=sizeof(arr)/sizeof(int);
	
    vector<int>::iterator iter;  	
	vector<int> v(arr, arr+cnt);
	
	int val = 8;
	iter = lower_bound(v.begin(), v.end(), val);
	int i = (*iter == val) ? (iter - v.begin()): -1;
	cout << "val=" << val << ", i=" << i << endl;
	
	val = 18;
	iter = lower_bound(v.begin(), v.end(), val);
	i = (*iter == val) ? (iter - v.begin()): -1;
	cout << "val=" << val << ", i=" << i << endl;
		
	return 0;
}