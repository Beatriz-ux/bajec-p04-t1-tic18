#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    char ch1 = 0, ch2 = '0', ch3 = '\n', ch4 = '\0', ch5 = NULL; 
    int dgt1 = 0, dgt2 = -0, dgt3 = +0, dgt4 = 1, dgt5 = -1, dgt6 = -2, dgt7 = 2, dgt8 = NULL;
    float flt1 = 0, flt2= 0.0, flt3= 0.0000000000, flt4 = 0.000000001, flt5=-0, flt6 = -0.0, flt7 = 1.0, flt8 = 1, flt9 = -1, flt10 = -1.0, flt11 = 2.0, flt12 = -2.0, flt13 = NULL; 
    double dbl1 = 0, dbl2= 0.0, dbl3= 0.0000000000, dbl4 = 0.000000001, dbl5=-0, dbl6 = -0.0, dbl7 = 1.0, dbl8 = 1, dbl9 = -1, dbl10 = -1.0, dbl11 = 2.0, dbl12 = -2.0, dbl13 = NULL;

    cout << boolalpha;
    cout << "TIPO CARACTERE\n";
    cout << "ch: int(0)" << ch1 << " | ASCII: " << (int)ch1 << " | val booleano: " << (bool)ch1 <<endl;
    cout << "ch: " << ch2 << " | ASCII: " << (int)ch2 << " | val booleano: " << (bool)ch2 <<endl;
    cout << "ch: \\n" << " | ASCII: " << (int)ch3 << " | val booleano: " << (bool)ch3 <<endl;
    cout << "ch: \\0" << ch4 << " | ASCII: " << (int)ch4 << " | val booleano: " << (bool)ch4 <<endl;
    cout << "ch: NULL" << ch5 << " | ASCII: " << (int)ch5 << " | val booleano: " << (bool)ch5 <<endl;
    // o valor 0, o cactere \0 e a palavra reservada NULL retornam 0, todos os outros retornam 1

    cout << "\nTIPO STRING: nao pode ser convertido pro tipo booleano\n";

    cout << "\nTIPO INTEIRO\n";
    cout << "int: " << dgt1 << " | val booleano: " << (bool)dgt1 <<endl;
    cout << "int: -" << dgt2 << " | val booleano: " << (bool)dgt2 <<endl;
    cout << "int: +" << dgt3 << " | val booleano: " << (bool)dgt3 <<endl;
    cout << "int: " << dgt4 << " | val booleano: " << (bool)dgt4 <<endl;
    cout << "int: " << dgt5 << " | val booleano: " << (bool)dgt5 <<endl;
    cout << "int: " << dgt6 << " | val booleano: " << (bool)dgt6 <<endl;
    cout << "int: " << dgt7 << " | val booleano: " << (bool)dgt7 <<endl;
    cout << "int: NULL | val booleano: " << (bool)dgt8 <<endl;
    // apenas valor 0 (com ou sem sinal) ou NULL retornam false, o resto retorna true

    cout << "\nTIPO FLOAT\n";
    cout << "float: " << flt1 << " | val booleano: " << (bool)flt1 <<endl;
    cout << "float: " << fixed << setprecision(1)<< flt2 << " | val booleano: " << (bool)flt2 <<endl;
    cout << "float: 0.0000000000 | val booleano: " << defaultfloat << (bool)flt3 <<endl;
    cout << "float: " << flt4 << " | val booleano: " << (bool)flt4 <<endl;
    cout << "float: -" <<flt5 << " | val booleano: " << (bool)flt5 <<endl;
    cout << "float: " << fixed << setprecision(1) <<flt6 << " | val booleano: " << (bool)flt6 <<endl;
    cout << "float: " << flt7 << " | val booleano: " << (bool)flt7 <<endl;
    cout << "float: " << defaultfloat << flt8 << " | val booleano: " << (bool)flt8 <<endl;
    cout << "float: " << flt9 << " | val booleano: " << (bool)flt9 <<endl;
    cout << "float: " << fixed << setprecision(1) << flt10 << " | val booleano: " << (bool)flt10 <<endl;
    cout << "float: " << flt11 << " | val booleano: " << (bool)flt11 <<endl;
    cout << "float: " << flt12 << " | val booleano: " << (bool)flt12<<endl;
    cout << "float: NULL | val booleano: " << (bool)flt13 <<endl;
    // apenas valor 0 (escrito de qualquer forma) ou NULL retornam false, o resto retorna true

    cout << "\nTIPO DOUBLE\n";
    cout << "double: " << defaultfloat << dbl1 << " | val booleano: " << (bool)dbl1 <<endl;
    cout << "double: " << fixed << setprecision(1)<< dbl2 << " | val booleano: " << (bool)dbl2 <<endl;
    cout << "double: 0.0000000000 | val booleano: " << defaultfloat << (bool)dbl3 <<endl;
    cout << "double: " << dbl4 << " | val booleano: " << (bool)dbl4 <<endl;
    cout << "double: -" <<dbl5 << " | val booleano: " << (bool)dbl5 <<endl;
    cout << "double: " << fixed << setprecision(1) <<dbl6 << " | val booleano: " << (bool)dbl6 <<endl;
    cout << "double: " << dbl7 << " | val booleano: " << (bool)dbl7 <<endl;
    cout << "double: " << defaultfloat << dbl8 << " | val booleano: " << (bool)dbl8 <<endl;
    cout << "double: " << dbl9 << " | val booleano: " << (bool)dbl9 <<endl;
    cout << "double: " << fixed << setprecision(1) << dbl10 << " | val booleano: " << (bool)dbl10 <<endl;
    cout << "double: " << dbl11 << " | val booleano: " << (bool)dbl11 <<endl;
    cout << "double: " << dbl12 << " | val booleano: " << (bool)dbl12<<endl;
    cout << "double: NULL | val booleano: " << (bool)dbl13 <<endl;
    // apenas valor 0 (escrito de qualquer forma) ou NULL retornam false, o resto retorna true

    cout << "\nTIPO VOID: nao pode ser convertido pro tipo booleano\n";


    return 0;
}