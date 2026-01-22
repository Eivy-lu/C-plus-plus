#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    int skaiciu_seka [100000];
    double vidurkis;
    int suma;

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

    vidurkis = (double)suma / n;

    ofstream ras ("rez.txt");
    ras << fixed << setprecision (3) << vidurkis <<endl;

    return 0;
}



