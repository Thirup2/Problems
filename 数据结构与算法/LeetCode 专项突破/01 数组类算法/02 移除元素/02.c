int removeElement(int *nums, int numsSize, int val)
{
    int i = 0, j = 0;
    int count = 0;
    while (j < numsSize) {
        if (nums[j] == val) {
            ++j;
        } else {
            nums[i] = nums[j];
            ++i; ++j;
            ++count;
        }
    }
    return count;
}