#include<bits/stdc++.h>
using namespace std;

class student
{
    string name;
    int roll;
    float height;

public:
    void getdata(string, int, float);
    void showdata();
};

void student :: getdata( string abc, int X, float yz)
{
    name = abc;
    roll = X;
    height = yz;
}

void student :: showdata()
{
    cout << "name :" << name << endl << "roll :" << roll <<endl << "height :" << height <<endl;
}

int main()
{
    student cse;
    cse.getdata("fariya", 35, 67.9);
    cse.showdata();
    return 0;
}
