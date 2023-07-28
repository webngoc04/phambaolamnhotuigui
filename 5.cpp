#include <iostream>

using namespace std;

int main() {
  long long a, b, sum_odd = 0, sum_even = 0;
  cin >> a >> b;

  for (int i = a + 1; i < b; i++) {
    if (i % 2 == 1) {
      sum_odd += i;
    } else {
      sum_even += i;
    }
  }

  cout << sum_odd << endl;
  cout << sum_even << endl;

  return 0;
}
