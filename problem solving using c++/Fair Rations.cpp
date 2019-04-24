/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank's Fair Rations Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the fairRations function below.
void fairRations(vector<int> B, int N)
{
    if (N == 2)
    {
        if (B[0] % 2 == 0 && B[1] % 2 == 0)
        {
            cout << 0;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        int i, j, sum;
        sum = 0;
        for (i = 0; i < N - 1; i = i + 1)
        {
            if (B[i] % 2 != 0)
            {
                if (B[i - 1] % 2 != 0 && i != 0)
                {
                    B[i - 1] = B[i - 1] + 1;
                    sum++;
                }
                else
                {
                    B[i + 1] = B[i + 1] + 1;
                    sum++;
                }
                B[i] = B[i] + 1;
                sum++;
            }
        }
        if (B[N - 1] % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << sum;
        }
    }
}

int main()
{
    int N;
    cin >> N;
    vector<int> B(N);

    for (int B_i = 0; B_i < N; B_i++)
    {
        cin >> B[B_i];
    }

    fairRations(B, N);
    return 0;
}
