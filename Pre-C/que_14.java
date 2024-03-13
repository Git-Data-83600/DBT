/*
Q14 Write a java code to check if string is palindrome.
*/

import java.util.*;
public class Main
{
    public static boolean checkPalindrome(String str){
        int i=0, j=str.length()-1;
	    while(i<j){
	        if(str.charAt(i) != str.charAt(j)) return false;
	        i++;
	        j--;
	    }
	    return true;
    }
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    System.out.print("Enter a string: ");
	    String str = sc.nextLine();
	    if(checkPalindrome(str)) System.out.println("String is a palindrome");
	    else System.out.println("String is not a palindrome");
	}
}