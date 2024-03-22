/**
 * 3. [Running Sum of 1d Array]
 * (https://leetcode.com/problems/running-sum-of-1d-array/)
 * Running_1480_Sumof_1d_Array
 */
import java.util.*;
public class Running_1480_Sumof_1d_Array {
    public static void main(String[] args) {
        int[] arr = {1,8,7,5,4,8,7,10};
        int[] ans = runningSum(arr);
        System.out.println(Arrays.toString(ans));

    }

    public static int[] runningSum(int[] nums) {
        // update the privious array
        for (int i = 1; i < nums.length; i++) {
            nums[i] = nums[i - 1] + nums[i];
        }
        return nums;
    }
}