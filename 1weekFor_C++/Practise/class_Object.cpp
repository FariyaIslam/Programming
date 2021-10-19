#include<bits/stdc++.h>
using namespace std;

class student
{
    int roll;

public:
    void getdata(int);
    void putdata();
};

void student :: getdata(int z)
{
    roll = z;
}
void student :: putdata()
{
    cout << "roll :" << roll;
}

int main()
{
    student s;
    s.getdata(8);
    s.putdata();
    return 0;
}

