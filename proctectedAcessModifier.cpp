#include<iostream>
using namespace std;

class Base{
    protected :
       int  a;
       private : 
         int b ;

};


class Derived : protected Base {

};

/*
For protected member 
                               Public Derivation      Private Derivation     Proctected Derivation 
    1. Private Members          not inherited           not inherited           not inherited 
    2. Protected members         protected               private                  proctected
    3. Public Members           Public                    Private                 Protected 
*/

int main() {
    Base b ;
    Derived d ;
    //  cout<<b.a  // will not work since a is protected in base as well as derived class 
     return 0 ;
}