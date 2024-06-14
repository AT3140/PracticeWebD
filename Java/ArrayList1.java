import java.util.ArrayList;
import java.util.Collections;

public class ArrayList1 {
    public static void main(String[] args) {
        // Initialize (create)
        ArrayList<Integer> al = new ArrayList<Integer>();
        // insert
        System.out.println("Insert");
        // at tail
        al.add(10);
        al.add(9);
        al.add(2);
        System.out.println(al);
        // at index
        al.add(1, 7);
        System.out.println(al);

        // read
        System.out.println("Read");
        System.out.println(al.get(0));

        // update
        System.out.println("Update");
        al.set(2, 8);

        // manipulation
        System.out.println("Manipulation");
        System.out.println(al.size());
        al.forEach((n) -> n = n*2); // no modification inplace
        System.out.println(al);
        Collections.reverse(al); // reverse
        System.out.println(al);
        Collections.sort(al); // sort
        System.out.println(al);

        // delete
        // at index
        System.out.println("Delete");
        al.remove(1); 
        System.out.println(al);
        // value
        Integer intObj = 9;
        al.remove(intObj); // at value
        System.out.println(al);
        // clear
        al.clear();
        System.out.println(al);
        System.out.println(al.isEmpty());

    }
}
