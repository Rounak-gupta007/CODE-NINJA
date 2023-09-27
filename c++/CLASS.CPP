#include<iostream>

class Dog {
    public:
    //Attributes
        int age;

    //Methods
        void sound(){
            std::cout<<"woof\n";
        }
};

int main(){
    Dog pitbull;
    Dog Shitzu;

    pitbull.age = 10;
    Shitzu.age = 5;

    std::cout<<"Age of pitbull = "<<pitbull.age<<std::endl;
    std::cout<<"Age of Shitzu = "<<Shitzu.age<<std::endl;

    pitbull.sound();
    Shitzu.sound();

}