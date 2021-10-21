#include<bits/stdc++.h>
using namespace std;

class xyz
{
    string name;
public:
    void getdata(string);
    void putdata();
};

void xyz:: getdata(string A)
{
    name = A;
}
void xyz :: putdata()
{
    cout << "name :" << name <<endl;
}

int main()
{
    xyz  var;
    var.getdata("ISLAM");
    var.putdata();

    return 0;
}
