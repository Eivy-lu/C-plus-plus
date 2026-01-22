#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    int kiekvieno_mokinio_per_mokslo_metus_perskaitytos_knygos[35];

    int is_viso_perskaitytu_knygu_sk = 0;
    double vidutiniskai_vienas_mokinys_perskaite_per_mokslo_metus;
    double vidutiniskai_vienas_mokinys_perskaite_per_menesi;

    ifstream sk ("Duom.txt");
    sk >> n;

    for (int i = 1; i <= n; i++)
    {
        sk >>kiekvieno_mokinio_per_mokslo_metus_perskaitytos_knygos[i];
    }
    for(int i = 1; i <= n; i++)
    {
        is_viso_perskaitytu_knygu_sk += kiekvieno_mokinio_per_mokslo_metus_perskaitytos_knygos[i];
    }

    vidutiniskai_vienas_mokinys_perskaite_per_mokslo_metus = (double) is_viso_perskaitytu_knygu_sk / n;
    vidutiniskai_vienas_mokinys_perskaite_per_menesi = (double) is_viso_perskaitytu_knygu_sk / n / 10;

    ofstream ras("rez.txt");
    ras << is_viso_perskaitytu_knygu_sk << endl;
    ras << vidutiniskai_vienas_mokinys_perskaite_per_mokslo_metus <<endl;
    ras << vidutiniskai_vienas_mokinys_perskaite_per_menesi <<endl;

    return 0;
}

