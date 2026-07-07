class Solution {
public:
    int f(int n,int i){
        if(i==n) return 1;
        else if(i>n) return 0;
        else{
            return f(n,i+1)+f(n,i+2);
        }
    }
    int climbStairs(int n) {
        return f(n,0);
    }
};
