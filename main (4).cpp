#include <iostream>
#include <cmath>
using namespace std;

double z(const double x);

int main()
{
    double pp, pk, y;
    int n;
    cout << "pp = "; cin >> pp;
    cout << "pk = "; cin >> pk;
    cout << "n = "; cin >> n;
    double dp = (pk - pp) / n;
    double p = pp;
    while (p <= pk)
    {
        y = z(p * p + 1) - z(p * p - 1) + 2 * z(p);
        cout << p << " " << y << endl;
        p += dp;
    }
    return 0;
}

double z(const double x)
{
    if (fabs(x) >= 1)
        return (sin(x) + 1) / (pow(cos(x), 2) + exp(x));
    else
    {
        double S = 1;
        double a = 1;
        for (int k = 1; k <= 6; k++)
        {
            a *= (2 * x) / k;
            S += a;
        }
        return S / exp(x * x);
    }
}

