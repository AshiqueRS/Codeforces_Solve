#include<bits/stdc++.h>

using namespace std;

int main()
{
    int count1=0,count2=0;
    string s,c;
    getline(cin, s);

    for( int i=0 ; i<s.size() ; i++)
    {
        if(int(s[i])>64 && int(s[i])<92)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    if(count1>count2)
    {
        for(auto& c : s)
        {
            c = toupper(c);
        }
    }
    else
    {
        for(auto& c : s)
        {
            c = tolower(c);
        }
    }
    cout<<s<<endl;

    return 0;
}
