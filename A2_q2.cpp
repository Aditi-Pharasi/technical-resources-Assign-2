#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
	        for (int j=0;j<n-i+1;j++){
	            cout<<"*  ";
	        }
	        cout<<endl;
	    }
    //write your code here
    
}