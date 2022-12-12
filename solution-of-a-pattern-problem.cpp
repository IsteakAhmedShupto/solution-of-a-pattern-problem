// 1 + (2 + 3 * 4) + (5 + 6 * 7 + 8 * 9 * 10) + .... + nth term

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

ll count1 = 1;

ll patternSolve(ll count, ll n)
{
    ll sum = 0, mul = 1;
    // ll count = 1;

    for (ll i = 1; i <= n; i++)
    {
        mul = 1;
        for (ll j = 1; j <= i; j++)
        {
            mul *= count;
            count++;
        }
        sum += mul;
    }

    count1 = count;
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
        cout << patternSolve(count1, i) << "\n";
}
