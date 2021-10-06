#include<iostream>
using namespace std;

class fruits
{
    public:
    int amount;
    float weight;
};

int main()
{
    fruits mango, apple, banana;
    mango.amount = 2;
    mango.weight = 1.2;

    apple.amount = 6;
    apple.weight = 3.5;

    banana.amount = 20;
    banana.weight = 2.2;

    cout << "mangos amount & weight: " << mango.amount << "," << mango.weight << endl;

    cout << "apple amount & weight: " << apple.amount << "," << apple.weight << endl;

    cout << "banana amount & weight: " << banana.amount << "," << banana.weight << endl;

    return 0;
}
