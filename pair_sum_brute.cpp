#include<iostream>
#include<climits>

using namespace std;

bool pair_sum(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                cout << i << " " << j <<endl;
                return true;
            }
        }
    }
    return false;
}

int main ()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;
    cout << pair_sum(arr, n, k) <<endl;
    return 0;
}