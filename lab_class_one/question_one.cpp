#include <bits/stdc++.h>
#define int long long int
#define yes cout <<"YES" << endl
#define no cout <<"NO" << endl

using namespace std;
/*
    Solution of question one

    Shahrear Al Sakib
    Id. 2110976109
    Date : 28 / 02 / 2023

*/
int32_t main(){

    int element_of_array , sum = 0, max , min;
    cin >> element_of_array;

    int array[element_of_array];
    float sin_array[element_of_array];

    for(int i = 0 ; i < element_of_array ; i++){
        cin >> array[i];
    }
    max = array[0];
    min = array[0];

    for(int i = 0 ; i < element_of_array ; i++){
        sum += array[i]; // calculating the sum of array

        //creating new sine array
        sin_array[i] = sin(array[i]);

        // finding maximum elements
        if(max < array[i]) max = array[i];
        // finding minimum elements
        if(min > array[i]) min = array[i];
    }

    cout <<"Maximum value : " << max << endl;
    cout <<"Minimum value : " << min << endl;
    cout <<"Avarage value : " << (float)(sum / element_of_array) << endl;
    cout <<"Total value   : " << sum << endl;
    cout <<"New sine array :" << endl;
    for(float it : sin_array)
        cout << it <<" ";
    cout << endl;

    return 0;
}
