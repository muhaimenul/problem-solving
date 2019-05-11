/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank's Sparse Arrays Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q,i;
    cin>>n;
    char* st[n];
    for(i=0; i<n; i++)
    {
        st[i] = (char *)malloc(1024 * sizeof(char));
        cin>>st[i];
    }

    cin>>q;
    for(i=0; i<q; i++)
    {
        char * ch,*cj;
        ch= (char*)malloc(1024 * sizeof(char));
        cin>>ch;
        int flag,sum;
        sum=0;
        for(int j=0; j<n; j++)
        {
            flag=0;
            cj=st[j];
            for(int k=0; ; k++)
            {
                if(ch[k]==cj[k])
                {
                    flag=1;
                    if(ch[k]=='\0')
                    {
                        break;
                    }
                }
                else if((ch[k]=='\0' && cj[k]!='\0') || (ch[k]!='\0' && cj[k]=='\0'))
                {
                    flag=0;
                    break;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                sum++;
            }
        }
        cout<<sum<<endl;

    }
    return 0;
}
