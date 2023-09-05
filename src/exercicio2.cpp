#include <iostream>
#include <string>
#include <locale>
#include <cwchar>

using namespace std;

int main(void)
{
    // setlocale(LC_ALL, "Portuguese_Brazil");

    char caracter = '0';
    cout << "A)" << endl;
    cout << caracter << " - " << int(caracter++) << endl;
    cout << caracter << " - " << int(caracter++) << endl;
    cout << caracter << " - " << int(caracter++) << endl;
    cout << caracter << " - " << int(caracter++) << endl;
    cout << caracter << " - " << int(caracter++) << endl;
    cout << caracter << " - " << int(caracter++) << endl;
    cout << caracter << " - " << int(caracter++) << endl;
    cout << caracter << " - " << int(caracter++) << endl;
    cout << caracter << " - " << int(caracter++) << endl;
    cout << caracter << " - " << int(caracter++) << endl;

    cout << "B)" << endl;
    caracter = '0';
    cout << "Carac"
         << "\tASCII"
         << "\tOctal"
         << "\tHexa" << endl;
    cout << caracter << "\t"
         << dec << int(caracter) << "\t0"
         << oct << int(caracter) << "\t0x"
         << hex << int(caracter++) << endl;

    cout << caracter << "\t"
         << dec << int(caracter) << "\t0"
         << oct << int(caracter) << "\t0x"
         << hex << int(caracter++) << endl;

    cout << caracter << "\t"
         << dec << int(caracter) << "\t0"
         << oct << int(caracter) << "\t0x"
         << hex << int(caracter++) << endl;

    cout << caracter << "\t"
         << dec << int(caracter) << "\t0"
         << oct << int(caracter) << "\t0x"
         << hex << int(caracter++) << endl;

    cout << caracter << "\t"
         << dec << int(caracter) << "\t0"
         << oct << int(caracter) << "\t0x"
         << hex << int(caracter++) << endl;

    cout << caracter << "\t"
         << dec << int(caracter) << "\t0"
         << oct << int(caracter) << "\t0x"
         << hex << int(caracter++) << endl;

    cout << caracter << "\t"
         << dec << int(caracter) << "\t0"
         << oct << int(caracter) << "\t0x"
         << hex << int(caracter++) << endl;

    cout << caracter << "\t"
         << dec << int(caracter) << "\t0"
         << oct << int(caracter) << "\t0x"
         << hex << int(caracter++) << endl;

    cout << caracter << "\t"
         << dec << int(caracter) << "\t0"
         << oct << int(caracter) << "\t0x"
         << hex << int(caracter++) << endl;

    cout << caracter << "\t"
         << dec << int(caracter) << "\t0"
         << oct << int(caracter) << "\t0x"
         << hex << int(caracter++) << endl;


    cout << "C)" << endl;

    cout << "Digite um caracter: ";
    cin >> caracter;

    cout << "Carac"
         << "\tASCII"
         << "\tOctal"
         << "\tHexa" << endl;

    wcout << caracter << "\t"
          << dec << (int)caracter << "\t0"
          << oct << int(caracter) << "\t0x"
          << hex << int(caracter) << endl;

    cout << "D)" << endl;
    /*Para ler caracteres especiais é preciso ir nas configuraçõeses do UTF-8
        pesquisar por "Iso" e escolher a opção "Weastern ISO-8859-1" e reiniciar o vs code.
        após isso trocasse o  tipo da variavel de char para wchar_t, pois o char não suporta caracteres especiais.
        Agora o codigo abaixo funciona para caracteres especiais e normais.
    */
    wchar_t specialCaracter;

    cout << "Digite um caracter especial: ";
    wcin >> specialCaracter;

    cout << "Carac"
         << "\tASCII"
         << "\tOctal"
         << "\tHexa" << endl;

    wcout << specialCaracter << "\t"
          << dec <<(int)specialCaracter << "\t0"
          << oct << int(specialCaracter) << "\t0x"
          << hex << int(specialCaracter) << endl;

    return 0;
}