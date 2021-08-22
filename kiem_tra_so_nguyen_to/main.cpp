#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
    if (n < 2) {
        return false;
    } else {
        int count = 0;
        for (int i = 2; i <= sqrt(n); ++i) {
            if(n % i == 0) {
                count++;
            }
        }
        if (count == 0){
            return true;
        } else {
            return false;
        }
    }
}

int main()
{
	int n;
    cout << "nhap n: ";
    cin >> n;

    cout << isPrime(n);
    cout << endl;
    return 0;
}
