//ex of run time polymorphism: function overiding, vertual function  -> inharitance
/*
    Function overiding: Parent and child both contains the same function
    with diffrent implementation, The parent class function is said to be overridden.
*/
//....................Function overiding......................
#include<iostream>
#include<string>
using namespace std;

class Parent{
public:
    void getinfo(){
        cout << "Parent class" << endl;
    }
};

class Child: public Parent{
public:
    void getinfo(){
        cout << "Child class" << endl;
    }
};

int main(){
    Child c1;
    c1.getinfo();
    Parent p1;
    p1.getinfo();
    return 0;
}

/*
    vertual function: virtual function is a member function that you
    expect to be redefined in derived(child) classes.

    > virtual functions are dynamic in nature
    > defined by the keyword "virtual" inside a base class and are always
      declared with a base class and overridden in a child classes.
    > A virtual function is called during Runtime
*/
//..........................virtual function.........................
// #include<iostream>
// #include<string>
// using namespace std;

// class Parent{
// public:
//     virtual void getinfo(){
//         cout << "hello from parent class" << endl;
//     }
// };

// class Child: public Parent{
// public:
//     void getinfo(){
//         cout << "hello from child class" << endl;
//     }
// };

// int main(){
//     Child c1;
//     c1.getinfo();
//     Parent p1;
//     p1.getinfo();
//     return 0;
// }