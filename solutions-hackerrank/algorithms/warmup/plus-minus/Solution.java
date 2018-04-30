import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution 
{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int positive=0;
        int negative=0;
        int zeroes=0;
        int[] arr = new int[n];
        for(int arr_i = 0; arr_i < n; arr_i++)
        {
            arr[arr_i] = in.nextInt();
            
            if(arr[arr_i] > 0) positive++;
            else if(arr[arr_i] < 0) negative++;
            else zeroes++;
            
        }
        
        in.close();
        System.out.format("%.3f\n", ((float) positive/n) );
        System.out.format("%.3f\n", ((float) negative/n) );
        System.out.format("%.3f\n", ((float) zeroes/n) );
        
    }
}