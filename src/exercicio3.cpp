#include <iostream>
#include <limits>

using namespace std;

int main(){
    unsigned long int uli = numeric_limits<unsigned long>::max();
    long int li = uli;
    unsigned int ui;
    
    cout << "Valor de >uli<: " << uli << endl;
    cout << "Valor de >li<: " << li << endl;
    uli = li;
    cout << "Novo Valor de >uli<: " << uli << "\n\n";
    
    // Na minha maquina o tamanho de uli e li é igual, o que foi é mostrado no codigo abaixo
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

    li = numeric_limits<long>::max();
    cout << "Limite superior do tipo >long int< : " << li << endl;
    cout << "Limite inferior do tipo >long int< : " << numeric_limits<long>::min() << endl;

    ui = li;
    cout << "\n\nValor de >li<: " << li << endl;
    cout << "Valor de >ui<: " << ui << endl;
    li = ui;
    cout << "Novo Valor de >li<: " << li << "\n\n";

    // Na minha maquina, int e long int possuem o mesmo tamamanho, entao o conteudo de um long int
    // "cabe" em uma variavel do tipo unsigned int (que tem o mesmo tamanho de um int), e ainda sobraria
    // um bit na variavel ui (o que faz o limite superiro do usigned int ser maior), entao a operação 
    // de enviar um conteudo para uma mesma "forma" e dps voltar
    // nao alterou em nada o resultado

    ui = numeric_limits<unsigned int>::max();
    cout << "Limite superior do tipo >unsigned int< : " << ui << endl;
    cout << "Limite inferior do tipo >unsigned int< : " << numeric_limits<unsigned int>::min() << endl;

    return 0;
}