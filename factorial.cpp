#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;   // taking input
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;   // fact=1*1=1 , fact=1*2=2 , fact=2*3=6
        cout<<fact<<endl;
    }
    return 0;
}
