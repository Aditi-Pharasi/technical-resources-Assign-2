#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of rows:";
    cin >> n;
    int sp=n/2;
    int str=1;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=sp;j++){
            cout<<" ";
        }
        for(int k=1;k<=str;k++){
            cout<<"*";
        }
        if(i<(n+1)/2){
            sp--;
            str=str+2;
        }
        else{
            sp++;
            str=str-2;
        }
        cout<<endl;
    }
 }