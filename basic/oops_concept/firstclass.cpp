#include<iostream>
using namespace std;

class hero {
     //properties
     public:
     int health;
     private:
     char level;

     

};

int main() {

//creating of object
    hero ram;

    cout << "health is :" << ram.health << endl;
    cout << "level is:" << ram.level << endl;
    cout << "size : " << sizeof(ram) << endl;
    return 0;
}