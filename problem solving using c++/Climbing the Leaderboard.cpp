/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank Climbing the Leaderboard Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int i,j,t;
    t=0;
    cin >> n;
    vector<int> scores(n);
    vector <int> r(n);
    for(int scores_i = 0; scores_i < n; scores_i++)
    {
        cin >> scores[scores_i];
    }
    int m;
    cin >> m;
    vector<int> alice(m);
    vector<int> ar(m);

    // Write Your Code Here
    r[0]=1;
    for(i=1; i<n; i++)
    {
        if(scores[i]==scores[i-1])
        {
            r[i]=r[i-1];
            continue;
        }
        r[i] = r[i-1]+1;
    }
    int ci=n-1;
    for(int i = 0; i < m; i++)
    {
        cin >> alice[i];

        while(ci>=0 && alice[i]>scores[ci])
        {
            ci--;
        }

        if(alice[i] > scores[0])
        {
            ar[i]=r[0];
        }
        else if(alice[i] < scores[n-1])
        {
            ar[i]=r[n-1]+1;
        }
        else if(alice[i] == scores[ci])
        {
            ar[i] = r[ci];
        }
        else if(alice[i] > scores[ci] && alice[i] < scores[ci-1])
        {
            ar[i]=r[ci];
        }
        else if (alice[i] < scores[ci] && alice[i] > scores[ci+1])
        {
            ar[i] = r[ci+1];
        }

        cout<<ar[i]<<endl;

    }


    return 0;
}
