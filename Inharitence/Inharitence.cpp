/*
    Inharitence: when properties & member functions of
    base(parent) class are passed on to the derived(child) class.
    it is used for code reusebility.

    ...................................Mode of inharitance...............................

    base class/derived class >      private         protected       public
        v
    private                         Not Inharit     Not Inharit     Not Inharit
    protected                       private         protected       protected
    public                          private         protected       public
*/
#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;

    //custom constructor
    Person(){
        cout << "Hi, I am in base class." << endl;
    }
    //custom distructor
    ~Person(){
        cout << "Hi, I am in base class." << endl;
    }
};

class Student: public Person{
public:
    int roll;

    //custom constructor
    Student(){
        cout << "Hi, I am in derived class." << endl;
    }
    //custom destructor
    ~Student(){
        cout << "Hi, I am in derived class." << endl;
    }

    void getinfo(){
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "roll: " << roll << endl;
    }
};

int main(){
    Student s1;
    
    s1.name = "sidharth chandra";
    s1.age = 18;
    s1.roll = 48;

    s1.getinfo();
    return 0;
}
//....Inharite using PARAMETERIZED CONSTRUCTOR..............
// #include<iostream>
// #include<string>
// using namespace std;

// class Person{
// public:
//     string name;
//     int age;

//     //custom parameterized constructor
//     Person(string name, int age){
//         this->name = name;
//         this->age = age;
//     }
// };

// class Student: public Person{
// public:
//     int roll;

//     //custom parmeterized constructor
//     Student(string name, int age, int roll): Person(name, age){
//         this->roll = roll;
//     }

//     void getinfo(){
//         cout << "name: " << name << endl;
//         cout << "age: " << age << endl;
//         cout << "roll: " << roll << endl;
//     }
// };

// int main(){
//     Student s1("sidharth", 18, 48);

//     s1.getinfo();
//     return 0;
// }