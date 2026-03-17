class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sm1=0,sm2=0,c1=0,c2=0,num;
        for(int ele : nums1){  
            sm1+=ele;
            if(ele==0)
                c1++;
        }
        for(int ele : nums2){
            sm2+=ele;
            if(ele==0)
                c2++;
        }
        long long diff=abs(sm1-sm2);
        if(c1==0 && c2==0){
            if(sm1==sm2)
                return sm1;
            else        
                return -1;
        }
        else if(c1==0){
            if(sm1<=sm2 || diff<c2)
                return -1;
            return sm1;
        }
        else if(c2==0){
            if(sm1>=sm2 || diff<c1)
                return -1;
            return sm2;
        }
        num=max(sm1,sm2)+1;
        while(true){
            if(abs(num-sm1)>=c1 && abs(num-sm2)>=c2)    
                return num;
            num++;
        }
        return -1;

    }
};