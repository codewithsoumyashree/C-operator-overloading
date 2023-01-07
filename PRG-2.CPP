#include<iostream>
using namespace std;
class distance2
{
    int feet,inches;
    public:
    distance2 (int f=0, int i=0)
    {
        feet=f;
        inches=i;
    }
    friend distance2 operator+(distance2 c1, distance2 c2)
    {
        distance2 t;
        t.feet=c1.feet+c2.feet;
        t.inches=c1.inches+c2.inches;
        return t;
    }
    void display()
    {
        cout<<feet<<"feet"<<inches<<"inches"<<endl;
    }
};
int main()
{
    distance2 c1(40,20),c2(20,60),c3;
    c3=c1+c2;
    c1.display();
    c2.display();
    c3.display();
}