long int reverse(long int x)
{
    long int rev=0;
    if(x<INT_MIN || x>INT_MAX) return 0;
    while(x!=0)
    {
        rev=(rev*10)+(x%10);
        x/=10;
    }
    if(rev<INT_MIN || rev>INT_MAX) return 0;
    return rev;   
}