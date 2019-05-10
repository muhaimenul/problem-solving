/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank's Designer PDF Viewer Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

// Complete the designerPdfViewer function below.
int designerPdfViewer(vector<int> h, string word)
{
    int i,j,d,l=0,area;
    d=0;
    char c;
    while(word[l]!='\0')
    {
        l++;
    }

    for(i=0; i<l; i++)
    {
        c=word[i];
        j=c-'a';
        if(h[j]>=d)
        {
            d=h[j];
        }
    }
    area = d*l;

    return area;

}

int main()
{
    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++)
    {
        cin >> h[h_i];
    }
    char* word = (char *)malloc(512000 * sizeof(char));
    scanf("%s",word);

    int result = designerPdfViewer(h, word);

    cout << result << endl;

    return 0;
}
