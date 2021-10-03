#include<iostream>
using namespace std;

class office
{
public:
    int number;
    double salary;

};


int main()
{
    office olivia;
    olivia.number = 15;
    olivia.salary = 1700.99;

    office amelia;
    amelia.number = 17;
    amelia.salary = 1500.78;

    cout << olivia.number << " " << olivia.salary<<endl;
    cout << amelia.number << " " << amelia.salary <<endl;

    return 0;
}
