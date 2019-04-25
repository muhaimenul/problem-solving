/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank's Flatland Space Stations Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

// Complete the flatlandSpaceStations function below.
int flatlandSpaceStations(int n, int m, vector<int> c)
{
    int p, k, i, j, d;
    k = INT_MIN;
    for (i = 0; i < n; i++)
    {
        p = INT_MAX;
        for (j = 0; j < m; j++)
        {
            if (abs(i - c[j]) <= abs(i - p))
            {
                p = c[j];
            }
        }
        d = abs(i - p);
        if (k <= d)
        {
            k = d;
        }
    }
    return k;
}

int main()
{
    int n;
    int m;
    cin >> n >> m;
    vector<int> c(m);
    // vector<int> d(n);
    for (int c_i = 0; c_i < m; c_i++)
    {
        cin >> c[c_i];
    }

    int result = flatlandSpaceStations(n, m, c);

    cout << result;
    return 0;
}
