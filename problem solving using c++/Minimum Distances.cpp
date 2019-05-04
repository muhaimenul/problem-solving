/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank's Minimum Distances Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

// Complete the minimumDistances function below.
int minimumDistances(vector<int> A, int n) {
    int i,j,k,flag,ai,aj,d;
    flag=0;
    d=INT_MAX;

    for(i=0; i<n; i++)
    {
        ai=A[i];
        for(j=i+1; j<n; j++)
        {
            aj=A[j];
            if(ai==aj)
            {
                flag=1;
                k=abs(j-i);
                if(k<=d)
                {
                    d=k;
                }
            }
        }
    }
    if(flag==1)
    {
        return d;
    }
    else
    {
        return -1;
    }

}

int main()
{
    int n,i;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int result = minimumDistances(A, n);

    cout << result << endl;

    return 0;
}
