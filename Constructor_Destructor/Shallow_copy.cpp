/*
    Shallow copy: A shallow copy of an object copies
    all of the member from one object to another.
*/
#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    double cgpa;

    //custom parameterized constructor
    Student(string name, double cgpa){
        this->name = name;
        this->cgpa = cgpa;
    }
    //custom copy constroctor (if we comment this the default constructor invoke)
    Student(Student &obj){
        this->name = obj.name;
        this->cgpa = obj.cgpa;
    }

    void getinfo(){
        cout << "name: " << name << endl;
        cout << "cgpa: " << cgpa << endl;
    }
};

int main(){
    Student s1("sidharth", 5.4);
    s1.getinfo();
    Student s2(s1);
    s2.getinfo();
    return 0;
}

//..................PROBLEM IN SHALLOW COPY....................
/*#include<iostream>
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
    //custom copy constroctor (if we comment this the default constructor invoke)
    Student(Student &obj){
        this->name = obj.name;
        this->cgpaptr = obj.cgpaptr;
    }

    void getinfo(){
        cout << "name: " << name << endl;
        cout << "cgpa: " << *cgpaptr << endl;
    }
};
//problem because both object points to a same pointer(cgpa)
int main(){
    Student s1("sidharth", 5.4);
    Student s2(s1);

    s1.getinfo();
   *(s2.cgpaptr) = 6.3;
    s1.getinfo();
    return 0;
}*/