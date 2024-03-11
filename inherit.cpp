#include<bits/stdc++.h>
using namespace std;

class student
{
public:
    int ID;
    string name;

    void display()
    {

        cout << "ID:"<< ID <<endl;
        cout << "Name:"<< name<< endl;
    }
};

class person : public student
{
public:
    int age;

    void display1()
    {
        cout << "Age:" << age << endl;
        cout << "ID:"<< ID <<endl;
        cout << "Name:"<< name<< endl;

    }

};



int main ()
{

    person s1;
    s1.ID=26;
    s1.name= "Towsif";
    s1.age= 17;
    s1.display1();

    return  0;

}
