/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank Chocolate Feast Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/

#include <bits/stdc++.h>

using namespace std;

int feast(int p, int m){

    if(p==m) return 1;
    else if(p<m) return 0;
    else return 1+feast(p-m+1,m);

}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        int p,k,t;
        cin >> n >> c >> m;
        p=n/c;
        k= p + feast(p,m);
        cout<<k<<endl;
    }
    return 0;
}
