#include<iostream>
using namespace std;
class Demo
{
   public:
        int i;   // characteristics
        float f; // characteristics

        Demo()  // constructor
        {
           cout<<"inside constructor\n";
           i=0;
           f=0.0f;
        }
        ~Demo()  // destructor
        {
            cout<<"inside desturctor\n";
        }
        void fun()  // behaviour
        {
            cout<<"inside fun\n";
        }
};
int main()
{
    cout<<"inside main\n";
    Demo dobj;  // object creation
    cout<<dobj.i<<"\n";  

    dobj.fun();
    cout<<"end of main\n";

    return 0;
}