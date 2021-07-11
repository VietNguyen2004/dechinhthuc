#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int n;
    fstream in("1.INP", ios::in);
    fstream out("2.OUT",ios::out);
    in >> n;
    int b[5] = {};
    int a[10000];
    for(int i = 1; i <= n ; i++)
    {
        in>>a[i];
        b[a[i]] ++;
    }
    int t = b[4];
    int m = min(b[1], b[3]); // ghép dôi 1 với 3
    b[1] -= m;
    b[3] -= m;
    t += m;

    t += b[2] /2 ;//ghép cặp 2 lại với nhau
    b[2] -= b[2] /2;

    int s = 0;
    if(b[1])
    {
        s += 1 * b[1] + 2 * b[2];
        if(s % 4 == 0) t += s / 4;
        else t += 1 + s / 4;
    }
    else{
        t += b[2] + b[3];
    }
    out<<t;

    in.close();
    out.close();
    return 0;
}
