#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;getline(cin,name);
    stringstream s(name);
    string word;
    while(s>>word){
        cout<<word<<endl;
    }
    return 0;
}