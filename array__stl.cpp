/* Date:  - 06 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int size; cin>>size;
    array<int, 4> arr;

    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl<<arr.at(3); // element at index __ O(1)
    cout<<endl<<arr.empty(); // empty or not O(1)
    cout<<endl<<arr.front();//first element O(1)
    cout<<endl<<arr.back(); // last element O(1)

    return 0;
}