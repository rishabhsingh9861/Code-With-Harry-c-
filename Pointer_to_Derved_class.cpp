#include <iostream>
using namespace std;

class BaseClass
{
public:
     int var_baseclass;
     void display()
     {
          cout << "Displaying base class variable " << var_baseclass << endl;
     }
};
class DerivedClass : public BaseClass
{
public:
     int var_derivedclass;
     void display()
     {  
          cout << "Displaying base class variable " << var_baseclass << endl;
          cout << "Displaying derined class variable " << var_derivedclass << endl;
     }
};

int main()
{
     BaseClass *base_class_pointer; // pointer joo baseClass ke object ko point kar raha hai
                                    // base class ka joo object banega usko point karegaa
     BaseClass obj_base;
     DerivedClass obj_derived;
     base_class_pointer = &obj_derived; //  hamne joo baseclassPointer woh base class ke object ko point karna chaiye but usse hamne  derived class ke object ke tarf point kara diya hai
                                        // pointing base class to derived class ;

     base_class_pointer->var_baseclass=55;
    // base_class_pointer->var_derivedclass = 88;  //  will throw an error
     base_class_pointer->display();

     base_class_pointer->var_baseclass =3525 ;
     base_class_pointer->display();

     DerivedClass * derived_classPointer ;
     derived_classPointer = &obj_derived ;  // derived class ke pointer  ko maine derived class ke object ko point kara diya
  derived_classPointer->var_baseclass = 789;
  derived_classPointer->var_derivedclass =666;
  derived_classPointer->display();
  // yeh run time polyorphism hai yeh run time par compiler decide karta hai ki kons function kisse assigned hogaa 




     return 0;
}