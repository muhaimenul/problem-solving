/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank's Utopian Tree Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

// Complete the utopianTree function below.
int utopianTree(int n)
{
    int h,d,i;
    d=0;
    h=1;

    for(i=0; i<=n; i++)
    {

        if(i==0)
        {
            d=0;
        }
        else if(i%2!=0)
        {
            d=h;
        }
        else if(i%2==0)
        {
            d=1;
        }

        h=h+d;
    }
    return h;

}

int main()
{
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {
        int n;
        cin >> n;
        int result = utopianTree(n);
        cout << result << endl;
    }
    return 0;
}
