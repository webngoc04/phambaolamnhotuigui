#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; 
    int S = 0; 
    for (int i = 1; i <= n; i++) 
    {
        S += i * i *i *i; 
    }
    cout << S << endl; 
    return 0;
}
