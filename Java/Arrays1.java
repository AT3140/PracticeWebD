import java.util.Arrays;
class Arrays1 {
    public static void main(String[] Args){
        // initialization
        int[] a = new int[4];
        int b[] = new int[4];
        a[0] = 1; // rest are by default 0
        b[0] = 1;
        int c[] = {4,5,2,3};
        for(int i=0;i<4;i++){
            System.out.print(a[i] + " " + b[i] + " " + c[i] + "\n");
        }

        // find
        System.out.println(Arrays.binarySearch(a, 1));  // seems erroneous


    }
}
