/*
     Write a program construct a class name person take private members,
     person's age, person,name and person city make function for getter and
     setter method.
*/
#include <iostream>
using namespace std;
class person
{
    private:
     
    int age;
    string name,city;

    public:
    void setname(string n)
    {
        name=n;
    }
    void setcity(string c)
    {
        city=c;
    }
    void setage(int a)
    {
        age=a;
    }
    void getname()
    {
        cout << name << endl;
    }
    void getcity()
    {
        cout << city << endl;
    }
    void getage()
    {
        cout << age << endl ;
    }
};


int main()
    {
    int a;
    string b,c;
    person p1;

    p1.setname("jungkook");
    p1.setage(27);
    p1.setcity("seoul");

    p1.getage();
    p1.getname();
    p1.getcity();
    return 0;
}
