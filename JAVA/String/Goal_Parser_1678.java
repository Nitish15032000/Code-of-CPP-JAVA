public class Goal_Parser_1678 {
    public static void main(String[] args) {
        String str = "G()(al)";
        String ans = interpret(str);
        String result = interpret1(str);
        String res = interpret2(str);

        System.out.println(ans);
        System.out.println(result);
        System.out.println(res);
    }

    public static String interpret(String command) {
        String code = "";
        String Goal_Parser = "";

        for (int i = 0; i < command.length(); i++) {
            code += command.charAt(i);
            if (code.equals("G")) {
                Goal_Parser += "G";
                code = "";
            }
            if (code.equals("()")) {
                Goal_Parser += "o";
                code = "";
            }
            if (code.equals("(al)")) {
                Goal_Parser += "al";
                code = "";
            }
        }
        return Goal_Parser;
    }

    // second method to solve this by using StringBuilder.
    public static String interpret1(String command) {
        String code = "";
        StringBuilder Goal_Parser = new StringBuilder();

        for (int i = 0; i < command.length(); i++) {
            code += command.charAt(i);
            if (code.equals("G")) {
                Goal_Parser.append("G");
                code = "";
            } else if (code.equals("()")) {
                Goal_Parser.append("o");
                code = "";
            } else if (code.equals("(al)")) {
                Goal_Parser.append("al");
                code = "";
            }
        }
        return Goal_Parser.toString();
    }

    public static String interpret2(String command) {
        StringBuilder ans = new StringBuilder();
        for (int i = 0; i < command.length(); i++) {
            if (command.charAt(i) == 'G') {
                ans.append("G");
            } else if (command.charAt(i) == '(' && command.charAt(i + 1) == ')' && i + 1 < command.length()) {
                ans.append("o");
                i++;
            } else if (command.charAt(i) == '(' && command.charAt(i+1) == 'a' && i + 3 < command.length()) {
                ans.append("al");
                i = i + 3;
            }
        }

        return ans.toString();
    }

}
