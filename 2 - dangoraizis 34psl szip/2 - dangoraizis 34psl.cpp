#include <bits/stdc++.h>

using namespace std;
int main()
{
    int kabinetai;
    int lenteliu_sk;

    ifstream sk ("Duom.txt");
        sk >> kabinetai;

    for (int i = 1; i <= kabinetai; i++)
    {
        int a = i;
        while (a > 0)
        {
            a = a / 10;
            lenteliu_sk ++;
        }
    }

    ofstream rez ("Rez.txt");

    rez << lenteliu_sk <<endl;

    return 0;
}
