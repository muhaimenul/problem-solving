/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank Beautiful Triplets Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,k,n,d,temp,total,ai,aj,ak;
    total=0;
    cin>>n>>d;
    vector<int> a(n);
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n-2; i++)
    {
        ai=a[i];
        for(j=i+1; j<n-1; j++)
        {
            aj=a[j];
            if((aj-ai)>d)
            {
                break;
            }
            for(k=j+1; k<n; k++)
            {
                ak=a[k];
                if((aj-ai)==d && (ak-aj)==d)
                {
                    total++;
                }
            }

        }
    }
    cout<<total;
    return 0;
}
