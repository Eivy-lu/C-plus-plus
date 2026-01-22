#include <bits/stdc++.h>

using namespace std;

void skaiciavimas (int n, int &I, int &U, int &R);

int main()

{
    int n;
    int I;
    int U;
    int R;

    cin >> n;

    cout <<"--------------------"<<endl;
    cout <<setw(5)<<"I"<<setw(5)<<"U"<<setw(5)<<"R"<<endl;
    cout <<"--------------------"<<endl;

    for (int i = 0; i < n; i++)
    {
        cin>> I >> U >> R;
        skaiciavimas(n, I, U, R);

        cout <<setw(5)<<I<<setw(5)<<U<<setw(5)<<R<<endl;
    }
    cout <<"--------------------"<<endl;

    return 0;
}

void skaiciavimas (int n, int &I, int &U, int &R)
{

    if (I == 0)
    {
        I = U / R;
    }
    else if (U == 0)
    {
        U = I * R;
    }
    else if (R == 0)
    {
        R = U / I;
    }
}
