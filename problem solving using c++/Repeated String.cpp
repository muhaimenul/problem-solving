/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank's Repeated String Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long long int repeatedString(char* s, long long n)
{

    long long int i,j,k,m,p,total;
    int l;
    l=strlen(s);
    k=0;
    total=0;
    for(i=0; i<l; i++)
    {
        if(s[i]=='a')
        {
            k++;
        }
    }

    m=n/l;
    p=n%l;
    //cout<<l<<" "<<k<<" "<<m<<" "<<p<<endl;
    if(p!=0)
    {
        for(i=0; i<p; i++)
        {
            if(s[i]=='a')
            {
                total++;
            }
        }
    }
    total=total+m*k;

    return total;

}

int main()
{
    char* s = (char *)malloc(512000 * sizeof(char));
    cin>>s;
    long long n;
    cin>>n;

    long long int result = repeatedString(s, n);

    cout << result << endl;


    return 0;
}
