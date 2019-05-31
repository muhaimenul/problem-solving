/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank's Viral Advertising Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

#define people 5

// Complete the viralAdvertising function below.
int viralAdvertising(int n) {

    int i, sum, m, k;
    sum=0;
    k = people;
    for(i=1;i<=n;i++){
        m = k / 2;
        sum = sum + m;
        k = m * 3;
    }
    return sum;

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;

    cin>>n;

    int result = viralAdvertising(n);

    cout << result << endl;

    return 0;
}
