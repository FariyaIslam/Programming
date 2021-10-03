#include<iostream>
using namespace std;

class student
{
    public:
    int id;
    float cgpa;

};

int main()
{
    student X;
    X.id = 5;
    X.cgpa = 4.00;
    cout << X.id << " " << X.cgpa << endl;
    return 0;
}
