/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank Counting Valleys Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,k,flag,sea,m,v,n;
    flag=0;
    sea=0;
    m=0;
    v=0;
    char c;
    cin>>n;
    vector<char> seq(n);
    for(i=0;i<n;i++){
        cin>>c;

        if(c=='U'){
            sea++;
        }else if(c=='D'){
            if(flag==0){
                v++;
            }
            sea--;

        }

        flag=sea;

    }
    cout<<v;
    return 0;
}
