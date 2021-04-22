package day16;

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner inputScan = new Scanner(System.in);
        String str = inputScan.nextLine();
        //inputScan.close();
        try 
        {
           int aux = Integer.parseInt(str);
           System.out.println(aux);
        } catch (NumberFormatException e) 
        {
            System.out.println("Bad String");
        }
    }
}