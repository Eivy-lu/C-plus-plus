#include <bits/stdc++.h>

void skaiciavimas (int i, double &coliai, double &pedos, double &jardai);

using namespace std;
int main()
{
    double coliai;
    double pedos;
    double jardai;

    cout <<left<<setw(20)<<"Metrai"<<setw(20)<<"Coliai"<<setw(20)<<"Pedos"<<setw(20)<<"Jardai"<<endl;

    for (int i = 1; i <= 5; i++)
    {
        skaiciavimas (i, coliai, pedos, jardai);

        cout <<left<<setw(20)<< i <<setw(20)<<fixed<<setprecision(2)<<coliai<<setw(20)<<pedos<<setw(20)<<jardai<<endl;
    }

    return 0;
}

void skaiciavimas (int i, double &coliai, double &pedos, double &jardai)
{
    double cm = i * 100;
    coliai = cm / 2.54;
    pedos = coliai / 12;
    jardai = pedos / 3;
}
