int removeDuplicates(int* nums, int numsSize) {
    int r = 0;
    int i = 1;
    int w = 0;

    while (r < numsSize) {
        i = 1;
        while (r + i < numsSize && nums[r + i] == nums[r])
            i++;
        nums[w] = nums[r];
        w++;
        r += i;
    }
    return (w);
}
