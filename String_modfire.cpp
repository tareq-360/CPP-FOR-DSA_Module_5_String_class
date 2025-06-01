#include<bits/stdc++.h>
using namespace std;
int main(){
    string name="Tareq";
    string name2;cin>>name2;
    string love =name+" + "+name2;
    cout<<love<<endl;
    name.push_back('+');
    //cout<<name.append(name2)<<endl;
    cout<<name<<endl;
    name.pop_back();
    cout<<name<<endl;
    name.erase(2,1);
    cout<<name<<endl;
    string country="hello world";
    country.replace(6,5,"Bangladesh");
    cout<<country<<endl;
    name.insert(2,"R");
    cout<<name<<endl;
    return 0;
}