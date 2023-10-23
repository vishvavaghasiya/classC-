/*// OPERATER OVERLODING 
#include<iostream>
using namespace std;
class loc
{
    int longitude,latitude;
    public:
    loc()
    {}
    loc(int lg,int lt)
    {
        longitude=lg;
        latitude=lt;
    }
    void show()
    {
        cout<<"\n LONGTITUDE :"<<longitude;
        cout<<"\n LATITUDE :"<<latitude<<"\n";
    }
    loc operator+(loc);
    loc operator-(loc);
    loc operator*(loc);
    loc operator/(loc);
};
loc loc :: operator+(loc obj2)
{
    loc temp;
    temp.longitude=longitude+obj2.longitude;
    temp.latitude=latitude+obj2.latitude;
    return temp;
}
loc loc ::operator-(loc obj2)
{
    loc temp;
    temp.longitude=longitude-obj2.longitude;
    temp.latitude=latitude-obj2.latitude;
    return temp;
}
loc loc ::operator*(loc obj2)
{
    loc temp;
    temp.longitude=longitude*obj2.longitude;
    temp.latitude=latitude*obj2.latitude;
    return temp;
}
loc loc ::operator/(loc obj2)
{
    loc temp;
    temp.longitude=longitude/obj2.longitude;
    temp.latitude=latitude/obj2.latitude;
    return temp;
}
int main()
{
    loc obj1(10,20),obj2(5,30),obj5;
    obj1.show();
    obj2.show();
    obj5=obj1+obj2;
    obj5.show();
    obj5=obj1-obj2;
    obj5.show();
    obj5=obj1*obj2;
    obj5.show();
    obj5=obj1/obj2;
    obj5.show();   
}*/
#include<iostream>
using namespace std;
class Box
{
    int l,w,h;

    public:
    void setdata(int a,int b,int c)
    {
        l = a;  
        w = b;
        h = c;
    }

    int getVolume()
    {
        return l*w*h;
    }

    Box operator*(Box &n)
    {
        Box t;
        t.l = l * n.l;
        t.w = w * n.w;
        t.h = h * n.h;
        return t;
    }

    Box operator-(Box &j)
    {
        Box p;
        p.l = l - j.l;
        p.w = w - j.w;
        p.h = h - j.h;
        return p;
    }
};

int main()
{
    Box b1,b2,b3,b4;
    b1.setdata(2,2,2);
    cout<< "Volume of Box B1 is: "<< b1.getVolume() << endl;
    b2.setdata(3,3,3);
    cout<< "Volume of Box B2 is: "<< b2.getVolume() << endl;

    b3 =  b1 * b2;
    cout<< "Volume of Box B3 is: "<< b3.getVolume() << endl;

    b4= b3 - b1;
    cout<< "Volume of Box B4 is: "<<b4.getVolume()<<endl;
}