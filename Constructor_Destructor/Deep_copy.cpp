/*
    Deep copy: A deep copy, on the other hand not only copies the member values
    but also make copies of any dinamiclly allocated memory that the members point to.
*/
//..................PROBLEM SOLVE USING DEEP COPY....................
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
    //custom copy constroctor (if we comment this the default constructor invoke)
    Student(Student &obj){
        this->name = obj.name;
        cgpaptr = new double;
        *cgpaptr = *(obj.cgpaptr);
    }

    void getinfo(){
        cout << "name: " << name << endl;
        cout << "cgpa: " << *cgpaptr << endl;
    }
};

int main(){
    Student s1("sidharth", 5.4);
    Student s2(s1);

    s1.getinfo();
    *(s2.cgpaptr) = 6.3;
    s2.name = "chandra";
    s1.getinfo();
    s2.getinfo();
    return 0;
}