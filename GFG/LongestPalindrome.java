
public class LongestPalindrome {
    public static void main(String[] args) {
        // String S = "aaaabbaa";
        String S = "abc";

        StringBuilder sb = new StringBuilder(S);
        int max = -1;
        StringBuilder ans = new StringBuilder("");

        for (int i = 0; i < sb.length(); i++) {
            StringBuilder str = new StringBuilder();
            for (int j = i; j < sb.length(); j++) {

                char ch = sb.charAt(j);
                str.append(ch);
                StringBuilder a = new StringBuilder(str);
                a.reverse();
                if (a.toString().equals(str.toString())) {

                    if (str.length() > max) {
                        System.out.println(str.length());
                        ans = str;
                        max = str.length();
                        System.out.println("yes bada hai");
                    }
                }
            }
             System.out.println(ans.length());
            // ans.delete(0, ans.length());
        }
        System.out.println(ans);
    }
}
