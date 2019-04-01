/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank Breaking the Records Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/

#include <bits/stdc++.h>

using namespace std;

vector < int > getRecord(vector < int > s){
    // Complete this function
    int i,j,h,l,coun,n,mx,mn,temp;
    n = s.size();
    vector <int> res(2);
    h=0;
    l=0;
    mx=s[0];
    mn=s[0];
    for(i=1;i<n;i++){
        temp=s[i];
        if(temp>mx){
            mx=temp;
            h++;
        }
        if(temp<mn){
            mn=temp;
            l++;
        }
    }
    res[0]=h;
    res[1]=l;
    return res;


}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    vector < int > result = getRecord(s);
    string separator = "";
    string delimiter = " ";
    for(int i= 0; i<2; i++) {
        cout<<separator<<result[i];
        separator = delimiter;
    }
    cout<<endl;
    return 0;
}

