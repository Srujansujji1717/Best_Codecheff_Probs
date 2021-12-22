#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b=0;
    while(a!=0){
        b=b*10+a%10;
        a=a/10;
    }
    cout<<b<<endl;
}