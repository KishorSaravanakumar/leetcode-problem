int searchInsert(int* nums, int numsSize, int target) {
    if(target>nums[numsSize-1]) return numsSize;
    int i;
    for(i=0;i<numsSize;i++)
    {
       if(nums[i]>=target) return i;
       
    }
    return numsSize;
}