#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter no. of strings";
    int a;
    cin>>a;
    vector<string> v;
    map<string,int> s;
    for(int i=0;i<a;i++){
        string s1;
        cin>>s1;
        v.push_back(s1);
    }
    for(auto n: v){
        s[n]++;
    }
    for(auto g: s){
        cout<<g.first<<" "<<g.second<<endl;
    }

}