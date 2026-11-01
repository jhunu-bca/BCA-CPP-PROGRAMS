#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two numbers a and b:"<<endl;

    cin>>a>>b;
    cout<<"a="<<a<<"\nb="<<b<<endl;
    
    cout<<"sum: "<<a+b<<endl;
    cout<<"sub: "<<a-b<<endl;
    cout<<"multiply: "<<a*b<<endl;
    
    if(b != 0){
        cout<<"division: "<<a/b<<endl;
        cout<<"modulus: "<<a%b<<endl;
        cout<<"float division: "<<(float)a/b<<endl;
    } 

    else {
        cout<<"division: Cannot divide by zero"<<endl;
        cout<<"modulus: Cannot mod by zero"<<endl;
    }
    
    return 0;
}