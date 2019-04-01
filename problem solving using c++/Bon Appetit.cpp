/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank Bon Appétit Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

int bonAppetit(int n, int k, int b, vector <int> ar) {
    // Complete this function
    int i,j,sum,temp,cost;
    sum=0;
    for(i=0;i<n;i++){
            temp=ar[i];
        if(i==k){
            temp=0;
        }
        sum=sum+temp;
    }
    cost=sum/2;
    return (b-cost);

}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int b;
    cin >> b;
    int result = bonAppetit(n, k, b, ar);
    if(result==0){
        cout<<"Bon Appetit"<<endl;
    }else{
        cout << result << endl;
    }


    return 0;
}
