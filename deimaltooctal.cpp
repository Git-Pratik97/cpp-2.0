#include<bits/stdc++.h>
using namespace std;

int dec_to_oct(int n)
{
    int x = 1;
    int ans = 0;

    while(x<n)
    {
        x *= 8;
    }

    while (x > 0)
    {
        int ld = n/x;
        n -= x*ld;
        x /= 8;
        ans = ans*10 + ld;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    int ans = dec_to_oct(n);
    cout << ans <<endl;

    return 0;
}