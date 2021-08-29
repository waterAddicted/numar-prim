#include <iostream>
using namespace std;

bool prim(int n)
{
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    int d=3;
    while(d*d<=n)
    {
        if(n%d==0) return false;
        d+=2;
    }
    return true;
}

int main()
{
   int n;
   cin>>n;
   bool r=prim(n);
   if(r) cout<<"Este prim";
   else cout<<"Nu este prim";
}