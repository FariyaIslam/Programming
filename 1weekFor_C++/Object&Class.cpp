#include<iostream>
using namespace std;

class student {
    public:
        int id;
        double cgpa;

};


int main()
{
    student james;
    james.id = 106;
    james.cgpa = 3.55;

    cout <<james.id << " " << james.cgpa;
    return 0;
}
