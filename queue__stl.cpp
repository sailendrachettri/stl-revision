/* Date: 25 - 06 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    queue<string> q;
    q.push("Sailendra");
    q.push("Chettri");
    q.push("Namthang");

    cout<<"first: "<<q.front()<<endl;
    cout<<"size: "<<q.size()<<endl;
    q.pop();
    cout<<"first: "<<q.front()<<endl;

    cout<<"size: "<<q.size()<<endl;

    return 0;
}