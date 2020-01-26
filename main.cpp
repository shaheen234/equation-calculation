#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c,power,result;
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    cout<<"enter the value of b:"<<endl;
    cin>>b;
    cout<<"enter value of c:"<<endl;
    cin>>c;
    power=pow(b,2);
    result=power-(4*a*c);

    if (result>=0)
    {
        if (result=0)
        {
            cout<<"equation has single repeated roots"<<endl;
        }
        else
        {
            cout<<"equation has 2 roots"<<endl;
        }


        int x,y;
        x=-b+(power-4*a*c)^1/2;
        x=x/2*a;
        y=-b-(power-4*a*c)^1/2;
        y=y/2*a;
        cout<<"negative root="<<y<<endl;
        cout<<"positive root="<<x<<endl;
    }
    else
    {
        cout<<"discriminent is less then zero"<<endl;
        cout<<"complex roots"<<endl;
    }
}
