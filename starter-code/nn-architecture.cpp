#include <bits/stdc++.h>
using namespace std;

using ll = double;
using vi = vector<ll>;
using vvi = vector<vi>;

ll relu(ll x) {
    return x > 0 ? x : 0;
}

ll drelu(ll x) {
    return x > 0 ? 1 : 0;
}

ll sigmoid(ll x) {
    return 1.0 / (1.0 + pow(M_E, x));
}

ll dsigmoid(ll x) {
    return sigmoid(x) * (1 - sigmoid(x));
}

ll cost(ll y, ll yt) {
    return (y - yt) * (y - yt);
}

ll dcost(ll y, ll yt) {
    return 2 * (y - yt);
}

vi mult(vvi &a, vi &x) {
    ll n = a.size();
    ll m = x.size();

    vi res(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            res[i] += a[i][j] * x[j];
        }
    }
    return res;
}



int main() {

}