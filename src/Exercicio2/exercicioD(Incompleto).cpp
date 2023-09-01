#include <iostream>
#include <cwchar>

using namespace std;

int main(){

    wchar_t letra;
    
    cout << "Insira um caractere para ser convertido: ";
    wcin >> letra;

    wcout << "'" << letra; 
    wcout << "' - ASCII:" << dec << int(letra);
    wcout << " - HEX: " << hex << int(letra);
    wcout << " - OCT: " << oct << int(letra) << endl;

    return 0;
}