/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank's Taum and B'day Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

// Complete the taumBday function below.
long long int taumBday(long b, long w, long x, long y, long z)
{
    long long int sum;
    if(x<y)
    {
        if((x+z)<y)
        {
            y=x+z;
        }
    }
    else if(y<x)
    {
        if((y+z)<x)
        {
            x= y+z;
        }
    }
    sum = b*x + w*y;
    return sum;
}

int main()
{
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {
        long b, w;
        cin >> b >> w;
        long x, y, z;
        cin >> x >> y >> z;
        long long int result = taumBday(b, w, x, y, z);
        cout << result << endl;
    }
    return 0;
}
