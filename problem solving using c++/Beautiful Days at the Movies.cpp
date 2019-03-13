/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank Beautiful Days at the Movies Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/

#include <bits/stdc++.h>

using namespace std;

int reversed(int k) {
    int i,dev,rem,sum=0;
    while(k!=0){
        rem=k%10;
        k=k/10;
        sum=sum*10+rem;
    }
    return sum;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,k,x,xr,a,b=0;
    cin>>i>>j>>k;
    for(x=i;x<=j;x++){
        xr=reversed(x);
        a=abs((x-xr));
        if(a%k==0){
            b++;
        }
    }
    cout<<b;
    return 0;
}
