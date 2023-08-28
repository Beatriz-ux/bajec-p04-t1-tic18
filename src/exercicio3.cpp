#include <iostream>

using namespace std;

int main(void){
    int min = INT32_MIN;
    int max = INT32_MAX;
    long int limax = __LONG_MAX__;
    long int limin;
    unsigned int uimax = __UINT32_MAX__;
    unsigned int uimin = 0;
    unsigned long int ulimax;
    unsigned long int ulimin = 0;
    unsigned long int uli = INT32_MAX;
    unsigned int ui;
    long int li;

    cout << "a)" << endl;
    cout << "int valor min: " << min << endl;
    cout << "int valor max: " << max << endl;


    cout << "\nb)" << endl;
    cout << "unsigned long int valor min: " << ulimin << endl;
    cout << "unsigned long int valor max: " << ulimax << endl;
    uli = ulimax;


    cout << "\nc)" << endl;
    li = uli;
    cout << "li: " << li << endl;
    uli = li;
    cout << "uli: " << uli << endl;
    //


    cout << "\nd)" << endl;
    cout << "long int valor min: " << limin << endl;
    cout << "long int valor max: " << limax << endl;
    li = limax;


    cout << "\ne)" << endl;
    ui = li;
    cout << "li: " << ui << endl;
    li = ui;
    cout << "uli: " << li << endl;
    //

    cout << "\nf)" << endl;
    cout << "unsigned int valor max: " << uimax << endl;
    cout << "unsigned int valor min: " << uimin << endl;
    ui = uimax;
    
    return 0;
}