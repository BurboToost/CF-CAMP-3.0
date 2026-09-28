#include<bits/stdc++.h>
using namespace std;


int main(){

int t, s=0;
cin>>t;

for(int i=1; i<= t; i++){
    string x; cin>>x;

    if(x=="X++"||x=="++X") s++;
    else if(x=="X--"|| x=="--X") s--;
}
cout<<s<<endl;

return 0;}
