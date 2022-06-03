int removeDuplicates(int *nums, int numsSize)
{
    int i = 1, j = 1, count = 1;
    for (; j < numsSize; j++) {
        if (nums[j] != nums[j - 1]) {
            count = 1;
            nums[i++] = nums[j];
        } else
            count++;
        if (count == 2)
            nums[i++] = nums[j];
    }
    return (numsSize == 0) ? 0 : i;
}