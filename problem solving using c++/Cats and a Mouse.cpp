/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank Cats and a Mouse Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/

#include <bits/stdc++.h>

using namespace std;

void winner(int x, int y, int z){

    int d1,d2;
    d1 = abs(x-z);
    d2 = abs(y-z);
    if(d1>d2){
        cout<<"Cat B"<<endl;
    }else if(d1<d2){
        cout<<"Cat A"<<endl;
    }else{
        cout<<"Mouse C"<<endl;
    }


}

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
        winner(x,y,z);
    }
    return 0;
}
