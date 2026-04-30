class Solution {
public:
    int partition(vector<int>& nums, int left, int right) {
        int pivot = nums[right];
        int i = left;
        
        for (int j = left; j < right; j++) {
            if (nums[j] <= pivot) {
                swap(nums[i], nums[j]);
                i++;
            }
        }
        swap(nums[i], nums[right]);
        return i;
    }

    int quickSelect(vector<int>& nums, int left, int right, int k) {
        if (left == right) return nums[left];

        int pivotIndex = partition(nums, left, right);

        if (k == pivotIndex)
            return nums[k];
        else if (k < pivotIndex)
            return quickSelect(nums, left, pivotIndex - 1, k);
        else
            return quickSelect(nums, pivotIndex + 1, right, k);
    }

    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> vec;

        for (auto &row : grid) {
            for (int ele : row) {
                vec.push_back(ele);
            }
        }

        int n = vec.size();
        int median = quickSelect(vec, 0, n - 1, n / 2);

        int ans = 0;
        for (auto &row : grid) {
            for (int ele : row) {
                if (abs(median - ele) % x != 0)
                    return -1;
                ans += abs(median - ele) / x;
            }
        }

        return ans;
    }
};