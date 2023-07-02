#include<iostream>
using namespace std;

class Complex {

    int a;
    int b ;

    public :
   //below line means that non member sumcomplex function is alowed to do  anything with my private data
    friend Complex sumComplex(Complex o1 , Complex o2 ) ;

      void setNumber(int n1 , int n2 ){
        a = n1 ;
        b= n2;
      }

      void printNumber() {
        cout<<"your Complex number is " <<a<<" + "<<b<<"i" <<endl ;
      }
};  


Complex sumComplex(Complex o1 ,Complex o2 ) {
    Complex o3 ;
    // cout<<a ;; // it show error mens kiska a hai woh 
    o3.setNumber((o1.a + o2.a) ,  (o1.b + o2.b));
    return o3 ;
}

int main() {
    Complex c1 , c2 , sum ;
    c1.setNumber(4,5);
    c1.printNumber() ;

    c2.setNumber(7,10);
    c2.printNumber() ;

    sum = sumComplex(c1 , c2 ) ;
    sum.printNumber();


     return 0 ;
}


/*  propertirs of friend function 
 1. not in the scope of class 
 2. since it is not in scope of class , it cannnot be called from object of that class .  c1.sumComplex()
3. can be invoked withot the help of object 
4. usulaay contains the object as argument 
5. can be declared as public or private section of the  class
6. it cannot acess the membe directly by their names  and need object_name.member_name 
to acess the member .

 */