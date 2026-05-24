#include <bits/stdc++.h>
using namespace std;
void print11(int n){
    int start=1 ;
    for(int i=1;i<=5;i++){
        if(i %2 ==0)
        start=0;
        else start=1;
        for(int j=1;j<=i;j++){
            cout<<start<<" ";
            start=1-start;

        }
        
        cout<<endl;
    }
}
int main(){
    int n;
    print11(n);
    return 0;

}