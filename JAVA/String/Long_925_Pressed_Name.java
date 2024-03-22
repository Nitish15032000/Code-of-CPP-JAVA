// - [Long Pressed Name]
// (https://leetcode.com/problems/long-pressed-name/)

import java.util.Scanner;

public class Long_925_Pressed_Name {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the real name : ");
        String name = in.nextLine();

        System.out.println("Enter the press word : ");
        String typed = in.nextLine();

        boolean ans = isLongPressedName(name,typed);

        System.out.println(ans);
    }

    public static boolean isLongPressedName(String name, String typed) {
        int i = 0;
        int j = 0;
        //  chek via first index and length of String
        if (name.charAt(0) != typed.charAt(0))
            return false;
        if (name.length() > typed.length()) {
            return false;
        }

        // check via index of all of name.length()
        while (i < name.length() && j < typed.length()) {
            if (name.charAt(i) == typed.charAt(j)) {
                i++;
                j++;
            } else if (name.charAt(i - 1) == typed.charAt(j)) {
                j++;
            } else {
                return false;
            }
        }

        // check via index of typed.length()
        while (j < typed.length()) { // Step 4 & 5
            if (name.charAt(i - 1) == typed.charAt(j)) {
                j++;
            } else {
                return false;
            }
        }
        if (i < name.length()) { // step 6
            return false;
        }
        return true;
    }
}
