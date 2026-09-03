
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;

        int i = 0;
        int j = 1;
        int uniqueElements = 1;

        while (j < nums.size()) {
            if (nums[j] == nums[j - 1]) {
                j++;
                continue;
            }

            nums[i + 1] = nums[j];
            i++;
            j++;
            uniqueElements++;
        }

        return uniqueElements;
    }
};
