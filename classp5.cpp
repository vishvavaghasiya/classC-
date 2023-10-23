#include<iostream>
using namespace std;
class rectangle 
{
    private:
        int length,height;

    public:
        int l=length,h=height;

    void  area(int l,int h)
    {
        cout << "area  is :" << l*h << endl;
    }
    void  circ(int l,int h)
    {
        cout << "circ is "<< 2*(l+h);
    }


};
int main()
{
    int a,b;
    cin>> a>>b;

    rectangle r1;
    r1.area(a,b);
    r1.circ(a,b);
    return 0;
}
