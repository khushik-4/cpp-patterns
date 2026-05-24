#include <bits/stdc++.h>
using namespace std;
void print15(int n){
    for(int i=1;i<=5;i++){
        for( char ch='A';ch<=5-i+'A';ch++){
            cout<<ch<<" ";

        }
        cout<<endl;
    }
}
int main(){
 int n;
 print15(n);
 return 0;
}