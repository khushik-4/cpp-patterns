#include <bits/stdc++.h>
using namespace std;

void print10( int n){
    for( int i=1;i<=5;i++){
        for( int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<"*";
        }
        for( int j=1;j<=i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    print10(n);
    return 0;
}