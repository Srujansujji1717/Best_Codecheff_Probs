#include<bits/stdc++.h>
using namespace std;
int lengthOfLastWord(string s) {
        stack<string> k1;
        for(int i=0;i<s.size();i++){
            string x="";
           while(s[i]!=' '&&i<s.size()){
               x+=s[i];
               i++;
               
           }
            k1.push(x);
        }
        string a=k1.top();
        cout<<a<<endl;
        int n=a.size();
        return n;
    }
int main(){
    string w;
    getline(cin,w);
    cout<<lengthOfLastWord(w)<<endl;

}