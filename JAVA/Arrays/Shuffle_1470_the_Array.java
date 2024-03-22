// 5. [Shuffle the Array]
// (https://leetcode.com/problems/shuffle-the-array/)

import java.util.Arrays;

public class Shuffle_1470_the_Array {
    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 3, 2, 1 };
        int n = arr.length / 2;
        int[] ans = shuffle(arr, n);
        System.out.println(Arrays.toString(ans));
    }

    public static int[] shuffle(int[] nums, int n) {
        int ans[] = new int[2 * n];
        int j = 0;
        for (int i = 0; i < n; i++) {
            ans[j] = nums[i];
            j += 2;
        }
        int k = 1;
        for (int i = n; i < 2 * n; i++) {
            ans[k] = nums[i];
            k += 2;
        }
        return ans;
    }
    // public static int[] shuffle(int[] nums, int n) {
    // // System.out.println(n);
    // int size = 2*n;
    // // System.out.println("size : "+size);
    // int[] ans = new int[size];

    // int j = 0;
    // int k = 1;
    // for(int i = 0; i < size;i++){
    // // if(i<n){
    // // ans[j]=nums[i];
    // // j+=2;
    // // }
    // if(i>n){
    // ans[k]=nums[n-1];
    // k+=2;
    // n++;
    // }
    // }
    // return ans;
    // }
}
