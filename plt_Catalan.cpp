#include <iostream>
#include <string>
using namespace std;

long long factorial(int n)
{
    long long res = 1;
    for (int i = 2; i <= n; i++)
        res *= i;
    return res;
}

long long Catalan(string val)
{
    int n = 0;
    for (char c : val)
        if (c == '+')
            n++; // '+' 개수 세기

    // 카탈란 수: Cn = (2n)! / ((n+1)! * n!)
    long long result = factorial(2 * n) / (factorial(n + 1) * factorial(n));
    return result;
}

int main()
{
    cout << "Mdec (Catalan Number) Function" << endl;
    string value;
    cin >> value;

    cout << "Catalan Result: " << Catalan(value) << endl;
}
