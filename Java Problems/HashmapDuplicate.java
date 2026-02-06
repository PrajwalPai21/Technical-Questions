import java.util.HashMap;

public class HashmapDuplicate {
    public static void main(String[] args) {

        int[] arr = {1, 2, 3, 2, 4, 1, 5,5,3,2,1,1,2,3,4,20};

        HashMap<Integer, Integer> map = new HashMap<>();

        // Count frequency
        for (int num : arr) {
            map.put(num, map.getOrDefault(num, 0) + 1);
        }

        // Print duplicates
        for (int key : map.keySet()) {
            if (map.get(key) > 1) {
                System.out.println(key + " is duplicate");
            }
        }
    }
}

