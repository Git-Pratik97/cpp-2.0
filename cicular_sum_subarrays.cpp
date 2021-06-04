#include<iostream>
#include<climits>

using namespace std;

int kadane(int arr[], int n)
{
    int curr_sum = 0;
    int max_sum = INT_MIN;
    for (int i = 0; i<n; i++)
    {
        curr_sum += arr[i];
        if (arr[i] < 0)
        {
            curr_sum = 0;
        }
        max_sum = max(max_sum, curr_sum);

    }
    return max_sum;
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

    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(arr, n);
    int total = 0;
    for (int i= 0; i < n; i++)
    {
        total += arr[i];
        arr[i] = -arr[i];
    }

    wrapsum = total + kadane(arr,n);
    
    cout << max(wrapsum, nonwrapsum) <<endl;

    return 0;
}