#include <bits/stdc++.h>

using namespace std;
int main()
{
    int plotis;
    int aukstis;
    int plakatu_sk;
    int x1, y1, x2, y2;
    int Sienos_S;

    ifstream sk ("Duom.txt");

    sk >> plotis >> aukstis;
    sk >> plakatu_sk;

    Sienos_S = plotis * aukstis;

    int a = 0;
    int p = 0;
    int s = 0;

    for (int i = 1; i <= plakatu_sk; i++)
    {
        sk >> x1 >> y1 >> x2 >> y2;

        p = x2 - x1;
        a = y2 - y1;

        s += a * p;
    }

    Sienos_S -= s;

    ofstream rez ("Rez.txt");

    rez << Sienos_S <<endl;

    return 0;
}
