#include <fcntl.h>
#include <io.h>
#include <iostream>
#include <locale>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std;

double Strik (double a);

int main()
{
    int N;
    double a;

    ifstream sk ("duom.txt");
    sk >> N;

    ofstream rez ("rez.txt");
    for (int i = 1; i <= N; i++)
    {
        sk >> a;

        rez << a <<" "<< Strik (a) <<endl;
    }

    return 0;
}
double Strik (double a)
{
    return (sqrt (3) / 4) * pow (a, 2);
}
