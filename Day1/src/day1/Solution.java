package day1;

import java.util.Scanner;

/* Declare second integer, double, and String variables. */

/* Read and save an integer, double, and String to your variables.*/
// Note: If you have trouble reading the entire String, please go back and review the Tutorial closely.

/* Print the sum of both integer variables on a new line. */

/* Print the sum of the double variables on a new line. */

/* Concatenate and print the String variables on a new line; 
	the 's' variable above should be printed first. */

public class Solution {

	private static String s;

	public static void main(String[] args) {

    try (Scanner scan = new Scanner(System.in)) {
		double d2 = scan.nextDouble();
		String s2 =scan.next() + scan.nextLine();
		int i2 = scan.nextInt();
		int i = 0;
		int sum = i + i2;
		double d = 0;
		double sumd = d + d2;
		s = null;
		String con = s.concat(s2);
		System.out.println(sum);
		System.out.printf("%.1f \n",sumd);
		System.out.println(con);
	}catch(Exception e){
	  System.out.println(e.getMessage());
    }

	}

}
