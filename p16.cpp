#include <bits/stdc++.h>
using namespace std;
void print16(int n){
   
    
    for(int i=1;i<=5;i++){
        char ch = 'A'+i-1;
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    print16(n);
    return 0;
}