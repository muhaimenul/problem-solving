/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank Drawing Book Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/

#include <bits/stdc++.h>

using namespace std;

int solve(int n, int p)
{
    // Complete this function
    int i,j,n1,p1,total1,total2;
    total1=0;
    total2=0;
    n1=n-1;
    p1=p-1;

    if(p==1)
    {
        total1=0;
    }
    else
    {

        for(i=2; i<=n; i=i+2)
        {
            total1=total1+1;
            if(p==i || p==i+1)
            {
                break;
            }
        }
    }

    if(n%2==0)
    {
        if(p==n)
        {
            total2=0;
        }
        else
        {

            for(i=n-1; i>=0; i=i-2)
            {
                total2=total2+1;
                if(p==i || p==i-1)
                {
                    break;
                }
            }
        }

    }
    else
    {
        if(p==n || p==n-1)
        {
            total2=0;
        }
        else
        {

            for(i=n-2; i>=1; i=i-2)
            {
                total2=total2+1;
                if(p==i || p==i-1)
                {
                    break;
                }
            }
        }

    }

    if(total1<=total2)
    {
        return total1;
    }
    else
    {
        return total2;
    }

}

int main()
{
    int n;
    cin >> n;
    int p;
    cin >> p;
    if(p>=1 && p<=n)
    {
        int result = solve(n, p);
        cout << result << endl;
    }

    return 0;
}
