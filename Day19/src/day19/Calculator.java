package day19;

class Calculator implements AdvancedArithmetic 
{
    
    public int divisorSum(int n)
    {
        int sum = 0;
        int sqrt = (int) Math.sqrt(n);

        
        int stepSize = (n % 2 == 1) ? 2 : 1;

        for (int i = 1; i <= sqrt; i += stepSize) 
        {
            if (n % i == 0) 
            { 
                sum = sum+(i + n/i); 
            }
        }
        if (sqrt * sqrt == n) 
        {
            sum =sum-sqrt;
        }
        return sum;
    }
}
