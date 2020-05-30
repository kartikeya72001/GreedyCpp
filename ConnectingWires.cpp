#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int Wires(int n, int* white, int* black)
{
    int i=0;
    int length = 0;
    while (i!=n) {
        length += abs(black[i]-white[i]);
        i++;
    }
    return length;
}

int main(int argc, char const *argv[]) {
    int n;
    cin>>n;
    int black[100], white[100];
    for(int i=0;i<n;i++)
    {
        cin>>black[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>white[i];
    }
    sort(black,black+n);
    sort(white,white+n);
    cout<<Wires(n,white,black);

    return 0;
}
/*
3
3 4 1
2 5 6
*/
