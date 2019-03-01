import java.math.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) 
    {
        int n=new Scanner(System.in).nextInt();        
        int sum=0,max=0;
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<n;j++)
            {
                max=0;
                BigInteger x=new BigInteger("1");
                for(int k=0;k<j;k++)
                {
                    x=x.multiply(BigInteger.valueOf(i));
                }
                String str=x.toString();
                for(int l=0;l<str.length();l++)
                {
                    max+=Integer.valueOf(""+str.charAt(l));
                }
                if(max>sum)
                {
                    sum=max;
                }
            }
        }
        System.out.println(sum);
    }
}
