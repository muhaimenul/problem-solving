/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank's Kangaroo Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    // Complete this function
    int i,j,flag;
    flag=0;
    string result;
    if(v2>v1){
        result = "NO";
    }else{

        for(i=1;i<=100000;i++){
            if((i*v1+x1) == (i*v2+x2)){
                flag=1;
                break;
            }
        }
        if(flag==1){
            result = "YES";
        }else{
            result = "NO";
        }

    }

    return result;
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;

    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}

