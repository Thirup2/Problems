int removeDuplicates(int *nums, int numsSize)
{
    int i = 0, j = 1;
    for (; i + 1 < numsSize; i++) {
        if (nums[i] != nums[i + 1]) {
            nums[j] = nums[i + 1];
            j++;
        }
    }
    return (numsSize == 0) ? 0 : j;
}