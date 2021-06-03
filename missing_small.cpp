#include<iostream>
#include<climits>


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

    int N = 1e6+2;
    bool *check = new bool[N];
    fill(check, check+N, false);

    for(int i = 0;i < n; i++)
    {
        if (arr[i] >= 0)
        {
            check[arr[i]] = 1;
        }
    }
    
    int ans = -1;
    for (int i =1; i < N; i++)
    {
        if (check[i] == 0)
        {
            ans = i;
            break;
        }
    }
    cout << ans <<endl;
    for (int i = 0; i < 7; i++)
    {
        cout << check[i] << " ";
    }
    delete[] check;
    return 0;
}