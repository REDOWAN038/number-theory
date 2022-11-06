#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll sz1 = 100005;

bool isPrime[sz1];
vector <ll> primes;

void sieve()
{
    for (ll i = 3; i * i < sz1; i += 2)
    {
        if (!isPrime[i])
        {
            for (ll j = i * i; j < sz1; j += i)
            {
                isPrime[j] = true;
            }
        }
    }

    primes.push_back(2);

    for (ll i = 3; i < sz1; i += 2)
    {
        if (!isPrime[i])
            primes.push_back(i);
    }
}

void segSieve(ll l, ll r)
{
    ll sz = r - l + 1;
    bool is_prime[sz];

    for (ll i = 0; i < sz; i++)
        is_prime[i] = true;

    if (l == 1)
        is_prime[0] = false;

    for (ll i = 0; primes[i]*primes[i] <= r; i++)
    {
        ll curr = primes[i];
        ll lm = (l / curr) * curr;

        if (lm < l)
            lm += curr;

        for (ll j = lm; j <= r; j += curr)
        {
            is_prime[j - l] = false;
        }

        if (lm == curr)
            is_prime[lm - l] = true;
    }


    for (ll i = 0; i < sz; i++)
    {
        if (is_prime[i])
        {
            cout << (i + l) << " ";
        }
    }

    cout << endl;
}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    ll t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        segSieve(l, r);
    }

    return 0;
}
