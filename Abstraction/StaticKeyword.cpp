//......................Static variable.....................
//...........In function...........
#include<iostream>
using namespace std;

void fun(){
    //int x = 0; //init every time when called
    static int x = 0;  // init statement - 1 run
    cout << "x: " << x << endl;
    x++;
}

int main(){
    fun();
    fun();
    fun();
    fun();
    return 0;
}

//...........In class..............
// #include<iostream>
// using namespace std;

// class A{
// public:
//     int x;

//     void incx(){
//         x = x + 1;
//     }
// };

// int main(){
//     A obj1;
//     A obj2;

//     obj1.x = 100;
//     obj2.x = 200;

//     cout << "x: " << obj1.x << endl;
//     obj1.incx();
//     cout << "x: " << obj1.x << endl;

//     cout << "x: " << obj2.x << endl;
//     obj2.incx();
//     cout << "x: " << obj2.x << endl;
//     return 0;
// }

//......................Static Objects......................
// #include<iostream>
// #include<string>
// using namespace std;

// class ABC{
// public:
//     ABC(){
//         cout << "constructor" << endl;
//     }
//     ~ABC(){
//         cout << "destructor" << endl;
//     }
// };

// int main(){
//     // if(true){
//     //     ABC obj;
//     // }
//     if(true){
//         static ABC obj;
//     }

//     cout << "end of main function" << endl;
//     return 0;
// }