#include <iostream>
#include <wchar.h>

using namespace std;

int main(void){

    char c = '0';
    wchar_t wc;

    cout << "\tInt\tHex\tOct\n";
    cout << "'" << c <<"' -\t" << (int)c << '\t' << hex << (int)c << '\t' << oct << (int)c++ << '\t' << '\n';
    cout << "'" << c <<"' -\t" << (int)c << '\t' << hex << (int)c << '\t' << oct << (int)c++ << '\t' << '\n';
    cout << "'" << c <<"' -\t" << (int)c << '\t' << hex << (int)c << '\t' << oct << (int)c++ << '\t' << '\n';
    cout << "'" << c <<"' -\t" << (int)c << '\t' << hex << (int)c << '\t' << oct << (int)c++ << '\t' << '\n';
    cout << "'" << c <<"' -\t" << (int)c << '\t' << hex << (int)c << '\t' << oct << (int)c++ << '\t' << '\n';
    cout << "'" << c <<"' -\t" << (int)c << '\t' << hex << (int)c << '\t' << oct << (int)c++ << '\t' << '\n';
    cout << "'" << c <<"' -\t" << (int)c << '\t' << hex << (int)c << '\t' << oct << (int)c++ << '\t' << '\n';
    cout << "'" << c <<"' -\t" << (int)c << '\t' << hex << (int)c << '\t' << oct << (int)c++ << '\t' << '\n';
    cout << "'" << c <<"' -\t" << (int)c << '\t' << hex << (int)c << '\t' << oct << (int)c++ << '\t' << '\n';
    cout << "'" << c <<"' -\t" << (int)c << '\t' << hex << (int)c << '\t' << oct << (int)c << '\t' << '\n';

    cout << "Digite um char: ";
    wcin >> wc;
    wcout << "'" << wc <<"' -\t" << (int)wc << '\t' << hex << (int)wc << '\t' << oct << (int)wc << '\t' << '\n';

    return 0;
}