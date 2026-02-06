import java.util.HashMap;

public class Hashmap {
    public static void main(String[] args) {

        // Create a HashMap
        HashMap<String, Integer> map = new HashMap<>();

        // Add key-value pairs
        map.put("Apple", 10);
        map.put("Banana", 5);
        map.put("Orange", 8);

        // Get a value using key
        System.out.println(map.get("Apple")); // 10

        // Loop through HashMap
        for (String key : map.keySet()) {
            System.out.println(key + " : " + map.get(key));
        }
    }
}

