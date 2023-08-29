#include <iostream>
#include <limits>

using namespace std;

int main(){
    unsigned long int uli = numeric_limits<unsigned long>::max();
    long int li = uli;
    
    cout << "Valor de >uli<: " << uli << endl;
    cout << "Valor de >li<: " << li << endl;
    uli = li;
    cout << "Novo Valor de >uli<: " << uli << "\n\n";
    
    // o tamanho de uli e li é igual como mostrado no codigo comentario abaixo
    //
    // cout << "tamanho de long int e unsigned eh igual? " << (sizeof(unsigned long int) == sizeof(long int)) << endl;
    //
    // ou seja, ao passar um conteudo entre long int e undigned long int o conteudo continua o mesmo, a unica coisa que 
    // é como é tratado o conteudo. 
    // A sequencia de bits que representa 4294967295 no uli e -1 no li é a mesma, entao ao voltar não há nenhuma perda
    // de conteudo. 



    cout << "Limite superior do tipo >int< : " << numeric_limits<int>::max() << endl;
    cout << "Limite inferior do tipo >int< : " << numeric_limits<int>::min() << endl;
    cout << "Limite superior do tipo >usigned long int< : " << uli << endl;
    cout << "Limite inferior do tipo >usigned long int< : " << numeric_limits<unsigned long>::min() << endl;



    return 0;
}