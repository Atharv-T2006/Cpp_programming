using namespace std;
#include<iostream>
//Encapsulation
class Marvellous
{
    //access specifier
   public:
      int no1,no2;  //characteristics

     //default constructor
      Marvellous()
      {
        cout<<"inside default constructor\n";
        no1=0;
        no2=0;

      }
    
      //parametrized constructor
       Marvellous(int a, int b)
      {
        cout<<"inside parametrized constructor\n";
        no1=a;
        no2=b;

      }

       //copy constructor
       Marvellous(Marvellous &ref)
       {
         cout<<"inside copy constructor\n";
       }

       //destructor
      ~Marvellous()   
      {
         cout<<"inside destructor\n";
      }

      


};
int main()
{
   Marvellous mobj1();
   Marvellous mobj2(11,12);
   

  return 0;
}