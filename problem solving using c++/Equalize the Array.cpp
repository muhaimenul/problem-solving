a/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank's Equalize the Array Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i, j = 0, k = -1, c = 0, n, total, sum;
    cin >> n;

    vector<int> a(n);
    vector<int> temp(101, 0);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        temp[a[i]]++;
    }

    if (n > 1)
    {
        c = INT_MIN;
        sum = 0;
        for (i = 0; i < 101; i++)
        {
            if (temp[i] >= c)
            {
                c = temp[i];
                k = i;
            }
        }

        for (i = 0; i < 101; i++)
        {
            if (i != k)
            {
                sum = sum + temp[i];
            }
        }
        cout << sum;
    }
    else
    {
        cout << 0;
    }

    return 0;
}

