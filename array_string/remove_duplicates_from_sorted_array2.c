int removeDuplicates(int* nums, int numsSize) {
    int r = 0; /* reading index */
    int i = 1; /* offset */
    int w = 0; /* writing index */

    while (r < numsSize) {
        i = 1;
        while (r + i + 1 < numsSize && nums[r + i + 1] == nums[r])
            i++;
        nums[w] = nums[r];
        w++;
        r += i;
    }
    return (w);
}
