import java.io.*;
import java.util.*;
import java.util.stream.*;
import static java.util.stream.Collectors.toList;

class Result {

    /*
     * Complete the 'countSwaps' function below.
     *
     * The function accepts INTEGER_ARRAY a as parameter.
     */

    public static void countSwaps(List<Integer> a) {
        int swC = 0;
        int n = a.size();
        for (int i = 0; i < n; i++) {
    
            for (int j = 0; j < n - 1; j++) {
                // Swap adjacent elements if they are in decreasing order
                if (a.get(j) > a.get(j + 1)) {
                    int temp = a.get(j);
                    a.set(j,a.get(j+1));
                    a.set(j+1, temp);
                    swC++;
                }
            }
            
        }
        
        System.out.println("Array is sorted in "+swC+" swaps.");
        System.out.println("First Element: "+ a.get(0));
        System.out.println("Last Element: " +a.get(a.size()-1));
    }

}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        // int n = 
        Integer.parseInt(bufferedReader.readLine().trim());

        List<Integer> a = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
            .map(Integer::parseInt)
            .collect(toList());

        Result.countSwaps(a);

        bufferedReader.close();
    }
}
