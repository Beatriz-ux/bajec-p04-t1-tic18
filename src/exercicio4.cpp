#include <iostream>
using namespace std;

// Para pegar os maiores e menores valores possíveis.
// Os dois funcionam

#include <limits>
#include <cfloat>
#include <iomanip> //Para mudar a quantidade de casas decimais

int main()
{
    //a
    cout << "Maior valor de um float: " << numeric_limits<float>::max() << endl;
    cout << "Menor valor de um float: " << numeric_limits<float>::min() << endl;

    //b
    float pif = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644288109756659334461284756482337867831652712019091456485669234603486104543266482133936072602491412737245870066063155881748815209209628292540917153643678925903600113305305488204665213841469519415116094;
    cout << pif << endl;

    //c
    //*
    cout << setprecision(3) << pif << endl;
    cout << setprecision(5) << pif << endl;
    cout << setprecision(9) << pif << endl;
    cout << setprecision(17) << pif << endl;
    //*/

    //d
    double pid = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644288109756659334461284756482337867831652712019091456485669234603486104543266482133936072602491412737245870066063155881748815209209628292540917153643678925903600113305305488204665213841469519415116094;
    cout << setprecision(6);
    cout << "double/ pid: " << endl << pid << endl;
    // Caso o setprecision não tivesse sido alterado, o cout imprimiria "3.14159", o mesmo
    // número de casas decimais do float

    //e
    cout << setprecision(3) << pid << endl;
    cout << setprecision(5) << pid << endl;
    cout << setprecision(9) << pid << endl;
    cout << setprecision(17) << pid << endl;

    //f
    /*
        Enquanto float imprimiu
        3.1416
        3.14159274
        3.1415927410125732

        o double imprimiu
        3.1416
        3.14159265
        3.1415926535897931

        ou seja, a partir da 7ª casa decimal, o float acaba ficando maior do que
        o double, talvez por estar arredondando os valores, ao invés de imprimir
        de forma mais literal, como o double (que ainda alterou o valor de pi, 
        mas em um grau menor)
    */
    return 0;


}
