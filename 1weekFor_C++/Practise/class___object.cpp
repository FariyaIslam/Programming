#include<bits/stdc++.h>
using namespace std;

class access
{
    string name;
    int roll;

public:
     void getdata(string, int);
     void putdata();
};

void access ::getdata(string X, int Y)
{
    name = X;
    roll = Y;
}
void access ::putdata()
{
    cout << "name :" <<name <<endl <<"roll :" <<roll <<endl;
}

int main()
{
    access var;
    var.getdata("zenifar", 90);
    var.putdata();
    return 0;
}
