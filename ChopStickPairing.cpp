#include <iostream>
#include <algorithm>
using namespace std;

int Chopsticks(int *arr, int n, int d)
{
    int pairs = 0;
    for(int i=0;i<n-1;i++)
    {
        if((arr[i+1]-arr[i])<=d)
        {
            pairs++;
            i++;
        }
    }
    return pairs;
}

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,d;
    cin>>n>>d;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    cout<<Chopsticks(arr,n,d)<<endl;
    return 0;
}
