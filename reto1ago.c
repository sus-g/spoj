#include<stdio.h>

// Recursive function to return gcd of a and b
long long int gcd(long long int a, long long int b)
{
    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

// Function to return LCM of two numbers
long long int lcm(long long int a, long long int b)
{
    return (a*b)/gcd(a, b);
}
int main()
{
    long long int a,b,c,l1,l2;
    scanf("%lld%lld%lld",&a,&b,&c);
    l1 = lcm(a,b);
    l2 = lcm(l1,c);
    printf("%lld",l2);
    return 0;
}
