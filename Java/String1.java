/**
 * String1
 */
public class String1 {
    public static void main(String[] args) {
        // Initialization
        char[] arr = {'h', 'e', 'l', 'l', 'o'};
        String s = new String(arr); // using char array
        String s1 = new String("hello"); // using string literal
        String s2 = "hello";
        StringBuffer s3 = new StringBuffer("hello");
        System.out.println(s);
        System.out.println(s1);

        // Comparison
        System.out.println("Comparison: ");
        System.out.println(s1 == s2);
        System.out.println(s1.equals(s2)); // compares String value
        System.out.println(s1.contentEquals(s3)); // compares StringBuffer
        System.out.println(s1.compareTo(s2));
        System.out.println(s1.compareToIgnoreCase(s2));

        // pattern matching
        System.out.println("Pattern Matching: ");
        System.out.println(s1.endsWith("ello"));
        System.out.println(s1.contains(s2));

        // string manipulation
        System.out.println("String Manipulation: ");
        System.out.println(s1.length());
        s1 = s1.concat(s2); // concatenate
        System.out.println(s1);
        // s1 = s1.reverse()
    }
}