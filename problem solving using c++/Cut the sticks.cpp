/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank Cut the sticks Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,temp,i,j,t,k;
    m = INT_MAX;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++)
    {
        cin >> arr[arr_i];
        if(arr[arr_i]<=m)
        {
            m=arr[arr_i];
        }
    }
    temp=n;

    while(temp)
    {
        cout<<temp<<endl;
        int mn=INT_MAX;
        for(i=0; i<n; i++)
        {
            t=arr[i];
            k=t-m;
            if(k==0)
            {
                temp--;
            }
            if(k>0 && k<=mn)
            {
                mn=k;
            }
            arr[i]=k;
        }

        m=mn;

    }

    return 0;
}
