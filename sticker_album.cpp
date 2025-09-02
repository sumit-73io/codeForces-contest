#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b;
    cin>>n>>a>>b;

    vector<double> Syn(n+1,0.0);

    for (int x=1;x<=n;x++) {
	    int L = b - a + 1;

        if (a == 0) {
            double sum = 0.0;
            for (int i=1;i<=b;i++) {
                int rem = max(0, x-i);
                sum += Syn[rem];
            }
            Syn[x] = (double)L/(L-1) * (1.0 + sum / L);
        } else {
            double sum = 0.0;
            for (int i=a; i<=b; i++) {
                int rem = max(0, x-i);
                sum =sum+Syn[rem];
            }
            Syn[x] = 1.0 + sum / L;
        }
    }

    cout << fixed << setprecision(5) << Syn[n] << endl;
    return 0;
}