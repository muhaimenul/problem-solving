/*-------------------------------------------------------
                    <copyright notice>

 Purpose: Solution of Hackerrank's The Time in Words Problem

 @author Muhaimenul Islam <linkedin.com/in/muhaimenul>
 @version 1.2 4/11/17

 Please fork and leave a star if it's useful to you.
---------------------------------------------------------*/

#include <bits/stdc++.h>

using namespace std;

char* intToword(int i)
{
    char *ch = (char*)malloc(1024 * sizeof(char));
    if(i==1)
    {
        ch="one";
    }
    else if(i==2)
    {
        ch="two";
    }
    else if(i==3)
    {
        ch="three";
    }
    else if(i==4)
    {
        ch="four";
    }
    else if(i==5)
    {
        ch="five";
    }
    else if(i==6)
    {
        ch="six";
    }
    else if(i==7)
    {
        ch="seven";
    }
    else if(i==8)
    {
        ch="eight";
    }
    else if(i==9)
    {
        ch="nine";
    }
    else if(i==10)
    {
        ch="ten";
    }
    else if(i==11)
    {
        ch="eleven";
    }
    else if(i==12)
    {
        ch="twelve";
    }
    else if(i==13)
    {
        ch="thirteen";
    }
    else if(i==14)
    {
        ch="fourteen";
    }
    else if(i==15)
    {
        ch="quarter";
    }
    else if(i==16)
    {
        ch="sixteen";
    }
    else if(i==17)
    {
        ch="seventeen";
    }
    else if(i==18)
    {
        ch="eighteen";
    }
    else if(i==19)
    {
        ch="nineteen";
    }
//    else if(i==20)
//    {
//        ch="twenty";
//    }else if(i==21)
//    {
//        ch="twenty one";
//    }else if(i==12)
//    {
//        ch="sixteen";
//    }else if(i==16)
//    {
//        ch="sixteen";
//    }else if(i==16)
//    {
//        ch="sixteen";
//    }else if(i==16)
//    {
//        ch="sixteen";
//    }else if(i==16)
//    {
//        ch="sixteen";
//    }else if(i==16)
//    {
//        ch="sixteen";
//    }else if(i==16)
//    {
//        ch="sixteen";
//    }else if(i==16)
//    {
//        ch="sixteen";
//    }
    else if(i==30)
    {
        ch="half";
    }
    return ch;
}

void timeInWords(int h, int m) {
    char *hr = (char*)malloc(1024 * sizeof(char));
    char *mn = (char*)malloc(1024 * sizeof(char));
    if(m==0)
    {
        hr = intToword(h);
        cout<<hr<<" o' clock"<<endl;
    }
    else if(m<=30)
    {
        hr = intToword(h);
        if(m>=20 && m<30)
        {
            if(m==20)
            {
                cout<<"twenty minutes past "<<hr<<endl;
            }
            else
            {
                int k;
                k=m%20;
                mn = intToword(k);
                cout<<"twenty "<<mn<<" minutes past "<<hr<<endl;
            }
        }
        else
        {
            mn = intToword(m);
            if(m==15 || m==30)
            {
                cout<<mn<<" past "<<hr<<endl;
            }
            else
            {
                cout<<mn<<" minutes past "<<hr<<endl;
            }
        }

    }
    else if(m>30)
    {
        h=h+1;
        m=60-m;
        hr = intToword(h);
        if(m>=20 && m<30)
        {
            if(m==20)
            {
                cout<<"twenty minutes to "<<hr<<endl;
            }
            else
            {
                int k;
                k=m%20;
                mn = intToword(k);
                cout<<"twenty "<<mn<<" minutes to "<<hr<<endl;
            }

        }
        else
        {
            mn = intToword(m);
            if(m==15)
            {
                cout<<mn<<" to "<<hr<<endl;
            }
            else
            {
                cout<<mn<<" minutes to "<<hr<<endl;
            }

        }
    }

}

int main()
{
    int h;
    cin >> h;
    int m;
    cin >> m;
    timeInWords(h, m);
    return 0;
}
