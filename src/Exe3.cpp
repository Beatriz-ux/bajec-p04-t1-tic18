#include <iostream>
using namespace std;

// Para pegar os maiores e menores valores possíveis.
// Os dois funcionam

#include <limits>
//#include <limits.h>
#include <climits>

int main()
{
    //a
    cout << "Maior valor de um Int: " << INT_MAX << endl;
    cout << "Menor valor de um Int: " << INT_MIN << endl;

    //b
    unsigned long int uli = std::numeric_limits<unsigned long int>::max();
    
    cout << "Maior valor de um unsigned long int: " << uli << endl;
    cout << "Menor valor de um unsigned long int: " << std::numeric_limits<unsigned long int>::min() << endl;

    //c
    long int li = uli;
    uli = li;
    cout << "li = " << li << endl << "uli = " << uli << endl;

    // Depois de alguns testes, penso que, por você atribuir a uma variável fora do 
    // limite dela, ela acaba retornando "1" no sinal oposto. Nesse caso, uli sendo positivo
    // retorna "-1", mas se colocarmos "-uli", acaba retornando "1"

    //d
    li = LONG_MAX;
    
    cout << "Maior valor de um long int: " << li << endl;
    cout << "Menor valor de um long int: " << LONG_MIN << endl;

    //e
    unsigned int ui = li;
    li = ui;
    cout << "ui = " << ui << endl << "li = " << li << endl;

    // O número máximo de li não é maior do que o máximo de ui, portanto, ele "cabe" 
    // dentro de ui, atribuindo o valor a ele sem problema

    //f
    ui = UINT_MAX;
    
    cout << "Maior valor de um unsigned int: " << ui << endl;
    cout << "Menor valor de um unsigned int: " << std::numeric_limits<unsigned int>::min() << endl;
    return 0;
}