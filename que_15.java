/*
Q15. Input a string from the user. Count occurrences (case insensitive) of
each alphabet in the string.
Sample output:
Input: Welcome to SunBeam.
Output:
A : 1
B : 1
C : 1
E : 3
L : 1
M : 2
N : 1
O : 2
S : 1
T : 1
U : 1
W : 1
*/

import java.util.*;
public class Main
{
    public static void countOccurances(String str){
        int[] freq = new int[26];
        for(int i=0; i<str.length(); i++){
            char c = str.charAt(i);
            if(c>='a' && c<='z')
                freq[c-'a']++;
            else if(c>='A' && c<='Z') 
                freq[c-'A']++;
        }
        
        System.out.println("Count of characters:\n");
        
        for(int i=0; i<26; i++){
            if(freq[i] != 0) 
                System.out.println((char)('A'+i) + " : " + freq[i]);
        }
    }
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    System.out.print("Enter a string: ");
	    String str = sc.nextLine();
	    countOccurances(str);
	}
}