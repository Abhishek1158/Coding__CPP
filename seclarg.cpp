#include<iostream>
#include <climits>
using namespace std;
// int largestElementIndex(int array[],int size){
//     int max=INT_LEAST16_MIN;  // minimum value comparing to every element then max value is update
//     int maxindex=-1;
//     for(int i=0;i<size;i++){
//         if(array[i]>max){   
//             max=array[i];
//             maxindex=i;
//         }
//     }
//     return maxindex;
// }
int secLargestele(int array[],int size){
    int max=INT_MIN;
    int sec_max=INT_MIN;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    for(int i=0;i<size;i++){
        if(array[i]>sec_max&&array[i]!=max){
            sec_max=array[i];
        }
    }
    return sec_max;

}
// 2,3,5,7,6,1,7
// max=7
// sec_max= INT_MIN (2,3,5),6
// if(array[i]>max) max=array[i]
// if(array[i]>sec_max && array[i]!=max) sec_max=array[i]
int main(){
    int array[]={2,3,5,7,6,1,7};
    int n=7;
    // int  indexoflargest=largestElementIndex (array,n);
    // cout<<" Largest :";
    // cout<<array[indexoflargest]<<endl;
    
    // //array[indexoflargest]=-1; For all unique elements  
    // int largestelement=array[indexoflargest];
    // for(int i=0;i<n;i++){
    //     if(array[i]==largestelement){
    //         array[i]=-1;
    //     }
    // }

    // int  indexofsecondlargest=largestElementIndex (array,n);
    // cout<<" Second Largest :";
    // cout<<array[indexofsecondlargest]<<endl;
    cout<<secLargestele<<endl;
    return 0;
}