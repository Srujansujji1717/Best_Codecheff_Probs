#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<string> s;
    string s1;
    getline(cin,s1);
        for(int i=0;i<s1.size();i++){
        string w="";
        while(s1[i]!=' ' && i<s1.size()){
            w+=s1[i];
            i++;

        }
        s.push(w);
        
    }
    while(!s.empty()){
        
        cout<<s.top()<<" ";
        s.pop();
    }cout<<endl;

}