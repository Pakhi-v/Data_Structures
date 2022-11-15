class Solution {
public:
    bool isHappy(int n) { 
        if(n == 1) return true;
        if(n == 89) return false;
    
        long sum = 0;
        while(n){
            int d = n%10;
            sum += d*d;
            n /= 10;
        }
		
        return isHappy(sum);
    }
};