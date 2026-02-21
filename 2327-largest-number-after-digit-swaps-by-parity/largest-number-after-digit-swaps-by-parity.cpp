class Solution {
public:
    int largestInteger(int num) {
        vector<int> odd,even,no,rnum;
        while(num){
            int x=num%10;
            if(x%2==0)
                even.push_back(x);
            else
                odd.push_back(x);
            no.push_back(x);
            num/=10;
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        reverse(no.begin(),no.end());
        int i=even.size()-1,j=odd.size()-1,n=no.size();
        for(int k=0;k<n;k++){
            if(no[k]%2==0)
                no[k]=even[i--];
            else
                no[k]=odd[j--];
        }
        for(int ele :no)
        {
            num*=10;
            num+=ele;
        }
        cout<<num<<endl;

        return num;
    }
};