/*50. Pow(x, n)
Medium

1333

2836

Add to List

Share
Implement pow(x, n), which calculates x raised to the power n (xn).

Example 1:

Input: 2.00000, 10
Output: 1024.00000
Example 2:

Input: 2.10000, 3
Output: 9.26100
Example 3:

Input: 2.00000, -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25*/






class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0){
            return 1;
        }
        if(x == 1){
            return 1;
        }
        
        if(x == -1){
             if (n%2 == 0)
                 return 1;
            return -1;
        }
        
        if(x == 0){
            return 0;
        }
        if(n==INT_MIN) 
            return 0.0;
        
        if(n==INT_MAX) 
            return 0.0;
        
        
        double result = x;
        for(int i = 1; i < abs(n); i++){
            result *= x;
            
        }
        cout << result;
        if (n> 0)
            return result;
        else
            return 1/result;
    }
};
