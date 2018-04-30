import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) 
    {
        Scanner stdin = new Scanner(System.in);
        
        int numberOfSets = stdin.nextInt();
        
        while( numberOfSets > 0 )
        {
            int px = stdin.nextInt();
            int py = stdin.nextInt();
                        
            int qx = stdin.nextInt();
            int qy = stdin.nextInt();
            
            int rx = 2 * qx - px;
            int ry = 2 * qy - py;
            
            System.out.println( rx + " " + ry );
            numberOfSets--;
        }
        
    }
}