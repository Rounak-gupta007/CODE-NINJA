#include <iostream>
using namespace std;

int main()
{
  char ch;
  while(1){
  cout << "Enter any character: ";
  cin >> ch;
  switch(ch) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    cout << ch << " is a vowel.\n";
    break;
    default:
    cout << ch << " Not a vowel.\n";
    break;
  }
  }  
  return 0;
}