#include <fcntl.h>
#include <io.h>
#include <iostream>
#include <locale>
#include <cmath>
#include <iomanip>
#include <fstream>

double Ptrik (double a);

using namespace std;
int main()
{
    int N;
    double a;

    ifstream sk("duom.txt");
    sk >> N;

    ofstream rez ("rez.txt");

    for (int i = 1; i <= N; i++)
    {
      sk >> a;
      rez <<fixed<< setprecision (0)<< a <<" "<< fixed << setprecision (2) << Ptrik (a) <<endl;
    }
    return 0;
}
double Ptrik (double a)
{
    return a * 3;
}
