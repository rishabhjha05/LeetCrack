class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        // int i=0,j=letters.size()-1;
        // char ans;
        // while(i<=j){
        //     int mid=(i+j)/2;
        //     cout<<i<<" "<<j<<endl;
        //     if(letters[mid]>target){
        //         ans=letters[mid];
        //         i=mid+1;
        //         j=mid-1;
        //     }
        //     else if(letters[mid]<target)
        //         i=mid+1;
        //     else
        //         j=mid-1;
        // }
        // return ans;
        char ch=letters[0];
        int n=letters.size(),i=1;
        while(i<n && (int)ch<=(int)target)
            ch=letters[i++];
        if(letters[i-1]>target)
            return letters[i-1];
        else 
            return letters[0];
    }
};