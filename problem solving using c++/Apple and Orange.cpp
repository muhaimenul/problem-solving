/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank Apple and Orange Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/

#include <bits/stdc++.h>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, int m, int n, vector <int> apples, vector <int> oranges) {
    // Complete this function
    int i,j;
    int aplCount=0;
    int orgCount=0;
    for(i=0;i<m;i++){
        if(apples[i]>=(s-a) && apples[i]<=(t-a)){
            aplCount++;
        }
    }
    for(i=0;i<n;i++){
        if(oranges[i]<=(t-b) && oranges[i]>=(s-b)){
            orgCount++;
        }
    }
    cout<<aplCount<<endl;
    cout<<orgCount<<endl;
}

int main() {
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apple(m);
    for(int apple_i = 0; apple_i < m; apple_i++){
       cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for(int orange_i = 0; orange_i < n; orange_i++){
       cin >> orange[orange_i];
    }
    countApplesAndOranges(s, t, a, b, m, n, apple, orange);
    return 0;
}
