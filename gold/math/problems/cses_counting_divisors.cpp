#include <bits/stdc++.h>
using namespace std;

int factor(int n) {
    int ans = 1;
    for (int i = 2; i * i <= n; ++i) {
        int ct = 0;
        while (n % i == 0) {
            ct++;
            n /= i;
        }
        ans = ans * (ct + 1);
    }
    if (n > 1) { ans = ans * 2; }
    return ans;
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
        cout << factor(n) << endl;
    }

}