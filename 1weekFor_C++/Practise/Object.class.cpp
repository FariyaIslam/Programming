#include<bits/stdc++.h>
using namespace std;

class relation
{
    string premik;
    string premika;

public:
    void setinfo(string, string );
    void displayinfo ();
};

void relation :: setinfo(string p, string ka)
{
    premik = p;
    premika = ka;
}

void relation :: displayinfo()
{
    cout << "premik :" << premik << endl;
    cout << "premika :" << premika <<endl;
}
int main()
{
    relation prothom;
    prothom.setinfo("Int", "flot");
    prothom.displayinfo();
    return 0;
}
