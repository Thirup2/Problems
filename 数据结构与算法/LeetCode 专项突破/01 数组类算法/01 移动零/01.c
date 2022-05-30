void moveZeroes(int *nums, int numsSize)
{
    int i = 0;
    int j = 0;
    int count = 0;
    while (i < numsSize) {
        if (nums[i] != 0) {
            nums[j] = nums[i];
            ++i;
            ++j;
            ++count;
        } else {
            ++i;
        }
    }
    for (int m = count; m < numsSize; ++m) {
        nums[m] = 0;
    }
}