#include <iostream>

using namespace std;

int main(){
    char ch = '0';
    cout << "DIG\tASCII(dec)\tASCII(hex)\tASCII(oct)\n";
    cout << "0 \t" << dec << (int) ch << "\t\t" << hex << (int)ch << "\t\t" << oct << (int)ch++ << '\n';
    cout << "1 \t" << dec << (int) ch << "\t\t" << hex << (int)ch << "\t\t" << oct << (int)ch++ << '\n';
    cout << "2 \t" << dec << (int) ch << "\t\t" << hex << (int)ch << "\t\t" << oct << (int)ch++ << '\n';
    cout << "3 \t" << dec << (int) ch << "\t\t" << hex << (int)ch << "\t\t" << oct << (int)ch++ << '\n';
    cout << "4 \t" << dec << (int) ch << "\t\t" << hex << (int)ch << "\t\t" << oct << (int)ch++ << '\n';
    cout << "5 \t" << dec << (int) ch << "\t\t" << hex << (int)ch << "\t\t" << oct << (int)ch++ << '\n';
    cout << "6 \t" << dec << (int) ch << "\t\t" << hex << (int)ch << "\t\t" << oct << (int)ch++ << '\n';
    cout << "7 \t" << dec << (int) ch << "\t\t" << hex << (int)ch << "\t\t" << oct << (int)ch++ << '\n';
    cout << "8 \t" << dec << (int) ch << "\t\t" << hex << (int)ch << "\t\t" << oct << (int)ch++ << '\n'; 
    cout << "9 \t" << dec << (int) ch << "\t\t" << hex << (int)ch << "\t\t" << oct << (int)ch++ << '\n'; 

    cout << "\n\nDigite um caractere: ";
    cin >> ch;
    cout << "DIG\tASCII(dec)\tASCII(hex)\tASCII(oct)\n";
    cout << ch << "\t" << dec << (int) ch << "\t\t" << hex << (int)ch << "\t\t" << oct << (int)ch<< '\n';
    return 0;
}