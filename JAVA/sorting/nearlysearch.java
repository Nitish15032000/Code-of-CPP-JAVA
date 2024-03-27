/**
 * nearlysearch
 */
public class nearlysearch {

   public static void main(String[] args) {
      int arr[] = { 2, 5, 9, 9, 9, 15, 20 };
      int target = 9;
      int ans = BinarySearch(arr, target);
      System.out.println(ans);
   }

   static int BinarySearch(int[] arr, int target) {
      int start = 0;
      int end = arr.length - 1;
      int ans = -1;
      while (start <= end) {
         int mid = start + (end - start) / 2;
         if (arr[mid] == target) {
            ans = mid;
            end = mid;
         }
         if (arr[mid] > target) {
            start = mid + 1;
         } else {
            end = mid - 1;
         }

      }
      return ans;
   }
}