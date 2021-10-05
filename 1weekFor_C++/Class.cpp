#include<iostream>
using namespace std;

class animal
{
public:
    string name;
    int weight;

};



int main()
{
    animal dog, cat;
    dog.name = "tommy";
    dog.weight = 10;
    cat.name = "Fanta";
    cat.weight = 6;

    cout << "dog name & weight: " << dog.name << "," << dog.weight << endl;
    cout << "cat name & weight: " << cat.name << "," << cat.weight << endl;



    return 0;
}
