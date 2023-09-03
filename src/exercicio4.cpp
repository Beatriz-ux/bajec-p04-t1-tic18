#include <iostream>
#include <locale>
#include <float.h>
#include <iomanip>
using namespace std;

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    cout << "A)" << endl;
    cout << "Valor máximo de float: " << FLT_MAX << endl;
    cout << "Valor mínimo de float: " << FLT_MIN << endl;

    cout << "B)" << endl;
    float pif = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
    cout << "Valor de pif = " << pif << endl;

    cout << "C)" << endl;
    cout << fixed;
    cout << "Valor de pif = " << setprecision(2) << pif << endl;
    cout << "Valor de pif = " << setprecision(4) << pif << endl;
    cout << "Valor de pif = " << setprecision(8) << pif << endl;
    cout << "Valor de pif = " << setprecision(16) << pif << endl;

    cout << "D)" << endl;
    double pid = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
    cout << "Valor de pid = " << pid << endl;
    cout << "Valor de pid = " << setprecision(2) << pid << endl;
    cout << "Valor de pid = " << setprecision(4) << pid << endl;
    cout << "Valor de pid = " << setprecision(8) << pid << endl;
    cout << "Valor de pid = " << setprecision(16) << pid << endl;

    // Na setima casa decimal, o valor de pif e pid começam a se diferenciar.

    cout << "E)" << endl;
    cout << "Valor máximo de double: " << DBL_MAX << endl;
    cout << "Valor máximo de long double: " << LDBL_MAX << endl;

    // Como podemos ver no console, o valor máximo de long double é muito maior que o valor máximo de double.

    return 0;
}