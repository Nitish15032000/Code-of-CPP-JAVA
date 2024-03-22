/**
 * 1Defanging_1108_an_IP_Address
 */
public class Defanging_1108_an_IP_Address {

    public static void main(String[] args) {
        String str = "111.152.241.01.0";
        String ans = defangIPaddr(str);
        System.out.println(ans);

    }

    public static String defangIPaddr(String address) {
        String str = "";
        for(int i = 0; i<address.length(); i++){
            if(address.charAt(i) == '.'){
                str += "[.]";

            }else{

            str += address.charAt(i);
            }
        }
        return str;
    }
}