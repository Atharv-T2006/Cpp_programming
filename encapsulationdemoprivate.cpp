using namespace std;
#include<iostream>
//Encapsulation
class Marvellous
{
     // access specifoer(by default private)
      int no1,no2;  //characteristics

      void fun()    //behaviour
      {
        cout<<"Inside fun\n";
      }

      void gun()    //behaviour
      {
        cout<<"inside gun\n";
      }


};
int main()
{
    // object creation (instance)
    Marvellous mobj1;
    Marvellous mobj2;

    cout<<sizeof(mobj1)<<"\n";  //8
    
    cout<<mobj1.no1<<"\n";

    mobj1.fun();
    mobj2.fun();
  return 0;
}