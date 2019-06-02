/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank's Compare the Triplets Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

// Complete the compareTriplets function below.
vector<int> compareTriplets(vector<int> a, vector<int> b)
{
    vector<int> result(2, 0);

    for(int i = 0; i < a.size(); i++) {
        result[0] += (a[i] > b[i]) ? 1 : 0;
        result[1] += (a[i] < b[i]) ? 1 : 0;
    }

    return result;
}

int main()
{
    vector<int> a(3);

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    vector<int> b(3);

    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
    }

    vector<int> result = compareTriplets(a, b);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];

        if (i != result.size() - 1)
        {
            cout << " ";
        }
    }
    cout << "\n";


    return 0;
}
