//codeforces556A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int l,count1=0,count2=0,res=0;
    string s;
    scanf("%d",&l);
    getchar();
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    if(count1>=count2)
    {
        printf("%d\n",res=count1-count2);
    }
    else
    {
        printf("%d\n",res=count2-count1);
    }

    count1=0;
    count2=0;
    res=0;

    return 0;
}
