#include <iostream>
#include <limits>

using namespace std;

int main(){
    cout << "Limite superior do tipo >int< : " << numeric_limits<int>::max() << endl;
    cout << "Limite inferior do tipo >int< : " << numeric_limits<int>::min() << endl;
    return 0;
}