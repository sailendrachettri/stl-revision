/* Date: 25 - 06 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    map<int, string> m;
    m[1] = "sai";
    m[2] = "len";
    m[13] = "dra";
    m.insert({4, "chettri"});

    for(auto &st: m){
        cout<<st.first<<" "<<st.second<<endl;
    }cout<<endl;

    cout<<"count: "<<m.count(12)<<endl;
    // m.erase(12);
    cout<<"count: "<<m.count(12)<<endl;

    cout<<"size: "<<m.size()<<endl;

    auto it = m.find(2);

    for(auto i=it; i != m.end(); i++){
        cout<<(*i).first<<endl;
    }

    return 0;
}