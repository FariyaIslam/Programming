#include<bits/stdc++.h>
using namespace std;

class student
{
    string name;
    int roll;

public:
    void getdata(string, int);
    void showdata();
};

void student :: getdata(string X, int Y)
{
    name = X;
    roll = Y;
}

void student :: showdata()
{
    cout << "name :" <<name <<endl << "roll :" <<roll <<endl;
}

int main()
{
    student t;
    t.getdata("fariya", 35);
    t.showdata();
    return 0;
}
