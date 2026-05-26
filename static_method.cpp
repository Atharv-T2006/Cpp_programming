using namespace std;
#include<iostream>
class Demo
{
   public:
       int i;        //non static
       int j;        //non static
       static int k; //static

       Demo()
       {
         i=0;
         j=0;
       }

       void fun()    //non static method
       {
         cout<<"inside nonstatic fun\n";
         cout<<"i:"<<i<<"\n";
         cout<<"j:"<<j<<"\n";
         cout<<"k:"<<k<<"\n";

       }

       static void gun()   //static method
       {
         cout<<"inside static gun\n";
         cout<<"k:"<<k<<"\n";

       }
};
int Demo :: k=11;

int main()
{
    cout<<Demo :: k<<"\n"; 
    Demo :: gun();

    Demo dobj;
     
    cout<<dobj.i<<"\n";     
    cout<<dobj.j<<"\n";    

    dobj.fun();
    return 0;
}