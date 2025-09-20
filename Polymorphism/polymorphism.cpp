/*
    Polymorphism: Polymorphism is the ability of objects to take on
    diffrent forms or behave in diffrent ways depending on tne context
    in which they are used.
        Ex:- Constructor overloading

    > Compile Time Polymorphism (statically)
        ex: Constructor overloading, function overloading(diffrence only parameters) etc.
    > Run Time Polymorphism
*/
//..............ex of polymorphism using constructor overloading....................
#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;

    //non parameterized
    Student(){
        cout << "Non parameterized Constructor.";
    }
    //parameterized
    Student(string name){
        this->name = name;
        cout << "parameterized Constructor.";
    }
};

int main(){
    Student s1;
    Student s2("sidharth chandra");
    return 0;
}