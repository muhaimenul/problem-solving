/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank's Migratory Birds Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, vector <int> ar)
{
    // Complete this function
    int i,temp,most,flag;
    vector<int> type(5);
    type.assign(5,0);

    for(i=0; i<n; i++)
    {

        if(ar[i]==1)
        {
            type[0]++;
        }
        else if(ar[i]==2)
        {
            type[1]++;
        }
        else if(ar[i]==3)
        {
            type[2]++;
        }
        else if(ar[i]==4)
        {
            type[3]++;
        }
        else if(ar[i]==5)
        {
            type[4]++;
        }
    }
    most=0;
    for(i=0;i<5;i++){
        temp=type[i];
        if(temp>most){
            most=temp;
            flag=i+1;
        }
    }

    return flag;

}

int main()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++)
    {
        cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}
