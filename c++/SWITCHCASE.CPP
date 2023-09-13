#include<iostream>
using namespace std;

int main()
{
  int num;
  cout<<"Enter 0,1 or 2\n";
  cin>>num;
  switch(num)
  {
    case 0 :
        cout<<"U entered zero\n";
        break;
    case 1 :
        cout<<"U entered one\n";
        break;
    case 2 :
        cout<<"U entered two\n";
        break;
    default:
        cout<<"other than 0,1 or 2\n";
  }  
  return 0;
  
}