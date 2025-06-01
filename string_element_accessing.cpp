#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;getline(cin,name);
    string s="Nigar";
    cout<<s[4]<<endl; //string index accessing 
    cout<<s.at(0)<<endl; //string index accessing 
    cout<<name.back()<<endl; //access last element of the string 
    cout<<name.front()<<endl; //access first element of the string 
    return 0;
}