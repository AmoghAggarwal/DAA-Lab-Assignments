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
        int j,po =1;
        cin >> j;
        int p=i/2;
        while(a[p]!=j)
        {
            int MAX=i-1;
            if(p==0 || p==i-1){cout << "Key not present\n";po=0;break;}
            else if(a[p]>j){p=(0+p)/2;MAX=p;}
            else if(a[p]<j){p=(MAX+p)/2;}
        }
        while(a[p]==j)
        {
            po++;
            p++;
        }
        cout << j << " - " << po;
    }
}
