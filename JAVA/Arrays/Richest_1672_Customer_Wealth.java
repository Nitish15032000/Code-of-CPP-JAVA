// 4.[Richest Customer Wealth]
// (https://leetcode.com/problems/richest-customer-wealth/)

public class Richest_1672_Customer_Wealth {
    public static void main(String[] args) {
        int[][] arr = {{5,4,7},{4,5,7,4},{5,584,54,7,5}};

        int ans = maximumWealth(arr);
        System.out.println(ans);
    }

    public static int maximumWealth(int[][] accounts) {
        int maximumWealth = 0;
        for(int i = 0; i<accounts.length; i++){
            int wealth = 0;
            for(int j=0;j<accounts[i].length;j++){
                wealth += accounts[i][j];     
            }
            maximumWealth = Math.max(maximumWealth,wealth);
                     // or
            // if (maximumWealth < wealth) {
            //     maximumWealth = wealth;
            // }
        }
        return maximumWealth;
    }
}
