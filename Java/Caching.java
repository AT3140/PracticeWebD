/*
 * For Integer objects, Java keeps a cache for values between -128 and 127.
 * For values outside of this range, new Integer objects are created.
 */

public class Caching {
    public static void main(String[] args) {
        
        // Autoboxing Cache
        // same primitive values always evaluate to true
        int x=400, y=400;
        System.out.println(x == y);
        
        Integer X=400, Y=400;
        System.out.println(X == Y); // == makes deep comparison
        
        Integer X1=127, Y1=127;
        System.out.println(X1 == Y1); // but Integer values in [-128, 127] are cached hence evaluated as same

        // String Pooling
        String s1 = "hello";
        String s2 = "hello";
        String s3 = new String("hello");
        System.out.println(s1==s2); // evaluates to true
        System.out.println(s1==s3); // evaluates to false
        System.out.println(s1.equals(s3)); // evaluates to true
        System.out.println("s1[0]: " + s1.charAt(0) + " s2[0]: " + s2.charAt(0));

    }
}
