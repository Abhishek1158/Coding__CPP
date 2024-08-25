// #include<iostream>
// using namespace std;
// int main(){
//     int score;
//     cout<<"Score:";
//     cin>>score;
//     if(score>33){
//         cout<<"Pass"<<endl;
//     }
//     else{
//         cout<<"Fail"<<endl;
//     }

//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
// #include<iostream>
// using namespace std;
// int main(){
//     int array[]={1,2,3,4,5,6};
//     bool nameflag=true;
//     for(int i=1;i<6;i++){
//         if(array[i]<=array[i-1]){
//             nameflag=false;
//         }
       
//     }
//     cout<<nameflag<<endl;
//     return 0;
// }