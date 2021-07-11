#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;

int main()
{
    fstream in("1.INP", ios::in);
    fstream out("2.OUT",ios::out);
    int k ;
    int n ;
    in>>k;
    for(int j = 1; j <= k ;j ++)
    {
        in>>n;
        int res = 1;
        for(int i = n ;i > 1; i --)
        {
            if(n % i == 0 && (int)sqrt(i) == sqrt(i))
            {
                res = i;
                break;
            }
        }
        out<<(int)sqrt(res)<<" "<<n / res<<endl;
    }
    in.close();
    out.close();
    return 0;
}
