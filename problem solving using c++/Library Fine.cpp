/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank's Library Fine Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/

#include <bits/stdc++.h>

using namespace std;

// Complete the libraryFine function below.
int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2)
{
    int fine,d,m;

    if(y1<y2)
    {
        fine=0;
    }
    else if(y1==y2)
    {
        if(m1<m2)
        {
            fine=0;
        }
        else if(m1==m2)
        {
            if(d1<=d2)
            {
                fine=0;
            }
            else
            {
                d=d1-d2;
                fine=d*15;
            }
        }
        else
        {
            m=m1-m2;
            fine=m*500;
        }
    }
    else
    {
        fine=10000;
    }

    return fine;
}

int main()
{
    int d1, m1, y1;
    cin >> d1 >> m1 >> y1;
    int d2, m2, y2;
    cin >> d2 >> m2 >> y2;

    int result = libraryFine(d1, m1, y1, d2, m2, y2);
    cout<<result<<endl;
    return 0;
}

