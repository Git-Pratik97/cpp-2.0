#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    int minno = INT_MAX;
    int maxno = INT_MIN;

    for(int i = 1;i <= n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        minno = min(minno, arr[i]);
        maxno = max(maxno, arr[i]);
    }
    cout << minno << " " << maxno <<endl;

    return 0;
}