import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

    /*
     * Complete the 'plusMinus' function below.
     *
     * The function accepts INTEGER_ARRAY arr as parameter.
     */

    public static void plusMinus(List<Integer> arr) 
    {
        
        int iPosCnt = 0, iNegCnt = 0, iZeroCnt = 0;
        double fPos = 0.0, fNeg = 0.0, fZero = 0.0;
        int size = arr.size();
        System.out.println("size: "+size);

        for(int i = 0; i < arr.size(); i++)
        {
            if(arr.get(i) > 0)
            {
                iPosCnt++;
            }
            else if(arr.get(i) < 0)
            {
                iNegCnt++;
            }
            else
            {
                iZeroCnt++;
            }
        }
        
        fPos = iPosCnt/size;
        fNeg = iNegCnt/size;
        fZero = iZeroCnt/size;
        
        System.out.println(fPos);
        System.out.println(fNeg);
        System.out.println(fZero);
        
    }

}

public class program361
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(bufferedReader.readLine().trim());

        List<Integer> arr = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
            .map(Integer::parseInt)
            .collect(toList());

        Result.plusMinus(arr);

        bufferedReader.close();
    }
}
