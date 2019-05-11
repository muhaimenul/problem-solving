/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank's Save the Prisoner! Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

long long int saveThePrisoner(long long int n, long long int m, long long int s)
{
    // Complete this function
    long long int i,k,t;
    i= ((s+m)-1)%n;
    if(i==0)
    {
        i=n;
    }
    return i;
}

int main()
{
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {
        long long int n;
        long long int m;
        long long int s;
        cin >> n >> m >> s;

        long long int result = saveThePrisoner(n, m, s);
        cout << result << endl;
    }
    return 0;
}
