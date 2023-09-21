// package CodeStudio;

public class PalindromeString {
    public static void main(String args[])
    {
String str="&T?&-*+%$* !!+-= &-@$?+#++";
		StringBuilder s=new StringBuilder();
          str=str.toLowerCase();
		for(int i=0;i<str.length();i++)
		{
           if(Character.isLetter(str.charAt(i)) || Character.isDigit(str.charAt(i)))
		   {
			   s.append(str.charAt(i));
		   }
		}
	 
	 int n=s.length()-1;
	 StringBuilder newS=new StringBuilder();



    //  System.out.println(s);
	 for(int i=s.length()-1;i>=0;i--)
	 {
           
        // System.out.println(s.charAt(i));
		  newS.append(s.charAt(i));
	 }
	 
     System.out.println(newS);
     System.out.println(s);
    if(newS.toString().equals(s.toString()))
     System.out.println("Yes");
     else
System.out.println("no");
	
    }
    
    
}
