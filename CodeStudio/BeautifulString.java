public class BeautifulString {
    public static void main(String args[]) {
        String str = "0000";
        StringBuilder s = new StringBuilder(str);

        for (int i = 0; i<s.length()-1; i++) {
            if (s.charAt(i) == '0') {
                if (s.charAt(i + 1) == '0') {
                    s=s.replace(i, i+1, "1");
                }
            }
            else if (s.charAt(i) == '1') {
                if (s.charAt(i + 1) == '1') {
                    s=s.replace(i, i+1, "0");
                }
            }
        }

        System.out.println(s);
    }
}
