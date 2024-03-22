// 2. [Concatenation of Array]
// (https://leetcode.com/problems/concatenation-of-array/)

import java.util.Arrays;
public class Concatenation_1929_of_Array {
    public static void main(String[] args) {
        int[] nums = { 0, 1, 2, 4, 3, 5 };
        System.out.println(Arrays.toString(buildArray(nums)));

        System.out.println(Arrays.toString(getConcatenation(nums)));

    }

    // easy to understand
    static int[] buildArray(int[] nums) {
        int n = nums.length;
        int[] ans = new int[2 * n];

        for (int i = 0; i < nums.length; i++) {
            ans[i] = nums[i];
            ans[i + n] = nums[i];
        }
        return ans;
    }

    // it is for 100% beats in code
    static int[] getConcatenation(int[] nums) {
        int output[] = new int[nums.length + nums.length];

        System.arraycopy(nums, 0, output, 0, nums.length);
        System.arraycopy(nums, 0, output, nums.length, nums.length);

        return output;
    }
}
