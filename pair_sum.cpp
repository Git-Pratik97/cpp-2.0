#include<iostream>
#include<climits>

using namespace std;

bool pair_sum(int arr[], int n, int k)
{
    int low = 0;
    int high = n-1;

    while(low < high)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << low << " " << high << endl;
            return true;
        }
        
        else if (arr[low] + arr[high] > k)
        {
            high--;
        }
        
        else
        {
            low++;   
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;
    cout << pair_sum(arr, n, k) << endl;
    return 0;
}