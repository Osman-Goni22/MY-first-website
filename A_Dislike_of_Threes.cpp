#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=1700;

    vector<int> v;

    for(int i=1;i<n;i++)
    {
        if(i%3!=0&&i%10!=3)
        {
            v.push_back(i);
        }
    }


    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<v[n-1]<<endl;
    }
}