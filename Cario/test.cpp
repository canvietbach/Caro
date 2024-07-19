#include <bits/stdc++.h> 
#define ll int
using namespace std;
char a[2000][2000];
ll uio, oiu;
int main()
{
    cin >> uio >> oiu;
    for(ll i = 1; i <= uio; i++)
    {
        for(ll j = 1; j <= oiu; j++) a[i][j] = '|';
    }
    for(ll i = uio; i > 0; i--)
    {
        ll n = i;
        ll j = 1;
        int ans_X = 0;
        int ans_O = 0;
        while(n <= uio)
        {

            a[n][j] = 'X';
            n++; j++;
        }
    }
    for(ll i = 2; i <= oiu; i++)
    {
        ll m = i;
        ll j = 1;
        int ans_X = 0;
        int ans_O = 0;
        while(j <= oiu)
        {
            a[j][m] = 'O';
            m++; j++;
        }
    }
    for(ll i = 1; i <= uio; i++)
    {
        for(ll j = 1; j <= oiu; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}
