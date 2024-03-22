// 1. [Build Array from Permutation]
// (https://leetcode.com/problems/build-array-from-permutation/)
            // arr[i] = nums[nums[i]];

import java.util.*;
public class Array_1920_permutation {
    public static void main(String[] args) {
        int[] nums = {0,1,2,4,3,5};
        System.out.println(Arrays.toString(buildArray(nums)));

    }

    public static int[] buildArray(int[] nums) {
        // new Array where we have to store the value of each indices.
        int arr[] = new int[nums.length];

        for(int i=0; i<arr.length; i++){
            arr[i] = nums[nums[i]];
        }
        return arr;
    }

}
