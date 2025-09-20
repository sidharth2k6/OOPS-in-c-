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

int main(){
    Student s1;
    s1.name = "sidharth";
    s1.age = 18;
    s1.roll = 48;
    cout << "name: " << s1.name << endl;
    cout << "age: " << s1.age << endl;
    cout << "roll: " << s1.roll << endl;
    
    Teacher t1;
    t1.name = "chandra";
    t1.age = 42;
    t1.salary = 2.434;
    cout << "name: " << t1.name << endl;
    cout << "age: " << t1.age << endl;
    cout << "salary: " << t1.salary << endl;

    return 0;
}