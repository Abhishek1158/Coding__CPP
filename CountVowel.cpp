#include<iostream>
using namespace  std;
int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string vow="adeionvea";
    int vowels=0;
    
    for(int i=0;str[i]!='\0';i++){
        for(int v=0;v<=vow.length();v++){
            if(str[i]==vow[v]){
                vowels++;
            }
        }
    }
    cout<<"No of vowels :"<<vowels;
    return 0;
}