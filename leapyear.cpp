#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter value : ";
    cin>>num;
    if(num%4==0||num%400==0&&num%100!=0){
        cout<<" Leap Year "<<endl;
    }
    else{
        cout<<"Not Leap Year "<<endl;
    }

    return 0;
}
