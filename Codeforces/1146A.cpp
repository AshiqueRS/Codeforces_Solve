#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    int count1=0,count2=0;
    int a=0,b=0;

    getline(cin,s);

    for(int i=0 ; i<s.size(); i++)
    {
        if( s[i] == 'a')
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }

    if(count2>=count1)
    {
        count2=count1-1;
        a=count1+count2;
        printf("%d\n",a);
    }
    else
    {
        a=count1+count2;
        printf("%d\n",a);
    }
    count1=0;count2=0;
    a=0;

    return 0;
}
