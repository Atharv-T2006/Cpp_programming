#include<iostream>
using namespace std;

int main()
{   
    int size = 0;

    cout<<"Enter no. of elements\n";
    cin>> size;

    // dynamic memory allocation
    float * marks = NULL;
    marks = new float[size];


     // iteration
     for(int i=0;i<size;i++)
     {
        cout<<"Enter your marks of subject : \n"<<i;
        cin>>marks[i];
    }

    for(int j=0;j<size;j++){
        cout<<"\nEntered marks of subject : "<<j;
        cout<<marks[j]<<"\n";
    }

    delete[]marks;   // deallocationc
    

    return 0;
}