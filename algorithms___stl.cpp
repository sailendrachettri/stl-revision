/* Date: 25 - 06 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(5);
    v.push_back(8);
    v.push_back(10);

    cout<<binary_search(v.begin(), v.end(), 5)<<endl;
    cout<<"lower_bound: "<<lower_bound(v.begin(), v.end(), 5)-v.begin()<<endl;
    cout<<"upper_bound: "<<upper_bound(v.begin(), v.end(), 5)-v.begin()<<endl;

    int a = 10, b = 9;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"max: "<<max(a, b)<<endl;
    cout<<"min: "<<min(a, b)<<endl;

    swap(a, b);
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;

    string st = "sailendra";
    cout<<st<<endl;
    reverse(st.begin(), st.end());
    cout<<st<<endl;

    rotate(v.begin(), v.begin()+2, v.end());

    sort(v.begin(), v.end()); // quick, heap, and insertion sort - INTRO sort

    for(auto val: v){
        cout<<val<<" ";
    }cout<<endl;



    return 0;
}