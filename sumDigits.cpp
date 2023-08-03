#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;     //2121
    int sum=0;
    while(n>0){
        int lastdigit=n%10;   //  1   ,2,1,2,0
        sum+=lastdigit;      // sum =1,3,4,6,6
        n=n/10;            // n=212   ,21, 2,0
    }
    cout<<sum<<endl;
    return 0;
}