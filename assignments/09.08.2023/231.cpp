class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0){
            return 0;
        }
        else if(n%2==0 || n==1){
            if(n==1){
                return 1;
            }

            return isPowerOfTwo(n/2);
        }
        return 0;
    }
};