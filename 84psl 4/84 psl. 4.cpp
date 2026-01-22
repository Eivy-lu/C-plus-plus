#include <fcntl.h>
#include <io.h>
#include <iostream>
#include <locale>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std;

double KbTr (double x);

int main()
{
    int n;
    double x;
    int a;

    ifstream sk ("duom.txt");
    sk >> n;

    ofstream rez ("rez.txt");
    for (int i = 1; i <= n; i++)
    {
        sk >> a;

        rez << a <<" "<< KbTr (a) <<endl;
    }

    return 0;
}
double KbTr (double x)
{
    return x * x * x;
}
