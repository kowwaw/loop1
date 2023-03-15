#include <iostream>

using namespace std;

int main()
{
    long long n, k;
    long long  x = 0;
    cin >> n;
    while(n){
        k = n % 10;
        x = x*10  +k;
        n /= 10;
    }
    cout << x;
    return 0;
}