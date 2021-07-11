#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;
int a[1000001];
void sangnt(int n)
{
    a[1] = a[0] =false;
    for(int i = 2;i <= n; i ++)a[i] = true;
    for(int i = 2; i*i <= n; i ++)
    {
        for(int j = i*i ; j <= n ; j  += i)
        {
            a[j] = false;
        }
    }
}
int main()
{
    int n;
    fstream in("1.INP", ios::in);
    fstream out("2.OUT",ios::out);
    in >> n;
    sangnt(n);
    int t = 0;
    for(int i = 2; i*i  <= n; i++)
    {
        if(a[i]) t++;
    }
    out<<t;
    in.close();
    out.close();
}
