#include <iostream>
using namespace std;
int main()

{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin >> n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin >> a[j];
        }
        int z,d=0;
        cin >> z;
        for(int j=0;j<n;j++)
        {
            if(a[j]==z){cout << "Present " << j+1;d=1;}
        }
        if(d==0)
        {
            cout << "Not Present " << n;
        }
    }
}
