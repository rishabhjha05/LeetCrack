class Solution {
public:
    bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
int minSteps(int n)
{
    int count = 0, hcf, i = 2;
    while (n >1)
    {
        if (isPrime(n))
        {
            count += n;
            break;
        }
        while (n % i != 0 && i<=sqrt(n) )
            i++;
        hcf = n / i;
        count += n / hcf;
        n = hcf;
        i = 2;
    }
    return count;
}
};