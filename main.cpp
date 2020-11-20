#include <iostream>

using namespace std;

double my_pow(double a, unsigned int b)
{
    if(b == 0)
    {
       return 1;
    }
    if(b % 2 == 0)
    {
       return my_pow(a * a, b / 2);
    }
       return a * my_pow(a, b - 1);
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
