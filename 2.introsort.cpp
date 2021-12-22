#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    // int b[a];
    // for(int i=0;i<a;i++){
    //     cin>>b[i];
    // }
    // //sort(b,b+a);
    // //sort(b+2,b+a);
    // for(int i=0;i<a;i++){
    //     cout<<b[i]<<" ";
    // }cout<<endl;

    vector<int> v1;
    for(int i=0;i<a;i++){
        int h;
        cin>>h;
        v1.push_back(h);
    }
    sort(v1.begin(),v1.end());
    //sort(v1.begin()+2,v1.end());
    for(auto a:v1){
        cout<<a<<" ";
    }cout<<endl;

}