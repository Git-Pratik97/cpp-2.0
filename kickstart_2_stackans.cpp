#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;

    int main()

{
    int n; 
    
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        
        cin >> arr[i];
    }

    const int N = 1e6 + 2;
    int *idx = new int[N];

    fill (idx, idx + N, -1);

    int minidx = INT_MAX;
    for(int i =0; i < n; i++)
    {
        if (idx[arr[i]] != -1)
        {
            minidx = min(minidx, idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i;
        }
    }

    if(minidx == INT_MAX)
    {
        cout  << "-1" << endl;
    }
    else
    {
        cout << minidx + 1 << endl;
    }
    delete[] idx;
    return 0;
    
}