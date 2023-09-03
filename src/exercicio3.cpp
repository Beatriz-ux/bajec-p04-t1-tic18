#include <iostream>
#include <locale>
#include <climits>
using namespace std;
int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    cout << "A)" << endl;
    cout << "Valor máximo de int: " << INT_MAX << endl;
    cout << "Valor mínimo de int: " << INT_MIN << endl;

    cout << "B)" << endl;
    unsigned long int uli = ULONG_MAX;
    cout << "Valor máximo de unsigned long int: " << uli << endl;
    cout << "Valor mínimo de unsigned long int: " << 0 << endl;

    cout << "C)" << endl;
    long int li = uli;
    uli = li;
    cout << "Valor de li = " << li << endl;
    cout << "Valor de uli = " << uli << endl;
    // Saida do console -> Valor de li = -1
    //                     Valor de uli = 4294967295
    // Quando fazemos a atribuição do li=uli, vemos que a sua representaçao muda para -1 , ja que agora o bit de sinal importa.
    // E após retonar esse valo a uli, vemos que o valor continua o mesmo, ja que agora o bit mais significativo faz parte do numero como um todo.
    // Não temos perca de infomação, pois ambos os tipos possuem a mesma quantidade de bits para representar um número.

    cout << "D)" << endl;
    li = LONG_MAX;
    cout << "Valor máximo de long int: " << li << endl;
    cout << "Valor mínimo de long int: " << LONG_MIN << endl;

    cout << "E)" << endl;
    unsigned int ui = li;
    li = ui;
    cout << "Valor de li = " << li << endl;
    cout << "Valor de ui = " << ui << endl;

    // Saída do console -> Valor de li = 2147483647
    //                     Valor de ui = 2147483647
    // Esse caso temos a mesma representação no console
    // isso ocorre pois o maior numero do "long int" pode ser representado no "unsigned int".
    // De forma geral, o "unsigned int" por não representar negativos, consegue representar um numero maior que o "long int"
    // e por isso não houve troca de representações.

    cout << "F)" << endl;
    ui = ULONG_MAX;
    cout << "Valor máximo de unsigned int: " << ui << endl;
    cout << "Valor mínimo de unsigned int: " << 0 << endl;
    
    return 0;
}