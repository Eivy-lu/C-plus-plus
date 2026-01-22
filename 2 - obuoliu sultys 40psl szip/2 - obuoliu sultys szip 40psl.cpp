#include <bits/stdc++.h>

using namespace std;

void skaiciavimas(int n, int sulciu_kiekis, int &penki, int &du, int &vienas);

int main()
{
    int n;
    int sulciu_kiekis;
    int penki;
    int du;
    int vienas;

    ifstream sk ("duom.txt");
    ofstream rez ("rez.txt");

    sk >> n;

    for (int i = 0; i < n; i ++)
    {
        sk >> sulciu_kiekis;
        skaiciavimas(n, sulciu_kiekis, penki, du, vienas);
        rez <<penki<<" "<<du<<" "<<vienas<<endl;
    }
    return 0;
}

void skaiciavimas(int sulciu_kiekis, int &penki, int &du, int &vienas)
{
    penki = sulciu_kiekis / 5;
    du = (sulciu_kiekis % 5) / 2;
    vienas = ((sulciu_kiekis % 5) % 2) / 1;
}
