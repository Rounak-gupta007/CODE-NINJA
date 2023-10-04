#include<iostream>
#include<cmath>
#include<limits>
using namespace std;

class Calci{
    private:
        double a, b;
    public:
    void input_data(double ax, double bx){
        a = ax;
        b = bx;
    }
    void add(){
        cout<<"Addition = "<<a+b<<endl;
    }
    void sub(){
        cout<<"Substraction = "<<a-b<<endl;
    }
    void mul(){
        cout<<"multiplication = "<<a*b<<endl;
    }
    void div() {
        if(b!=0){
        cout<<"Division = "<<a/b<<endl;
        }
        else{
            cout<<"Divion by 0 is invalid!!"<<endl;
        }
    }
    void mod(){
        if(b!=0){
        cout<<"Modular_ Division = "<<fmod(a, b)<<endl;
        } else {
            cout<<"Divion by 0 is invalid!!"<<endl;
        }
    }

};


int main() {
    Calci c1;
    char choice;
            double num1, num2;

        cout<<"Enter the first number: ";
        while (!(cin >> num1)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid number: ";
        }

        cout<<"Enter the second number: ";
        while (!(cin >> num2)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid number: ";
        }

        c1.input_data(num1, num2);

    do{
        cout<<"Selct an operation: "<<endl;
        cout<<"1. Addition" <<endl;
        cout<<"2. Substraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Modulus"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"\nEnter your Choice:  "<<endl;
        cin>>choice;
        
        switch (choice){
            case '1':
                c1.add();
                break;
            case '2':
                c1.sub();
                break;
            case '3':
                c1.mul();
                break;
            case '4':
                c1.div();
                break;
            case '5':
                c1.mod();
                break; 
            case '6':
                cout<<"Exiting the Rounak Calci Service...Use a better one"<<endl;
                break;
            default:
                cout<<"Invalid choice!! Enter the correct choice!!";             
        }



    } while(choice != '6');


    return 0;
}
