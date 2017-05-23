// run it with:
//   g++.exe -c main.cpp -o main.o -I"E:/Dev-Cpp/MinGW64/include" -I"E:/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"E:/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.8.1/include" -I"E:/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.8.1/include/c++" 
//   g++.exe main.o -o main.exe -L"E:/Dev-Cpp/MinGW64/lib" -L"E:/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib" -static-libgcc
//   main.exe
#include <iostream>
#include <string>

using namespace std;

string& trim(string &);

int main(int argc, char** argv) {
	string s = " xx ";
	string ret = trim(s);
	
	cout << "s=" << s << ", ret=" << ret << endl;
	return 0;
}

string& trim(string &s)   
{  
    if (s.empty())   
    {  
        return s;  
    }  
  
    s.erase(0, s.find_first_not_of(" "));  
    s.erase(s.find_last_not_of(" ") + 1);  
    return s;  
}  