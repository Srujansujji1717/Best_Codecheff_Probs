#include<bits/stdc++.h>
using namespace std;
int main(){
 set<int> s;
int a;
cin>>a;
int b[a];
for(int i=0;i<a;i++){
    cin>>b[i];
}
for(int i=0;i<a;i++){
    s.insert(b[i]);
}
 for(auto n:s){
 cout<<n<<endl;

 }
}