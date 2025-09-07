class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size(),i=n-1;
        vector<int> NextG(n),sol(n);
        stack<int> nextG;
        while(i>=0){
            while(nextG.size()!=0 &&nums[i]>=nextG.top())
                nextG.pop();
            if(nextG.size()==0)
                NextG[i]=INT_MIN;
            else
                NextG[i]=nextG.top();
            nextG.push(nums[i--]);
        }
        for(int ele : NextG)
            cout<<ele<<" ";
        cout<<endl;
        i=0;
        while(i<n){
            if(NextG[i]!=INT_MIN)
                sol[i]=NextG[i];
            else{
                int j=0;
                while(j<i && nums[j]<=nums[i])
                    j++;
                if(j<i)
                    sol[i]=nums[j];
                else
                    sol[i]=-1;
            }
            i++;
        }
        return sol;
    }
};