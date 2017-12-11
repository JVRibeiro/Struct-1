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
    nascimento a;
};




int main()
{
    person victor;

    victor.age = 22;
    victor.height = 1.80;
    victor.weight = 70;

    victor.a.dia = 2;
    victor.a.mes = 1;
    victor.a.ano = 1995;

    cout << "Idade: " << victor.age << endl;
    cout << "Altura: " << victor.height << endl;
    cout << "Peso: " << victor.weight << endl;
    cout << "Nascimento: " << victor.a.dia << "/" << victor.a.mes << "/" << victor.a.ano << endl;



    return 0;
}
