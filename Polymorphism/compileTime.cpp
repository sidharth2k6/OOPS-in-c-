//.................Ex of compile time polymorphism.....................
//.................Constructor overloading.....................
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

//.................function overloading.........................
// #include<iostream>
// #include<string>
// using namespace std;

// class Print{
// public:
//     void show(int x){
//         cout << "int: " << x << endl;
//     }

//     void show(char ch){
//         cout << "char: " << ch << endl;
//     }
// };

// int main(){
//     Print p1;
//     p1.show(689);
//     p1.show('%');
//     return 0;
// }