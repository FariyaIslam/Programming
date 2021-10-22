#include<bits/stdc++.h>
using namespace std;

class info
{
    string name;
    int roll;


public:
    void getdata(string, int);
    void putdata();
};

void info:: getdata(string X, int Y)
{
    name = X;
    roll = Y;
}

void info :: putdata()
{
    cout <<"name :" <<name << endl <<"roll :" <<roll <<endl;
}

int main()
{
    info mess;
    mess.getdata("fariya", 35);
    mess.putdata();
    return 0;
}
