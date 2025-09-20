/*
    destructor: this is opposite of constructor.

    default destructor deallocate only statically allocated memory.
    that's why we need deallocate dynamically allocated memory manually.
*/
#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    double* cgpaptr;

    //custom parameterized constructor
    Student(string name, double cgpa){
        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }

    //destructor    if not create, default destructor invoke automatically,
    //but not deallocate dynamic memory it means memory leaks.
    ~Student(){
        delete cgpaptr;
        cout << "Hi, i delete everything, even dynamic memory!";
    }

    void getinfo(){
        cout << "name: " << name << endl;
        cout << "cgpa: " << *cgpaptr << endl;
    }
};

int main(){
    Student s1("sidharth", 5.4);
    s1.getinfo();
    return 0;
}