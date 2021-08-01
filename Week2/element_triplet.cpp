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
        int d=0;
        for(int i=0;i<p;i++)
        {
            for(int j=i+1;j<p;j++)
            {
                for(int k=j+1;k<p;k++)
                {
                    if(a[i]+a[j]==a[k]){cout << i+1 << ',' << j+1 << ',' << k+1 << "\n";d=1;}
                }
            }
        }
        if(d==0){cout << "No sequence found" << "\n";}
    }
}
