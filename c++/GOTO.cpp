#include<iostream>
using namespace std;
int main() {
    int x;
    start:
        cout<<"Enter the number between 50 to 70\n";
        cin>>x;
        if( x<50 || x>70){
            goto start;
        }
        cout<<"You entered correct number"<<endl;
    return 0;
}