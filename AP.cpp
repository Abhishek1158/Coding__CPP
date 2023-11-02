#include<iostream>
using  namespace std;
int arithmetic(int a,int n,float d){
    int an=a+(n-1)*d;   // an=a+(n-1)d
    return an;          // a=5,n=4,d=0.5
}
int main(){
    int a;
    cout<<"a:";
    cin>>a;

    int n;
    cout<<"n:";
    cin>>n;

    float d;
    cout<<"d:";
    cin>>d;
    cout<<" Final Nth term : "<<arithmetic(a,n,d)<<endl;
    return 0;
}
