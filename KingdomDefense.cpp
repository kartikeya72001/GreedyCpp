#include <iostream>
#include <algorithm>
using namespace std;

int Defense(int r, int c, int n, int *xarr, int* yarr)
{
    int dx = xarr[0]-1;
    int dy = yarr[0]-1;

    for(int i=1;i<n;i++)
    {
        dx = max(dx,xarr[i]-xarr[i-1]-1);
        dy = max(dy,yarr[i]-yarr[i-1]-1);
    }

    dx = max(dx,r-xarr[n-1]);
    dx = max(dx,c-yarr[n-1]);

    return dx*dy;

}

 int main(int argc, char const *argv[]) {
     int r,c,n;
     cin>>r>>c>>n;
     int *xarr = new int[n];
     int *yarr = new int[n];
     for(int i=0;i<n;i++)
     {
         cin>>xarr[i];
         cin>>yarr[i];
     }

     sort(xarr,xarr+n);
     sort(yarr,yarr+n);
     cout<<Defense(r,c,n,xarr,yarr);

     return 0;
 }
 /*
15 8 3
3 8
11 2
8 6
 */
