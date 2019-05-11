/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank's Sequence Equation Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,j,k,x;
    vector<int> p(51,0);
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>p[i];
    }

    for(i=1; i<=n; i++)
    {
        x=i;
        for(j=1; j<=n; j++)
        {
            if(p[p[j]]==x)
            {
                cout<<j<<endl;
            }
        }
    }
    return 0;
}
