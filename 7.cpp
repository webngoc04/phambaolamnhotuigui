#include <iostream>
using namespace std;

const int MOD = 1000000007;

int main() {
    int n;
    cin >> n;

    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        long long cube = (long long)i * i * i;
        sum = (sum + cube) % MOD;
    }

    cout<< sum << endl;

    return 0;
