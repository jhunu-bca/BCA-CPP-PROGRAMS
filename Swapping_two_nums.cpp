#include<iostream>
using namespace std;
int main(){
    int a, b, temp;
    cout<<"Enter two numbers a and b:"<<endl;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<"Before Swap:\na:"<<a<<"\nb:"<<b<<endl;
    temp=a;   //swapping a and b
    a=b;
    b=temp;
    cout<<"After Swap:\na:"<<a<<"\nb:"<<b<<endl;

    return 0;
}