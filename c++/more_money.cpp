#include<iostream>
int main()
{
    using namespace std;
    int amount;
    cout<< "How much money you have ?"<<endl;
    cin>>amount;
    cout<<"Here are 1000 more"<<endl;
    amount = amount + 1000;
    cout<<"now you have"<< amount <<"more."<<endl;
    return 0;
}