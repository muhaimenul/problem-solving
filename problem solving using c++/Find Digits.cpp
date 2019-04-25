
#include <bits/stdc++.h>
/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank's Find Digits Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/
using namespace std;

int findDigits(int n)
{
    int i,sum,temp,rem;
    sum=0;
    temp=n;
    while(temp)
    {
        rem=temp%10;
        if(rem!=0 && n%rem==0)
        {
            sum++;
        }

        temp=temp/10;
    }
    return sum;

}

int main()
{
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {
        int n;
        cin >> n;

        int result = findDigits(n);

        cout<<result<<endl;
    }
    return 0;
}
