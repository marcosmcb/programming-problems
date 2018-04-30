import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static String timeConversion(String s) 
    {
        int x = Integer.parseInt( s.substring(0,2) );  
        if( s.charAt(8) == 'P' )    
        {                        
            if( x == 12 ) s = x + s.substring(2,8);
            else          s = (x + 12) + s.substring(2,8);                        
        }
        else
        {
            if( x == 12 ) s = "00" + s.substring(2,8);
            else          s = s.substring(0,8);
        }
        
        return s;
    }

    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        String result = timeConversion(s);
        System.out.println(result);
    }
}