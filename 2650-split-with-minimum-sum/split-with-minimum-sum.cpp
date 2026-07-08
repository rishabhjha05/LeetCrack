class Solution {
public:
    int splitNum(int num) {
        priority_queue<int, vector<int>, greater<int>> pq;
        while(num){
            pq.push(num%10);
            num/=10;
        }
        long long num1=0,num2=0;
        while(!pq.empty()){
            num1*=10,num1+=pq.top();
            pq.pop();
            if(!pq.empty()){
                num2*=10,num2+=pq.top();
                pq.pop();
            }
        }
        return num1+num2;
    }
};