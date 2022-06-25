/* Date: 25 - 06 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    stack<string> s;
    s.push("Sailendra");
    s.push("Chettri");
    s.push("Namchi");

    cout<<"top: "<<s.top()<<endl;
    cout<<"size: "<<s.size()<<endl;
    cout<<"empty: "<<s.empty()<<endl;

    return 0;
}