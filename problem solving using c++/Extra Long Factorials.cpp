/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank's Extra Long Factorials Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/

#include <bits/stdc++.h>

using namespace std;

int multiply(int x, int ar[], int len);

void extraLongFactorials(int n)
{
    int i,x,result[500];
    result[0]=1;
    int res_size=1;

    for(x=2; x<=n; x++)
    {
        res_size=multiply(x,result,res_size);
    }
    for(i=res_size-1; i>=0; i--)
    {
        cout<<result[i];
    }
}

int multiply(int x, int ar[], int len)
{
    int i,car=0,p,q;
    for(i=0; i<len; i++)
    {
        p = ar[i]*x+car;
        ar[i]=p%10;
        car = p/10;
    }

    while(car)
    {
        q=car%10;
        ar[len]=q;
        car=car/10;
        len++;
    }
    return len;
}

int main()
{
    int n;
    cin >> n;

    extraLongFactorials(n);

    return 0;
}
