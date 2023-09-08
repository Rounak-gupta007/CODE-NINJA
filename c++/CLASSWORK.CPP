#include<iostream>
using namespace std;
int main()
{
    int a,b,sum,sub,div,mul,rem;
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    sum=a+b;
    sub=a-b;
    div=a/b;
    mul=a*b;
    rem=a%b;
    cout<<"Sum of "<< a <<" and "<< b <<" is "<<sum<<endl;
    cout<<"Sub of "<< a <<" and "<< b <<" is "<<sub<<endl;
    cout<<"Div of "<< a <<" and "<< b <<" is "<<div<<endl;
    cout<<"Mul of "<< a <<" and "<< b <<" is "<<mul<<endl;
    cout<<"Rem of "<< a <<" and "<< b <<" is "<<rem<<endl;
    return 0;
}