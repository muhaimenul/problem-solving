/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank's Service Lane Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int t;
    cin >> n >> t;
    vector<int> width(n);
    for(int width_i = 0; width_i < n; width_i++)
    {
        cin >> width[width_i];
    }
    for(int a0 = 0; a0 < t; a0++)
    {
        int i;
        int j;
        int k,mn;
        mn=INT_MAX;
        cin >> i >> j;
        for(k=i; k<=j; k++)
        {
            if(width[k]<=mn)
            {
                mn=width[k];
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}
