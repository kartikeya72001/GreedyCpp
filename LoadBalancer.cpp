#include <iostream>
#include <algorithm>
using namespace std;

int Balancer(int *arr, int n, int req)
{
    int ans = 0,dif = 0;
    for(int i=0;i<n;i++)
    {
        dif += (arr[i]-req);
        ans = max(ans,abs(dif));
    }
    return ans;
}

int main(int argc, char const *argv[]) {
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int req = 0;
    for(int i=0;i<n;i++)
        req+=arr[i];
    if(req%n==0)
        cout<<Balancer(arr,n,req/n);
    else
        cout<<"-1";
    return 0;
}
