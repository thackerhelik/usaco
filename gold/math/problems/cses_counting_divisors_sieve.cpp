#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e6;
int max_div[MAX_N + 1]; // contains the largest prime that goes into i

int main()
{
    #if ONLINE_JUDGE
        ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	#endif

    //SIEVE
    for (int i = 2; i <= MAX_N; ++i)
    {
        if (max_div[i] == 0)
        {
            for (int j = i; j <= MAX_N; j += i) {
                max_div[j] = i;
            }
        }
    }

    int n, t;
    cin >> t;

    while(t--) {
        cin >> n;
        int div_num = 1;
        while (n != 1) {
            int prime = max_div[n];
            int count = 0;
            while (n % prime == 0)
            {
                count++;
                n /= prime;
            }
            div_num *= (count + 1);
        }
        cout << div_num << endl;
    }
}