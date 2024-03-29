// write a program that prints all prime numbers between 1 and 100 with erathostenes sieve

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 100;
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i] && (long long)i * i <= n) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    for (int i = 0; i <= n; i++)
        if (is_prime[i])
            cout << i << " ";
    return 0;
}