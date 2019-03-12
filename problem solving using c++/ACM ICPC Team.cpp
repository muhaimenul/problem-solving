/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank ACM ICP Team Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int m;
    cin >> n >> m;

    int i,j,k,sum,temp,t;

    char* topic[n];
    char *ci,*cj;
    for(int topic_i = 0; topic_i < n; topic_i++)
    {
        topic[topic_i] = (char *)malloc(1024 * sizeof(char));
        cin>>topic[topic_i];
    }
    sum=INT_MIN;
    t=0;
    for(i=0; i<n-1; i++)
    {
        ci=topic[i];

        for(j=i+1; j<n; j++)
        {
            cj=topic[j];
            temp=0;
            for(k=0; k < m; k++)
            {
                if(ci[k]=='1' || cj[k]=='1')
                {
                    temp++;
                }
            }

            if(temp==sum)
            {
                t++;
            }
            else if(temp>sum)
            {
                sum=temp;
                t=1;
            }
        }
    }

    cout<<sum<<"\n"<<t;
    return 0;
}
