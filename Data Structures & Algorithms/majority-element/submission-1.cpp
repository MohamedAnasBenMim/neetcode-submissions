class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int condidate=-2147483648;
        for(int num:nums){
            if(count==0) condidate=num;
            if(condidate==num) count++;
            else count--;
        }
        return condidate;
    }
};