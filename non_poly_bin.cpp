#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        if(b%2!=0)
        cout<<"-1"<<endl;
        else{
            string g="";
            for(int i=0;i<b/2;i++){
                g+="10";
            }
            cout<<g<<endl;
        }
    }
}