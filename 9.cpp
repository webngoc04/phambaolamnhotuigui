#include <iostream>
using namespace std;

int main()
{
    int N; 
    cin >> N; 
    int handshakes = 0;
    for (int i = 1; i < N; i++) 
    {
        handshakes += (N - i); 
    }
    cout << handshakes << endl; 
    return 0;
}
