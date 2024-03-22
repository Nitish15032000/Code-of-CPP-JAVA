/**
 * - [Robot Return to
 * Origin](https://leetcode.com/problems/robot-return-to-origin/)
 * 
 * The given code defines a method judgeCircle that takes a string of moves (L,
 * R, U, D) and determines if the cumulative horizontal and vertical movements
 * sum to zero, indicating a circular path. It returns true if the path forms a
 * circle, otherwise false.
 */
public class Robot_657_Return_to_Origin {
    public static void main(String[] args) {
        String moves = "LUD";
        boolean ans = judgeCircle(moves);
        System.out.println(ans);
    }

    public static boolean judgeCircle(String moves) {
        int sumLR = 0;
        int sumUD = 0;
        for (int i = 0; i < moves.length(); i++) {
            switch (moves.charAt(i)) {
                case 'L':
                    sumLR++;
                    break;
                case 'R':
                    sumLR--;
                    break;
                case 'U':
                    sumUD++;
                    break;
                case 'D':
                    sumUD--;
                    break;
                default:
                    return false;
            }
        }

        // if (sumLR == 0 && sumUD == 0) {
        // return true;
        // }

        // or

        return sumLR == 0 && sumUD == 0;
    }
}