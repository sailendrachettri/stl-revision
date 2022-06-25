/* Date: 25 - 06 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    priority_queue<int> p_max; // max heap -- descending order of the elements
    priority_queue<int, vector<int>, greater<int>> p_min; // min heap -- ascending ordered of the elements

    // p_max.push(1);
    // p_max.push(3);
    // p_max.push(2);
    // p_max.push(0);

    // cout<<p_max.size()<<endl;

    // int n = p_max.size();
    // for(int i = 0; i < n; i++){
    //     cout<<p_max.top()<<" ";
    //     p_max.pop();
    // }cout<<endl;

    cout<<"empty or not: "<<p_max.empty()<<endl;


    p_min.push(1);
    p_min.push(3);
    p_min.push(2);
    p_min.push(0);

    cout<<p_min.size()<<endl;

    int n = p_min.size();
    for(int i = 0; i < n; i++){
        cout<<p_min.top()<<" ";
        p_min.pop(); // poping out the elements
    }cout<<endl;

    cout<<"empty or not: "<<p_min.empty()<<endl;


    return 0;
}