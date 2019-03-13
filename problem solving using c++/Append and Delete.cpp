/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank Append and Delete Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

int strSize(char * st)
{
    int i,len=0;
    for(int i=0; st[i]!='\0'; i++)
    {
        len++;
    }
    return len;
}

int main()
{
    char* s = (char *)malloc(512000 * sizeof(char));
    cin >> s;
    char* t = (char *)malloc(512000 * sizeof(char));
    cin >> t;
    int k;
    cin >> k;
    int i,j,sum,ls,lt,ds,dt,l,d;
    ls = strSize(s);
    lt = strSize(t);
    //cout<<ls<<" "<<lt<<endl;
    if(lt<ls)
    {
        l=lt;
    }
    else
    {
        l=ls;
    }
    sum=0;
    for(i=0; i<l; i++)
    {
        if(s[i]==t[i])
        {
            sum++;
        }
        else
        {
            break;
        }
    }
    ds=ls-sum;
    dt=lt-sum;
    d = ds+dt;
    if((d<=k && (k-d)%2==0) || ls+lt<k ){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    return 0;
}
