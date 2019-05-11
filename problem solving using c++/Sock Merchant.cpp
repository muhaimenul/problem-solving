/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank's Sock Merchant Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector <int> ar)
{
    // Complete this function
    int i,j,k,sum;
    sum=0;
    vector <int> type(101);
    type.assign(101,0);
    for(i=0; i<n; i++)
    {
        k=ar[i];

        type[k]++;
    }

    for(i=1;i<=100;i++){
        sum=sum+(int)(type[i]/2);
    }

    return sum;
}

int main()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++)
    {
        cin >> ar[ar_i];
    }
    int result = sockMerchant(n, ar);
    cout << result << endl;
    return 0;
}
