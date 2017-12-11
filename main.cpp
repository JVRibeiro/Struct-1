#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;



struct nascimento {
    int dia;
    int mes;
    int ano;
};


struct person {
    int age;
    float height;
    float weight;
    nascimento n;
};




int main()
{
    person victor;

    victor.age = 22;
    victor.height = 1.80;
    victor.weight = 70;

    victor.n.dia = 2;
    victor.n.mes = 1;
    victor.n.ano = 1995;

    cout << "Idade: " << victor.age << endl;
    cout << "Altura: " << victor.height << endl;
    cout << "Peso: " << victor.weight << endl;
    cout << "Nascimento: " << victor.n.dia << "/" << victor.n.mes << "/" << victor.n.ano << endl;



    return 0;
}
