#include <iostream>

using namespace std;
int rec(int n)
{
    int cnt=1;
    while(1)
    {
        if(n==1) break;
        else if(n%2==0) n=n/2;
        else n=3*n+1;
        cnt++;
    }
    return cnt;
}
int main()
{
    int i,j,x,y;
    while(scanf("%d %d",&i ,&j)==2)
    {
        int mx=0;
        x=i; y=j;
        if(i>j)
        {
            int m=i;
            i=j;
            j=m;
        }
        for(int h=i;h<=j;h++)
        {
            if(rec(h)>mx) mx=rec(h);
        }
        cout<<x<<" "<<y<<" "<<mx<<endl;
    }
    return 0;
}
