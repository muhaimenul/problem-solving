/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank Divisible Sum Pairs Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/

#include <bits/stdc++.h>

using namespace std;

int divisibleSumPairs(int n, int k, vector <int> ar) {
    // Complete this function
    int i,j,l,m,sum=0,t=1,coun=0;
    for(i=0;i<n-1;i++){
        m=ar[i];
        for(j=t;j<n;j++){
           l=ar[j];
           sum=m+l;
           if(i<j && sum%k==0){
            coun++;
           }
        }
        t++;
    }

    return coun;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = divisibleSumPairs(n, k, ar);
    cout << result << endl;
    return 0;
}
