#include<bits/stdc++.h>

using namespace std;

int main()
{
    int q,cnt=0;
    long long int n;
    scanf("%lld",&q);
    for(int i=0 ; i<q ; i++)
    {
        cnt=0;
        scanf("%lld",&n);
        while(1)
        {
            if(n==1)
            {
                printf("%d\n",cnt);
                break;
            }
            else if(n%2==0)
            {
                n=n/2;
                cnt++;
            }
            else if(n%3==0)
            {
                n=(2*n)/3;
                cnt++;
            }
            else if(n%5==0)
            {
                n=(4*n)/5;
                cnt++;
            }
            else
            {
                printf("-1\n");
                break;
            }
        }
    }
    return 0;
}
