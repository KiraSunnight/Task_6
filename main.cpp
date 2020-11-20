#include <iostream>

using namespace std;

double my_pow(double a, int b)
{
    double pow = a;
    if (b == 0)
        return 1;
    if (b > 0)
    {
        for (int i = 1; i < b; i++)
    {
        a *= pow;
    }
        return a;
    } else
    {
        b *= -1;
        for (int i = 1; i < b; i++)
        {
            a *= pow;
        }
        return 1/a;
    }
}

int main()
{
    double a, res;
    int b;
    cout << "Enter your number -> ";
    cin >> a;
    cout << "Enter positive power -> ";
    cin >> b;
    res = my_pow(a,b);
    cout << "Result is -> " << res << endl;
    return 0;
}
