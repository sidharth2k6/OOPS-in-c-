/*OOP has 4 major pillors
    1. Encapsulation
    2. Abstraction 
    3. Inharitence
    4. Polymorphism

    Access modifiers
    1.private
    2.public
    3.protected
*/

#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;

public:
    //properties or attributes
    string name;
    string dept;
    string subject;

    //methods or member function
    void changeDept(string newDept){
        dept = newDept;
    }

    //setter
    void setsalary(double newsalary){
        salary = newsalary;
    }
    //getter
    double getsalary(){
        return salary;
    }
};


int main(){
    Teacher t1;
    t1.name = "sidharth";
    t1.dept = "BCA";
    t1.subject = "cpp";
    t1.setsalary(1500);

    cout << t1.name << endl;
    cout << t1.dept << endl;
    cout << t1.subject << endl;
    cout << t1.getsalary() << endl;
    return 0;
}