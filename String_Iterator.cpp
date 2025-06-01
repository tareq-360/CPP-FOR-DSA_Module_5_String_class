#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;cin>>name;
    cout<<*name.begin()<<endl;
    cout<<*(name.end()-1)<<endl;
    //string printing using iterator 
    for(auto i=name.begin(); i<name.end();i++){
        cout<<*i<<endl;
    }
    return 0;
}