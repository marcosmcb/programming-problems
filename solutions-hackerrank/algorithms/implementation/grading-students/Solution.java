import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int[] solve(int[] grades)
    {  
        int diff;
        for(int i=0; i < grades.length; i++)
        {
            int unitPart = grades[i] % 10;
            
            if( unitPart > 5 ) diff = 10 - unitPart;
            else               diff = 5  - unitPart;
                      
            if( diff < 3 && (grades[i]+diff) > 38 ) 
                grades[i] += diff;
           
        }
        
        return grades;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] grades = new int[n];
        for(int grades_i=0; grades_i < n; grades_i++){
            grades[grades_i] = in.nextInt();
        }
        int[] result = solve(grades);
        for (int i = 0; i < result.length; i++) {
            System.out.print(result[i] + (i != result.length - 1 ? "\n" : ""));
        }
        System.out.println("");
        

    }
}