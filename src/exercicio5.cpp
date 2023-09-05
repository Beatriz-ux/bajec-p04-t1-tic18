#include <iostream>
using namespace std;


int main()
{
    //a
    
    bool b = true;
    cout << "Se b == true: " << b << endl;
    b = false;
    cout << "Se b == false: " << b << endl << endl;


    b = 1;
    cout << "Se b != 0: " << b << endl;
    b = 0;
    cout << "Se b == 0: " << b << endl << endl;


    b = 0.135;
    cout << "Se float b != 0: " << b << endl << endl;


    b = '1';
    cout << "Se b == '1': " << b << endl;
    b = '0';
    cout << "Se b == '0': " << b << endl;
    b = ' ';
    cout << "Se b == ' ': " << b << endl;
    b = '/0';
    cout << "Se b == '/0': " << b << endl;
    return 0;
}