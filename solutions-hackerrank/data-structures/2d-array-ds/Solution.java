import java.io.*;
import java.math.*;
import java.text.*;
import java.util.*;
import java.util.regex.*;

public class Solution {

    /*
     * Complete the array2D function below.
     */
    static int array2D(int[][] arr) {        
        int DIMEN = 4;
        int hg;
        int max = Integer.MIN_VALUE;
        
        for(int i=0; i < DIMEN; i++) 
        {
            for(int j=0; j < DIMEN; j++)
            {
                hg = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
                if( hg > max ) max = hg;                
            }
        }
        
        return max;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int[][] arr = new int[6][6];

        for (int arrRowItr = 0; arrRowItr < 6; arrRowItr++) {
            String[] arrRowItems = scanner.nextLine().split(" ");

            for (int arrColumnItr = 0; arrColumnItr < 6; arrColumnItr++) {
                int arrItem = Integer.parseInt(arrRowItems[arrColumnItr].trim());
                arr[arrRowItr][arrColumnItr] = arrItem;
            }
        }

        int result = array2D(arr);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedWriter.close();
    }
}
