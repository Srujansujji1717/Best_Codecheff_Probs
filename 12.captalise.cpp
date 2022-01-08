//Captalise the 1st letter if word size is greater than 2..
#include<bits/stdc++.h>
using namespace std;
string capitalizeTitle(string title) {
        vector<string> v1;
        string temp="";
        int i=0;
        int n=title.size();
        while(i<n){
            if(title[i]==' '){
                v1.push_back(temp);
                temp="";
            }
            else{
                title[i]=tolower(title[i]);
                temp+=title[i];
            }
            i++;
            
        }
        if(temp.size())v1.push_back(temp);

        for(int i=0;i<v1.size();i++){
            if(v1[i].size()>2){
                v1[i][0]-=32;
            }
        }
        string ans="";
        for(auto x:v1){
            ans+=" "+x;
        }
        ans.erase(ans.begin());
        return ans;
      
    }
int main(){
    string s;
    getline(cin,s);
    cout<<capitalizeTitle(s)<<endl;

}