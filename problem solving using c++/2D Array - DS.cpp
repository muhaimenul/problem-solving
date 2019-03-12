#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0; arr_i < 6; arr_i++)
    {
        for(int arr_j = 0; arr_j < 6; arr_j++)
        {
            cin >> arr[arr_i][arr_j];
        }
    }

    int i,j,t,k,p,q,sum,mx=INT_MIN;
    t=0; // row start
    k=0;
    p=0; //column start
    q=0;
    while(1)
    {
        sum=0;
        for(i=t; i<k+3; i++)
        {
            for(j=p; j<q+3; j++)
            {
                if((i==t+1 && j==p) || (i==t+1 && j==p+2)){
                }else{
                   sum+=arr[i][j];
                }
            }
        }
        if(sum>=mx){
            mx=sum;
        }
        p++;
        q++;
        if(j==6){
            t++;
            k++;
            p=0;
            q=0;
        }

        if(i==6 && j==6){ break; }
    }

    cout<<mx;

    return 0;
}
