#include<bits/stdc++.h>
using namespace std;

class item
{
    int number;
    float cost;

public:
    void getdata(int a, int b);
    void putdata(void);
};

void item :: getdata(int a, int b)
{
    number = a;
    cost = b;
}

void item :: putdata(void)
{
    cout << "number :" << number <<endl;
    cout << "cost :" <<cost <<endl;
}

int main()
{
    item X;
    X.getdata(100,200);
    X.putdata();

    return 0;
}
