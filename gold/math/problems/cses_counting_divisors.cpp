#include <bits/stdc++.h>
using namespace std;

vector<int> factor(int n) {
    vector<int> ret;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            ret.push_back(i);
            n /= i;
        }
    }
    if (n > 1) { ret.push_back(n); }
    return ret;
}

int main()
{
    #if ONLINE_JUDGE
        ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	#endif

    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int> factors = factor(n);
        
        map<int, int> freq_factors;

        for (int num: factors) {
            freq_factors[num]++;
        }
        
        int ans = 1;
        for (auto const& pair: freq_factors) {
            ans *= (pair.second + 1);
        }

        cout << ans << endl;

    }

}