#include<iostream>
using namespace std;
class Base
{
   public:
        int i,j;  
        void fun()
        {cout<<"inside base fun\n";}  // definition
        virtual void gun()
        {cout<<"inside base gun\n";}
        virtual void sun()
        {cout<<"inside base sun\n";}  // definition
};    //8 byte
class Derived : public Base
{
    public: 
        int x,y;
        void fun()      // redefinition
        {cout<<"inside Derived fun\n";}
        void sun()
        {cout<<"inside derived sun\n";} // redefinition
        virtual void run()
        {cout<<"inside derived run\n";} // definition

};       //16 byte
int main()
{
    Base * bp = new Derived(); //upcasting
    bp->fun();  // base fun
    bp->gun();  // base gun
    bp->sun();  // derived sun
    bp->run();  // error

    return 0;
}
