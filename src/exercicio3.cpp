#include <iostream>
#include <limits>

using namespace std;

int main(){
    unsigned long int uli = numeric_limits<unsigned long>::max();

    cout << "Limite superior do tipo >int< : " << numeric_limits<int>::max() << endl;
    cout << "Limite inferior do tipo >int< : " << numeric_limits<int>::min() << endl;
    cout << "Limite superior do tipo >usigned long int< : " << uli << endl;
    cout << "Limite inferior do tipo >usigned long int< : " << numeric_limits<unsigned long>::min() << endl;

    return 0;
}