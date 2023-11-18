#include<iostream>
using namespace std;
int main(){
    char o;
    cout<<"Enter operator (+ - * /) :";
    cin>>o;

    int a;
    cout<<"\nEnter 1st number :";
    cin>>a;
    
    int b;
    cout<<"\nEnter 2nd number :";
    cin>>b;
    if(o=='+') cout <<"Addition = " << a + b;
    else if(o=='-') cout << "Subtraction = " << a - b;

    else if(o=='*') cout << "Multition = " << a * b;
    else if(o=='/') cout << "Divisionion = " << a - b;

    return 0;
}