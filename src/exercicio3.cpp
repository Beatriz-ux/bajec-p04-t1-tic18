#include <iostream>
#include <locale>
#include <climits>
using namespace std;
int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    cout << "A)" << endl;
    cout << "Valor m�ximo de int: " << INT_MAX << endl;
    cout << "Valor m�nimo de int: " << INT_MIN << endl;

    cout << "B)" << endl;
    unsigned long int uli = ULONG_MAX;
    cout << "Valor m�ximo de unsigned long int: " << uli << endl;
    cout << "Valor m�nimo de unsigned long int: " << 0 << endl;

    cout << "C)" << endl;
    long int li = uli;
    uli = li;
    cout << "Valor de li = " << li << endl;
    cout << "Valor de uli = " << uli << endl;
    // Saida do console -> Valor de li = -1
    //                     Valor de uli = 4294967295
    // Quando fazemos a atribui��o do li=uli, vemos que a sua representa�ao muda para -1 , ja que agora o bit de sinal importa.
    // E ap�s retonar esse valo a uli, vemos que o valor continua o mesmo, ja que agora o bit mais significativo faz parte do numero como um todo.
    // N�o temos perca de infoma��o, pois ambos os tipos possuem a mesma quantidade de bits para representar um n�mero.

    cout << "D)" << endl;
    li = LONG_MAX;
    cout << "Valor m�ximo de long int: " << li << endl;
    cout << "Valor m�nimo de long int: " << LONG_MIN << endl;

    cout << "E)" << endl;
    unsigned int ui = li;
    li = ui;
    cout << "Valor de li = " << li << endl;
    cout << "Valor de ui = " << ui << endl;

    // Sa�da do console -> Valor de li = 2147483647
    //                     Valor de ui = 2147483647
    // Esse caso temos a mesma representa��o no console
    // isso ocorre pois o maior numero do "long int" pode ser representado no "unsigned int".
    // De forma geral, o "unsigned int" por n�o representar negativos, consegue representar um numero maior que o "long int"
    // e por isso n�o houve troca de representa��es.

    cout << "F)" << endl;
    ui = ULONG_MAX;
    cout << "Valor m�ximo de unsigned int: " << ui << endl;
    cout << "Valor m�nimo de unsigned int: " << 0 << endl;
    
    return 0;
}