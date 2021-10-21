#include<bits/stdc++.h>
using namespace std;

class clas
    {
        string name;
        int roll;
        float height;

    public:
        void getdata(string, int, float);
        void putdata();

    };

void clas :: getdata(string X, int Y, float Z)
{
    name = X;
    roll = Y;
    height = Z;
}

void clas :: putdata()
{
    cout << "name :" << name << endl << "roll :" << roll << endl << "height :" << height << endl;
}
int main()
{
    clas var;
    var.getdata("Himel", 5, 89.00);
    var.putdata();
    return 0;
}
