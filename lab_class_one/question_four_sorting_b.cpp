/*
    Solution of question four

    Shahrear Al Sakib
    Id. 2110976109
    Date : 28 / 02 / 2023

*/

#include <bits/stdc++.h>
#define int long long int
#define yes cout <<"YES" << endl
#define no cout <<"NO" << endl

using namespace std;

int32_t main(){
    string arr[] = {"af","hgj","hgjd","ytdf","art","bkf","sdf","otjg"};

    int N = sizeof(arr)/sizeof(arr[0]);

    // Array before sorting
    for(int i = 0 ; i < N ; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;

    // Usint Bubble Shorting

    for(int j = 1 ; j <= N - 1 ; j++){
        for(int i = 0 ; i < N - j ; i++){
            if(arr[i] > arr[i+1])
                swap(arr[i],arr[i+1]);
        }
    }

    for(int i = 0 ; i < N ; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;

    return 0;
}