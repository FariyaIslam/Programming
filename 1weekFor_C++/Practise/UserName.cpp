#include<bits/stdc++.h>
using namespace std;

class username
{
    string firstName;
    string middileName;
    string lastName;

public:
    void getdata(string, string, string);
    void displayFullName();
};

void username :: getdata(string getFirstName, string getMiddleName, string getLastName)
{
    firstName = getFirstName;
    middileName = getMiddleName;
    lastName = getLastName;
}

void username :: displayFullName()
{
    cout << "Full Name: " << firstName +" "+ middileName +" "+ lastName <<endl;

}

int main()
{
    username showdata;
    showdata.getdata("Abdullah", "Al-mamun", "Himel");
    showdata.displayFullName();

    return 0;
}
