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

class GradStudent: public Student{
public:
    string ResearchArea;
};

int main(){
    GradStudent g1;
    g1.name = "sidharth chandra";
    g1.age = 18;
    g1.roll = 48;
    g1.ResearchArea = "bca";

    cout << "name: " << g1.name << endl;
    cout << "age: " << g1.age << endl;
    cout << "roll: " << g1.roll << endl;
    cout << "researcharea: " << g1.ResearchArea << endl;
    return 0;
}