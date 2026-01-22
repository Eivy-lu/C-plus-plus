#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    int skaiciu_seka [1000];
    int suma = 0;

    ifstream sk ("duom.txt");
    sk >> n;

    for (int i = 1; i <= n; i++)
    {
        sk >> skaiciu_seka [i];
    }


    for (int i = 1; i <= n; i++)
    {
        suma += skaiciu_seka [i];
    }

    ofstream ras("rez.txt");
    ras << suma << endl;

    return 0;
}



