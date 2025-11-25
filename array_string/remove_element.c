int removeElement(int* nums, int numsSize, int val) {
	int r = 0; /* reading index */
    int w = 0; /* writing index */
    
	while (r < numsSize) {
        if (nums[r] != val) {
            nums[w] = nums[r];
            w++;
        }
        r++;
    }
    return (w);
}
