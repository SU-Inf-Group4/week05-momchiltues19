#include <iostream>

using namespace std;

int gcd(int, int);
int lcm(int, int);

int main()
{
    int number = 0;

    cout << "Enter a 5-digit number: ";
    cin >> number;

    int middleDigit = (number / 100) % 10;
    int firstDigit = number / 10000;
    int secondDigit = (number / 1000) % 10;
    int fourthDigit = (number / 10) % 10;
    int lastDigit = number % 10;

    if (middleDigit % 2 == 0)
    {
        cout << boolalpha << ((lastDigit + fourthDigit) % gcd(firstDigit, secondDigit) == 0) << endl;
    }
    else
    {
        cout << boolalpha << ((secondDigit * middleDigit) % lcm(firstDigit, lastDigit) == 0) << endl;
    }

    return 0;
}

int gcd(int n, int m)
{  
    int result = 0;
    for(int i = 1; i <= n && i <= m; i++)
    {
        if(n % i == 0 && m % i == 0)
        {
            result = i;
        }
    }
    return result;
}

int lcm(int n, int m)
{
    int result = 0;
    for(int i = n * m; i >= n && i >= m; i--)
    {
        if(i % n == 0 && i % m == 0)
        {
            result = i;
        }
    }
    return result;
}
