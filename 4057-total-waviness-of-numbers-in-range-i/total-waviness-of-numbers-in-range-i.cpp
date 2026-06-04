class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int count=0;
        for(int i=num1;i<=num2;i++){
            string str=to_string(i);
            int n=str.size();
            for(int j=1;j<n-1;j++){
                if(str[j]>str[j-1] && str[j]>str[j+1])
                    count++;
                else if(str[j]<str[j-1] && str[j]<str[j+1])
                    count++;
            }
        }
        return count;
    }
};