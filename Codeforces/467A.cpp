#include<bits/stdc++.h>

using namespace std;

int main()
{
    int r,p,a,count1=0;
    scanf("%d",&r);
    int temp=0;
    for (int i=0 ; i<r ; i++)
    {
        scanf("%d%d",&p,&a);
        temp=a-p;
        if(temp>1)
        {
            count1++;
        }
        temp=0;
    }
    printf("%d\n",count1);

    return 0;
}
