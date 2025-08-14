#include<iostream>
using namespace std;
int main(){
    int a[]={32,4,65,76,87,28};
    int size=sizeof(a)/sizeof(a[0]);
    int max=a[0];
    for(int i=0;i<size;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    cout<<max<<endl;
    return 0;

}