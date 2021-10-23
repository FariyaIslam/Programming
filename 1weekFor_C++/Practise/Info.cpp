#include<bits/stdc++.h>
using namespace std;

class info
{
    int ID;
    float height;

public:
    void getdata(int,float);
    void display();
};

void info :: getdata(int X, float Y)
{
    ID = X;
    height = Y;
}

void info :: display()
{
    cout << "ID :" <<ID <<endl <<"height :" <<height <<endl;
}
int main()
{
    info match;
    match.getdata(35, 89.0);
    match.display();
    return 0;
}
