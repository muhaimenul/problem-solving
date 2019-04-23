/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank's Electronics Shop Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

int getMoneySpent(vector < int > keyboards, vector < int > drives, int s){
    // Complete this function
    int flag,i,j,k,n,m,t,temp;
    n = keyboards.size();
    m = drives.size();
    flag=0;
    temp=0;
    t=0;
    k = m*n;
    vector<int> price(k,0);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if((keyboards[i]+drives[j])<=s){
                flag=1;
                price[t]=(keyboards[i]+drives[j]);
                t++;
            }
        }
    }
    if(flag==1){
        for(i=0;i<k;i++){
            if(price[i]>temp){
                temp=price[i];
            }
        }
    }else{
        temp=-1;
    }
    return temp;
}

int main() {
    int s;
    int n;
    int m;
    cin >> s >> n >> m;
    vector<int> keyboards(n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       cin >> keyboards[keyboards_i];
    }
    vector<int> drives(m);
    for(int drives_i = 0; drives_i < m; drives_i++){
       cin >> drives[drives_i];
    }
    //  The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
    int moneySpent = getMoneySpent(keyboards, drives, s);
    cout << moneySpent << endl;
    return 0;
}

