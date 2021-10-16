#include<bits/stdc++.h>
using namespace std;

class circle
{
    float radius;

public:
    void calculateArea(float);
    void displayArea();
};

void circle ::calculateArea(float random)
{
    radius = random;
}
void circle ::displayArea()
{
    cout << "radius is: " << radius <<endl;
}

int main()
{
    circle abs;
    abs.calculateArea(56.99);
    abs.displayArea();
    return 0;
}
