/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank Birthday Chocolate Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/

#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector < int > s, int d, int m)
{
    // Complete this function
    int i,j,k=1,t=m,flag,sum;
    flag=0;
    sum=0;
     for(int i=0;i<n;i++){
        sum=s[i];
        for(j=k;j<t;j++){
            sum=sum+s[j];
        }
        if(sum==d){
            flag++;
        }
        k++;
        t++;
    }
    return flag;
}

int main()
{
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++)
    {
        cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}

