#include<iostream>
using namespace std;

void fibona(int n)
{
    int t1, t2;
    t1 = 0;
    t2 = 1;
    int next_term = 0;

    for (int i = 1; i <= n; i++)
    {
        cout << t1 << " ";
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;
    }
    return;
}


int main()
{
    int n;
    cin >> n;

    fibona(n);
    return 0;
}