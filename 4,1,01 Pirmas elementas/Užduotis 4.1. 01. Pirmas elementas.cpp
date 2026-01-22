#include <bits/stdc++.h>

using namespace std;

int main()

{

    int n;
    int a;
    int skaiciai [10000000];

    ifstream sk("Duom.txt");
    sk >> n;

    for(int i = 1; i <= n; i++)
    {
        sk >> skaiciai [i];
    }

    ofstream ras ("rez.txt");
    ras << skaiciai [1] <<endl;

    return 0;
}



