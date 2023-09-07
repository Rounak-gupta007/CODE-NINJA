#include <iostream>
using namespace std;

int main()
{
    void show();
    cout<<"in main"<<endl;
    show();
    cout<<"Back in main"<<endl;
}
void show()
{
    cout<<"in show function"<<endl;
}
