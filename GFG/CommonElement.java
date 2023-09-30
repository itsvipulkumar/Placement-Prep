import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Set;
import java.util.stream.IntStream;

class CommonElement {
    public static void main(String[] args) {

        // using array

        // int A[] = new int[] { 1, 5, 10, 20, 40, 80 };
        // int B[] = new int[] { 6, 7, 20, 80, 100 };
        // int C[] = new int[] { 3, 4, 15, 20, 30, 70, 80, 120 };
        // // int[] array = new int[4];
        // ArrayList<Integer> list= new ArrayList<>();

        // for (int i = 0; i < A.length; i++) {

        // int a=A[i];
        // boolean res1 = IntStream.of(B).anyMatch(x -> x == a);
        // boolean res2 = IntStream.of(C).anyMatch(x -> x == a);
        // System.out.println(res1+" "+a);
        // System.out.println(res2+" "+a);

        // if(res1 && res2)
        // {
        // list.add(a);
        // }
        // }
        // System.out.println(list);

        // using ArrayList
        List<Integer> l1 = List.of(1, 5, 10, 20, 40, 80);
        ArrayList<Integer> A = new ArrayList<>(l1);
        List<Integer> l2 = List.of(6, 7, 20, 80, 100);
        ArrayList<Integer> B = new ArrayList<>(l2);
        List<Integer> l3 = List.of(3, 4, 15, 20, 30, 70, 80, 120);
        ArrayList<Integer> C = new ArrayList<>(l3);

        ArrayList<Integer> list = new ArrayList<>();

        Set<Integer> st = new HashSet<>(A);

        for (Integer i : st)

        {
            int a = i;
            boolean ans1 = B.contains(a);
            boolean ans2 = C.contains(a);
            if (ans1 && ans2) {
                list.add(a);
            }
        }

      Collections.sort(list);
        System.out.println(list);
    }
}