/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank Apple and Orange Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/

#include<vector>
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }

    for(int i=n-1; i>=0; i--){
        cout<< arr[i] <<" ";
    }

    return 0;
}

