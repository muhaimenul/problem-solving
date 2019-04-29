/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank's Left Rotation Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

vector <int> leftRotation(vector <int> a, int n, int d) {
    // Complete this function
    int i,j,k;
    vector <int> first(n,0);
    for(i=d,j=0;i<n;i++,j++){
            first[j]=a[i];
    }
    for(i=0;i<d;i++){
        first[j]=a[i];
        j++;
    }
    return first;

}

int main() {
    int n;
    int d;
    cin >> n >> d;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    d=d%n;
    vector <int> result = leftRotation(a, n, d);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
