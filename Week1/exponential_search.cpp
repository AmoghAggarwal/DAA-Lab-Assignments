#include<iostream>
using namespace std;
int main()
{
     int t;
    cin >> t;
    for(int z=0;z<t;z++)
    {
        int i;
        cin >> i;
        int a[i];
        for(int y=0;y<i;y++)
        {
            cin >> a[y];
        }
        int j;
        cin >> j;
        if(j==a[0]){cout << "Present 1\n";}
        else if(j==a[1]){cout << "Present 3\n";}
        else if(j==a[2]){cout << "Present 2\n";}
        else
        {
            int p=2,po=2;
            while(a[p]<j)
            {
                p*=2;
                po++;
            }
            if(a[p]==j)
            {
                cout << "Present " << po;
            }
            else if(a[p]>j)
            {
                int q=(p/2),d=1;
                while(a[q]!=j)
                {
                    q++;
                    po++;
                    if(q==p){d=0;break;}
                }
                if(d==1){cout << "Present " << po;}
                else if(d==0){cout << "Not Present "; }
            }
        }


    }
}
