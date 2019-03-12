/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank Angry Professor Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {
        int n;
        int k;
        int p,l,i;
        p=0;
        l=0;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++)
        {
            cin >> a[a_i];
        }

        for(i=0; i<n; i++)
        {
            if(a[i]<=0)
            {
                p++;
            }
            else
            {
                l++;
            }
        }

        if(p>=k)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
