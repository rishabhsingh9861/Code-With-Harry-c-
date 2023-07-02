#include<iostream>
using namespace std;

class Number{
    int a;
    

    public: 

    Number(){
        a=0;
    }
        
     Number(int num){
        a =num;
     }
     Number(Number &obj){     // number object ka reference diya hai
        cout<<"Copy constructor called"<<endl;
        a =  obj.a;  // joo object hamm pass kar rahe hai uske aa ki value yaha de de jaise 456
     }

     void display(){
        cout<<"The number for this objec is "<<a<<endl;
     }



};


int main() {
    Number a(456) ,b ,c ,  d ;
    a.display();
    b.display();
    c.display();
  // jab koi copy constructor nhinhota tab compiler apne aap copy constructor bannata hai
    // a1 should resemble a or b ,or c
    Number z1(a);  // copy constructor invoked  hoga
    z1.display();

    d  = a;   // yaha a object assigned  kiya
    d.display(); // copy constructor invoked nhi hoga  object bana hua tha isliye nhi hua

    Number e  = a; // copy constructor invoked hoga 
    e.display();


     return 0 ;
}