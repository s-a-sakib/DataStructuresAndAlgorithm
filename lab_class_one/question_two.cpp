#include <bits/stdc++.h>
#define int long long int
#define yes cout <<"YES" << endl
#define no cout <<"NO" << endl

using namespace std;

int MAX = 100;

int32_t main()
{
    //54 to a sorted array
    int array[100] = {10,20,30,40,50,60,70,80,90,100,110,130};
    

    int i = 11;
    while(i != 0 and array[i] < array[i - 1]){
        swap(array[i],array[i-1]);
        i--;
    }
    for(int i = 0 ; i <= 11 ; i++) cout << array[i] << " ";
    cout << endl; 

    // add Rahim to a sorted array

    string name[100] = {"AA","BB" , "CC","DD","SS","TT","UU","VV","Rahim"};
    i = 8;
    while(i != 0 and name[i] < name[i - 1]){
        swap(name[i],name[i-1]);
        i--;
    }
    for(int i = 0 ; i <= 8 ; i++) cout << name[i] << " ";
    cout << endl;

    // add 99 to position 5

    array[12] = 99;
    i = 12;
    while(i != 4){
        swap(array[i], array[i - 1]);
        i--;
    }
    for(int i = 0 ; i <= 12 ; i++) cout << array[i] << " ";
    cout << endl; 

    // add Karim to position 5
    i = 9;
    name[9] = "Karim";
    while(i != 4){
        swap(name[i],name[i-1]);
        i--;
    }
    for(int i = 0 ; i <= 8 ; i++) cout << name[i] << " ";
    cout << endl;



    return 0;
}
