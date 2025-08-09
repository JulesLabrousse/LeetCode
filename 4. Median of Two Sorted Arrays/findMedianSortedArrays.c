#include <stdlib.h>
#include <stdio.h>

int *mergeSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int *res = (int *)malloc(sizeof(int) * (nums1Size + nums2Size));
    if (res == NULL)
        return (NULL);
    int i = 0;
    int j = 0;
    int k = 0;
    while ((i < nums1Size) && (j < nums2Size))
    {
        if (nums1[i] <= nums2[j])
            res[k++] = nums1[i++];
        else
            res[k++] = nums2[j++];
    }
    while (i < nums1Size)
        res[k++] = nums1[i++];
    while (j < nums2Size)
        res[k++] = nums2[j++];
    return (res);
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    double res = 0.0;
    int numsSize = nums1Size + nums2Size;
    if (numsSize == 0)
        return (res);
    int *sortedArray = mergeSortedArrays(nums1, nums1Size, nums2, nums2Size);
    
    if (numsSize % 2 == 0)
        return ((double)(sortedArray[numsSize / 2] + sortedArray[(numsSize / 2) - 1]) / 2);
    else
        return ((double)sortedArray[numsSize / 2]);
}

int main(void)
{
    int nums1[] = {1, 2};
    int nums2[] = {3, 4};
    double res = findMedianSortedArrays(nums1, 2, nums2, 2);

    printf("%f\n", res);
    return (0);
}