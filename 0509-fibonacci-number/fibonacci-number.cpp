
class Solution {
public:
    int fib(int n) {
        //test
        //test2
        //test3
        if(n==0 || n==1){
            return n;
        }
        return fib(n-1)+fib(n-2);
    }
};