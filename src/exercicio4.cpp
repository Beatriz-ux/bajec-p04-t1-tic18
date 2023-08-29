#include <iostream>
#include <limits>

using namespace std;

int main(){
    cout << "Limite superior do tipo >float< : " << numeric_limits<float>::max() << endl;
    cout << "Limite inferior do tipo >float< : " << numeric_limits<float>::min() << endl;
    return 0;
}