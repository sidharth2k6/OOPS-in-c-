//.........................Virtual function.....................

// A virtual function is a member function in a base class
//that can be overridden in a derived class.

#include<iostream>
#include<string>
using namespace std;

class Shape{
    virtual void draw() = 0; //pure virtual function when intiatalized with 0
};

class Circle: public Shape{
public:
    void draw(){
        cout << "Drawing a circle" << endl;
    }
};

int main(){
    Circle c1;
    c1.draw();
    return 0;
}

//.........................Friend function.....................

// A friend function is a non-member function that has access
//to the private and protected members of a class.

// #include <iostream>
// using namespace std;

// class Box {
// private:
//     int length;

// public:
//     Box(int l) {
//         length = l;
//     }

//     // friend function declaration
//     friend void printLength(Box b);
// };

// // Friend function definition
// void printLength(Box b) {
//     // ✔ Ab private member access allowed hai
//     cout << "Length = " << b.length << endl;
// }

// int main() {
//     Box b1(10);
//     printLength(b1);
//     return 0;
// }