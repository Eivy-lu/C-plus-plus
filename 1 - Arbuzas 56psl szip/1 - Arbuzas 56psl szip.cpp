#include <bits/stdc++.h>

using namespace std;

void skaitymas(vector<int> &arbuzai);
void spausdinimas(vector<int> arbuzai, int &nr);
int numeris(vector<int> arbuzai, int &nr);

int main()
{
    vector<int> arbuzai;
    int nr = 0;

    skaitymas(arbuzai);
    spausdinimas(arbuzai, nr);

    return 0;
}

int numeris(vector<int> arbuzai, int &nr)
{
    double vidurkis = 0;
    int ats;

    for(int i = 0; i < arbuzai.size(); i++)
    {
        vidurkis += arbuzai[i];
    }

    //for(auto a: arbuzai) vidurkis += a;

    vidurkis /= arbuzai.size();

    double skirtumas = INT_MAX;

    for(int i = 0; i < arbuzai.size(); i++)
    {
        if(skirtumas > abs(vidurkis - arbuzai[i]))
        {
            skirtumas = abs(vidurkis - arbuzai[i]);
            nr = i + 1;
            ats = nr;
        }
    }

    return ats;
}

void spausdinimas(vector<int> arbuzai, int &nr)
{
    ofstream rez("rez.txt");

    rez << numeris(arbuzai) << endl;
}

void skaitymas(vector<int> &arbuzai)
{
    ifstream sk("duom.txt");

    int n;
    sk >> n;

    for(int i = 0; i < n; i++)
    {
        int svoris;
        sk >> svoris;

        arbuzai.push_back(svoris);
    }
}
