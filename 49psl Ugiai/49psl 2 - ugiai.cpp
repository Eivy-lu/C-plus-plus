#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    int mokinio_ugis_cm;
    int is_viso_mokiniu_ugiai = 0;

    int vaikinu_sk = 0;
    int merginu_sk = 0;

    int vaikinu_ugiai = 0;
    int merginu_ugiai = 0;

    int vaikinu_ugiai_is_viso = 0;
    int merginu_ugiai_is_viso = 0;

    int vaikinu_zaideju_sk = 0;
    int merginu_zaideju_sk = 0;

    double klases_mokiniu_vidutinis_ugis;
    double klases_vaikinu_vidutinis_ugis;
    double klases_merginu_vidutinis_ugis;

    int kalses_mokiniu_sk [35];

    ifstream sk ("duom.txt");
    sk >> n;

    for(int i = 1; i <= n; i++)
    {
        sk >> kalses_mokiniu_sk[i];
    }

    for(int i = 1; i <= n; i++)
    {

        if (kalses_mokiniu_sk[i] < 0)
        {
            vaikinu_ugiai_is_viso += abs(kalses_mokiniu_sk[i]);
            vaikinu_sk++;
            if (abs(kalses_mokiniu_sk[i]) >= 175)
            {
                vaikinu_zaideju_sk ++;
            }
        }

        else
        {
            merginu_sk++;
            merginu_ugiai_is_viso += kalses_mokiniu_sk[i];
            if (kalses_mokiniu_sk[i] >= 175)
            {
                merginu_zaideju_sk ++;
            }
        }
    }

    is_viso_mokiniu_ugiai = merginu_ugiai_is_viso + vaikinu_ugiai_is_viso;

    klases_mokiniu_vidutinis_ugis = (double) is_viso_mokiniu_ugiai / n;
    klases_merginu_vidutinis_ugis = (double) merginu_ugiai_is_viso / merginu_sk;
    klases_vaikinu_vidutinis_ugis = (double) vaikinu_ugiai_is_viso / vaikinu_sk;

    ofstream ras ("rez.txt");
    ras << fixed << setprecision(1) << klases_mokiniu_vidutinis_ugis <<endl;
    ras << fixed << setprecision(2) << klases_merginu_vidutinis_ugis <<endl;
    ras << fixed << setprecision(2) << klases_vaikinu_vidutinis_ugis <<endl;
    if (merginu_zaideju_sk >= 7)
    {
        ras <<"Merginu komanda sudaryti galima"<<endl;
    }
    else ras <<"Merginu komanda sudaryti negalima"<<endl;

    if (vaikinu_zaideju_sk >= 7)
    {
        ras <<"Vaikinu komanda sudaryti galima"<<endl;
    }
    else ras <<"Vaikinu komanda sudaryti negalima"<<endl;

    return 0;
}
