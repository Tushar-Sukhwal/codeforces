// Author: Tushar
// Date: 2024-05-31 16:26:44

import java.util.Scanner;

public class Solution {

    // Function to find the position of the most significant bit (MSB)
    public static int MSBPosition(long N) {
        int msb_p = -1;
        while (N > 0) {
            N = N >> 1;
            msb_p++;
        }
        return msb_p;
    }

    // Function to find the Bitwise OR of all integers between L and R
    public static long findBitwiseOR(long L, long R) {
        long res = 0;

        // Find the MSB position in L
        int msb_p1 = MSBPosition(L);

        // Find the MSB position in R
        int msb_p2 = MSBPosition(R);

        while (msb_p1 == msb_p2) {
            long res_val = (1L << msb_p1);

            // Add this value until msb_p1 and msb_p2 are same
            res += res_val;

            L -= res_val;
            R -= res_val;

            // Calculate msb_p1 and msb_p2 again
            msb_p1 = MSBPosition(L);
            msb_p2 = MSBPosition(R);
        }

        // Find the max of msb_p1 and msb_p2
        msb_p1 = Math.max(msb_p1, msb_p2);

        // Set all the bits from msb_p1 up to 0th bit in the result
        for (int i = msb_p1; i >= 0; i--) {
            long res_val = (1L << i);
            res += res_val;
        }

        return res;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int Tushars_07 = sc.nextInt();

        while (Tushars_07-- > 0) {
            long n = sc.nextLong();
            long m = sc.nextLong();

            long l = n - m;
            if (l < 0) l = 1;
            long r = n + m;

            System.out.println(findBitwiseOR(l, r));
        }

        sc.close();
    }
}
