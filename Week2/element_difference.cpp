#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int z=0;z<t;z++)
    {
        int p;
        cin >> p;
        int a[p];
        for(int y=0;y<p;y++)
        {
            cin >> a[y];
        }
        int com,cnt=0;
        cin >> com;
         for(int i=0;i<p;i++)
        {
            for(int j=i+1;j<p;j++)
            {
                if(a[i]-a[j]==com || a[i]-a[j]==com*-1){cnt++;}
            }
        }
        cout << cnt << "\n";
    }
}
