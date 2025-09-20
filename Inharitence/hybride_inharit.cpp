#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;
};

class Student: public Person{
public:
    int roll;
};

class Teacher: public Person{
public:
    double salary;
};

class GradeStudent: public Student{
public:
    string ResearhArea;
};

class TA: public Teacher{

};

int main(){
    TA t1;
    t1.name = "sidharth";
    t1.age = 18;
    t1.salary = 2.5334;

    cout << "name: " << t1.name << endl;
    cout << "age: " << t1.age << endl;
    cout << "salary: " << t1.salary << endl;
    return 0;
}