#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main(){
    float pif = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593344612847564823378678316527120190914564856692346034861045432664821339360726024914127372458700660631558817488152092096282925409171536436789259036001133053054882046652138414695194151160943305727036575959195309218611738193261179310511854807446237996274956735188575272489122793818301194912;

    cout << "Limite superior do tipo >float< : " << numeric_limits<float>::max() << endl;
    cout << "Limite inferior do tipo >float< : " << numeric_limits<float>::min() << endl;
    
    cout << fixed;
    cout << "Valor de pif (2 casas decimais): " << setprecision(2) << pif << endl;
    cout << "Valor de pif (4 casas decimais): " << setprecision(4) << pif << endl;
    cout << "Valor de pif (8 casas decimais): " << setprecision(8) << pif << endl;
    cout << "Valor de pif (16 casas decimais): " << setprecision(16) << pif << endl;


    
    return 0;
}