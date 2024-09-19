int climbStairs(int n) {
    if(n<2) return n;
    int a[n+1];
    a[0]=1;
    a[1]=1;
    for(int i=2;i<n+1;i++)
    {
        a[i]=a[i-2]+a[i-1];
        a[i-2]=a[i-1];
        a[i-1]a[i];
    }
    return a[n];   
}