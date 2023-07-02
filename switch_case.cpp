#include<iostream>
using namespace std ;

int main()
{
     int age;
   cout<<"Tell me your age"<<endl;
   cin>>age;
   switch (age)
   {
   case 15 :
   cout<<"You are 15";
    break;
      case 25 :
   cout<<"You are 25";
   break;
     case 55 :
   cout<<"You are 55";
   break;
   default:
   cout<<"something wrong";
    break;
    cout<<"Done ";
   }
    return 0;
}
