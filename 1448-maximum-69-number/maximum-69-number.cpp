class Solution {
public:
    int maximum69Number (int num) {
        vector<int> vec;
        while(num){
            vec.push_back(num%10);
            num/=10;
        }
        int i=vec.size()-1;
        while(i>=0){
            if(vec[i]==6){
                vec[i]=9;
                break;
            }
            i--;
        }
        num=0;
        i=vec.size()-1;
        while(i>=0)
        {
            num*=10;
            num+=vec[i--];
        }
        return num;
    }
};