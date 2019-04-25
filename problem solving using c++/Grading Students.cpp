/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank's Grading Students Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

vector < int > gradingStudents(vector < int > grades)
{
    // Complete this function
    int i,j,k,n,l,rem1,rem2,temp;
    l = grades.size();

    for(i=0; i<l; i++)
    {
        k=grades[i];
        if(k<38)
        {
            grades[i]=k;
        }
        else
        {
            temp = k%10;
            if(temp<5)
            {
                rem1 = 5-temp;
                if(rem1<3)
                {
                    k=k+rem1;
                    grades[i]=k;
                }
                else
                {
                    grades[i]=k;
                }
            }
            else if(temp<10)
            {
                rem1 = 10-temp;
                if(rem1<3)
                {
                    k=k+rem1;
                    grades[i]=k;
                }
                else
                {
                    grades[i]=k;
                }
            }

        }
    }

    return grades;

}

int main()
{
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++)
    {
        cin >> grades[grades_i];
    }
    vector < int > result = gradingStudents(grades);
    for (ssize_t i = 0; i < result.size(); i++)
    {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}
