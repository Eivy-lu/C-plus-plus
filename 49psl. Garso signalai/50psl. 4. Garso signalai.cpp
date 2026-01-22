#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n, k;
    int skaicius;
    int eilute[50];

    ifstream sk ("duom.txt");
    ofstream ras ("rez.txt");
    sk >> n;
    sk >> k;

    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            sk >> eilute[j];
        }
        for(int m = 0; m < k; m++)
        {
            if ( m == 0 )
            {
                ras << (eilute[m] + eilute [m + 1]) / 2 <<" ";
            }
            else if (m == (k - 1))
            {
                ras << (eilute[m] + eilute [m - 1]) / 2 <<" ";
            }
            else
            {
                ras << (eilute[m] + eilute [m + 1] + eilute [m - 1]) / 3 <<" ";
            }
        }
        ras <<endl;
    }

    return 0;
}



