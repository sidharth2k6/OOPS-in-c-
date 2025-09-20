#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    int roll;
};

class Teacher{
public:
    string subject;
    double salary;
};

class TA: public Student, public Teacher{

};

int main(){
    TA t1;
    t1.name = "sidharth chandra";
    t1.roll = 48;
    t1.subject = "dsa";
    t1.salary = 1.0893;

    cout << "name: " << t1.name << endl;
    cout << "roll: " << t1.roll << endl;
    cout << "subject: " << t1.subject << endl;
    cout << "salary: " << t1.salary << endl;
    return 0;
}