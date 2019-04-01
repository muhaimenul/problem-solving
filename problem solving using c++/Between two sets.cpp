/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank Between Two Sets Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/

#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector <int> a, vector <int> b) {
    // Complete this function
    int i,j,x,total,n,m,flag1,flag2;
    flag1=1;
    flag2=1;
    n = a.size();
    m = b.size();

    total = 0;

    for(i=1; i<=100; i++)
    {
        x=i;
        for(j=0; j<n; j++)
        {
            if(x%a[j] != 0)
            {
                flag1=0;
                break;
            }
        }
        if(flag1 == 1)
        {
            for(j=0; j<m; j++)
            {
                if(b[j]%x!=0)
                {
                    flag2=0;
                    break;
                }
            }
        }

        if(flag2==1 && flag1==1){
            total++;
        }
        flag1=1;
        flag2=1;

    }
    return total;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}
