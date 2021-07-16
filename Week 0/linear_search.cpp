#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "How Many Elements: ";
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cout << "Enter Element " << i+1 << " : ";
        cin >> a[i];
    }
    int c,d=0;
    cout << "Enter Element for Comparison: ";
    cin >> c;
    for(int i=0;i<n;i++){
        if(c==a[i]){cout << "Number of Comparisons = " << i+1;d=1;break;}
    }
    if(d==0){cout << "Element Not Found";}
}
