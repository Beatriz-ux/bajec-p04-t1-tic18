#include <iostream>
using namespace std;

//Para caractere especial:
#include <wchar.h> 
#include <locale.h>

int main(void) 
{
    

    char ch = 48;
    
    cout << ch++ << " -- " << dec << int(ch) << " -- " << oct << int(ch) << " -- " << hex << int(ch) << endl;
    cout << ch++ << " -- " << dec << int(ch) << " -- " << oct << int(ch) << " -- " << hex << int(ch) << endl;
    cout << ch++ << " -- " << dec << int(ch) << " -- " << oct << int(ch) << " -- " << hex << int(ch) << endl;
    cout << ch++ << " -- " << dec << int(ch) << " -- " << oct << int(ch) << " -- " << hex << int(ch) << endl;
    cout << ch++ << " -- " << dec << int(ch) << " -- " << oct << int(ch) << " -- " << hex << int(ch) << endl;
    cout << ch++ << " -- " << dec << int(ch) << " -- " << oct << int(ch) << " -- " << hex << int(ch) << endl;
    cout << ch++ << " -- " << dec << int(ch) << " -- " << oct << int(ch) << " -- " << hex << int(ch) << endl;
    cout << ch++ << " -- " << dec << int(ch) << " -- " << oct << int(ch) << " -- " << hex << int(ch) << endl;
    cout << ch++ << " -- " << dec << int(ch) << " -- " << oct << int(ch) << " -- " << hex << int(ch) << endl;
    cout << ch << " -- " << dec << int(ch) << " -- " << oct << int(ch) << " -- " << hex << int(ch) << endl;

    cout << "Digite um caractere: ";
    cin >> ch;
    cout << ch << " -- " << dec << int(ch) << " -- " << oct << int(ch) << " -- " << hex << int(ch) << endl;


    // Para implementar um caractere especial, utilizamos:
    setlocale(LC_ALL, "en_US.UTF-8");
    wchar_t widech;
    cout << "Digite um caractere especial: ";
    wcin >> widech;
    wprintf(L"%lc\n", widech);
    cout << dec << int(widech) << " -- " << oct << int(widech) << " -- " << hex << int(widech) << endl;

    /*
    Sobre o programa não imprimir caracteres especiais no Linux, vi um post dizendo que,
    aparentemente, enquanto o windows encara esses caracteres como 2 bytes, o linux (e talvez
    outros SOs) encaram como 3-4 bytes, portanto não conseguem imprimir (ao menos foi o que entendi)

    Link de referência:
    https://stackoverflow.com/questions/4588302/why-isnt-wchar-t-widely-used-in-code-for-linux-related-platforms
    */
    return 0;
}