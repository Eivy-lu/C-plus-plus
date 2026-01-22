#include <bits/stdc++.h>

int Calc(int a, int b, int op);

using namespace std;
int main()
{
    int a;
    int b;
    int N;
    int op;

    ifstream sk ("Duom.txt");

    ofstream rez ("rez.txt");

    for (int i = 1; i <= 3; i++)
    {
        sk >> a >> b >> op;
        rez << Calc(a, b, op) <<endl;
    }

    return 0;
}
int Calc(int a, int b, int op)
{
    int suma;
    int skirtumas;
    int daugyba;
    int dalyba;
    int liekana;

    if (op == 1)
    {
        return suma = a + b;
    }
    else if (op == 2)
    {
        return skirtumas = a - b;
    }
    else if (op == 3)
    {
        return daugyba = a * b;
    }
    else if (op == 4)
    {
        return dalyba = a / b;
    }
    else if (op == 5)
    {
        return liekana = a % b;
    }
}

