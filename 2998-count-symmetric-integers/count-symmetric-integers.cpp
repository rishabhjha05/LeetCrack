class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans=0;
        for(int i=low;i<=high;i++){
            int num=i,count=0;
            while(num)
                num/=10,count++;
            if(count%2!=0)
                i=pow(10,count);
            else{
                count/=2,num=i;
                int sum=0;
                while(count)
                    sum+=num%10,num/=10,count--;
                while(num)
                    sum-=num%10,num/=10;
                if(sum==0)
                    ans++;
            }
        }
        return ans;
    }
};