

/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank's Jumping on the Clouds Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,i,j,k;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++)
    {
        cin >> c[c_i];
    }
    i=0;
    j=0;
    while(1)
    {
        if(i>=n-1)
        {
            break;
        }
        if((c[i+2]==1 && c[i+1]==0) || i+1==n-1)
        {
            i=i+1;
            j++;
        }
        else if(c[i+2]==0 || c[i+1]==1 )
        {
            i=i+2;
            j++;
        }
    }

    cout<<j;
    return 0;
}
