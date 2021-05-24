#include<bits/stdc++.h>
using namespace std;

string dec_to_hex(int n)
{
    int x = 1;
    string ans = "";

    while (x < n)
    {
        x *= 16;
    }

    while (x > 0)
    {
        int ld = n/x;
        n -= x*ld;
        x /= 16;
        if (ld <= 9)
        {
            ans += to_string(ld); 
        }

        else
        {
            char c = 'A' + ld - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    string ans = dec_to_hex(n);
    cout << ans <<endl;
    return 0;
}
