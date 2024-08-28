bool isPalindrome(int x)
{
    if((x<0) || (x%10==0 && x!=0))
    return false;
    int a=x;
    unsigned rev=0;
    while(a!=0)
    {
        rev=(rev*10)+(a%10);
        a=a/10;
    }
    return rev==x;
}