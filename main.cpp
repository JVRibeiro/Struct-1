#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct person {
    int age;
    float height;
    float weight;
};


int main()
{
    person victor;

    victor.age = 22;
    victor.height = 1.80;
    victor.weight = 70;

    cout << "Idade: " << victor.age << endl;
    cout << "Altura: " << victor.height << endl;
    cout << "Peso: " << victor.weight << endl;



    return 0;
}
