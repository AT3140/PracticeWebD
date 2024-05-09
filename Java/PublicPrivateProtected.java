/*
 * References :
 * [1] https://docs.oracle.com/javase/specs/jls/se9/html/jls-7.html#jls-7.6 - import java.util.Vector vs import java.util.* (ex)
 * [2] https://www.geeksforgeeks.org/packages-in-java/ - Packages and Subpackages
 * 
 * Package is a file in java, packages may contain subpackage
 *  - java.lang is automatically imported
 * Subpackages
 *  - not imported by default
 *  - no access privileges
 */
import java.util.Scanner;

class Solution {
    int a;
    int b;
    int result;
    int result1;
    public void add(){
        result = a + b;
        this.result1 = a + b;
    }
}

// any theory related to keeping this class name same as the package name?
class PublicPrivateProtected {
    public static void main(String[] args) {
        Solution sol = new Solution();
        sol.a = 2;
        sol.b = 3;
        sol.add();
        System.out.println("result: " + sol.result);
        System.out.println("result1: " + sol.result1);
        
        Solution1 sol1 = new Solution1();
        sol1.a = 2;
        sol1.b = 3;
        sol1.add();
        System.out.println("result: " + sol1.result);
        System.out.println("result1: " + sol1.result1);

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a: "); sol.a = sc.nextInt();
        System.out.print("Enter b: "); sol.b = sc.nextInt();
        sol.add();
        System.out.println("result: " + sol.result);
        System.out.print("Enter text: ");        

        sc.nextLine(); // absorb garbage if int, float or related primitive types were taken before
        
        String s = sc.nextLine();
        System.out.print(s);
        sc.close();
    }
}

// class can be declared even after first call
class Solution1 {
    int a;
    int b;
    int result;
    int result1;
    public void add(){
        result = a + b;
        this.result1 = a + b;
    }
}