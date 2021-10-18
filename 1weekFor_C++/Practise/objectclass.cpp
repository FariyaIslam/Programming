#include<bits/stdc++.h>
using namespace std;

class student
{
    string name;
    //int roll;

public:
    void getdata(string);
    void display();
};
void student ::getdata(string X)
{
    name = X;
    //roll = Y;
}

void student ::display()
{
    cout << "name: " << name << endl;
}

int main()
{
    student halum;
    halum.getdata("fariya");
    halum.display();
    return 0;
}
