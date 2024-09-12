/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    if(digits[digitsSize-1]<9)
    {
        digits[digitsSize-1]=digits[digitsSize-1]+1;
        *returnSize=digitsSize;
        return digits;
    }
    int count=0;
    for(int i=digitsSize-1;i>=0;i--)
    {
        digits[i]++;
        if(digits[i]<10)
        {
            *returnSize=digitsSize;
            return digits;
        }
        else digits[i]=0;
    }
    
    int* result=(int*)malloc((digitsSize+1) * sizeof(int));
    *returnSize=digitsSize+1;
    result[0]=1;
    for(int i=0;i<digitsSize;i++)
    result[i+1]=digits[i];
    return result;   
}