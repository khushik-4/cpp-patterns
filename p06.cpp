#include<bits/stdc++.h>
using namespace std;
 void print6(int n){
    for(int i=1;i<=5;i++){
        for (int j=1;j<=5-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
 }
 int main(){
    int n;
    print6(n);
    return 0;
 }