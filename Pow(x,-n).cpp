class Solution {
    public :double myPow(double x, long long n) {
        
        // Base condition: If n is 0, x^0 is 1
        if (n == 0) {
            return 1;
        }

        // Convert n to a long integer to handle the edge case with Integer.MIN_VALUE
      

        // If n is negative, take the reciprocal of x and make N positive
        if (n < 0) {
            n = -n;
            x = 1 / x;
        }

        // If N is even, recursively compute the square of x^(N/2)
        if (n % 2 == 0) {
            return myPow(x * x, (n / 2));
        } 
    
        // If N is odd, recursively compute x^(N-1) and multiply it by x
        else {
            return x * myPow(x,  (n - 1));
        }
    }
};


