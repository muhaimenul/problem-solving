/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank's Lisa's Workbook Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

// Complete the workbook function below.
int workbook(int n, int k, vector<int> t)
{
    int i, j, p=1, q, sum=0, c=0;

    for(i=1; i<=n; i++)
    {
        q=t[i];
        for(j=1; j<=q; j++)
        {
            if(j==p)
            {
                sum++;
            }

            c++;
            if(c==k || j==q)
            {
                c=0;
                p++;
            }
        }
    }

    return sum;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, k, i;
    cin>>n>>k;
    vector<int> t(101,0);

    for(i=1; i<=n; i++)
    {
        cin>>t[i];
    }

    int result = workbook(n, k, t);
    cout<<result;
    return 0;
}
