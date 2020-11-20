#include <iostream>

using namespace std;

double my_pow(double a, unsigned int b)
{
    double pow = a;
    for (int i = 1; i < b; i++)
    {
        a *= pow;
    }
    return a;
}

int main()
{
    double a, res;
    int b;
    cout << "Enter your number -> ";
    cin >> a;
    cout << "Enter positive power -> ";
    cin >> b;
    while (b <= 0)
    {
        cout << "POSITIVE power! >: \n";
        cout << "Fine. Try again -> ";
        cin >> b;
    }
    res = my_pow(a,b);
    cout << "Result is -> " << res << endl;
    return 0;
}
