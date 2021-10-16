#include<bits/stdc++.h>
using namespace std;

void printHello();
int add(int, int);

int main()
{
    printHello();
    cout << add(89,45);

    return 0;
}

void printHello() {
    cout << "Helo World!\n";
}

 int add(int x, int y)
 {
     return x+y;
 }
