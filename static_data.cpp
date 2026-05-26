using namespace std;
#include<iostream>
class Demo
{
   public:
       int i;        //non static
       int j;        //non static
       static int k; //static


};

int main()
{
    Demo dobj;
  cout<<sizeof(dobj);

    return 0;
}