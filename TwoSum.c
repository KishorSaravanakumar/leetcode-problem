/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *returnArr=malloc(2 * sizeof(int));
    returnArr[0]=1;
    returnArr[1]=1;
    for(int i=0;i<numsSize;++i)
    {
        for(int j=i+1;j<numsSize;++j)
        {
            if(nums[i]+nums[j]==target)
            {
                *returnSize=2;
                returnArr[0]=i;
                returnArr[1]=j;
                return returnArr;
            }
        }
    }
    *returnSize=0;
    return 0;
    
}