#include <iostream>
#include <algorithm>
using namespace std;

int Standings(int *arr, int n)
{
    int ans = 0;
    for(int i=0;i<n;i++)
        ans += abs(i-arr[i]+1);

    return ans;
}

int main(int argc, char const *argv[]) {
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);

    cout<<Standings(arr,n)<<endl;
    return 0;
}
/*
7
1 2 2 1 5 7 7
*/
