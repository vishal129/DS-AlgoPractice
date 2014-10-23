/*
 * Given an array of integers, every element appears twice except for one. Find that single one.
 **/
class Solution {
public:
    int singleNumber(int A[], int n) {
        if(n%2 == 0)
            return -1;
        int temp = 0;
        for(int i = 0; i < n; ++i)
        {
            temp ^= A[i];
        }
        return temp;
    }
};
