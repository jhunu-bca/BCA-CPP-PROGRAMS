#include<iostream>
using namespace std;

int main(){
    int a, b, temp;

    cout<<"Enter two numbers:"<<endl;

    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;

    cout<<"Before Swap:\na:"<<a<<"\nb:"<<b<<endl;

    //Swapping Logic
    temp=a;   
    a=b;
    b=temp;

    cout<<"After Swap:\na:"<<a<<"\nb:"<<b<<endl;

    return 0;

}