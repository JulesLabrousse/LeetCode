#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))

bool canJump(int* nums, int numsSize) {
    int mRI = 0; /* maxReachIndex */
    for (int i = 0; i < numsSize && i <= mRI; i++)
        mRI = MAX(mRI, i + nums[i]);
    return (mRI >= numsSize - 1);
}
