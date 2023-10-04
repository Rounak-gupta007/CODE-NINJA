#include<iostream>
using namespace std;

class Demo
    {
        private:
            int cx, cy;
        public:
            void input_data(int, int);
            void show_data();
    };

    void Demo::input_data(int x, int y){
        cx = x;
        cy = y;
    }
    void Demo::show_data(){
        cout<<"cx = "<<cx<<endl<<"cy = "<<cy<<endl;
    }

    int main(){
        Demo d1;
        d1.input_data(10, 12);
        d1.show_data();
        return 0;
    }