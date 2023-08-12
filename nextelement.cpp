#include <iostream>
#include <vector>
#include <stack>

std::vector<int> nextGreaterElement(const std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> result(n, -1);
    std::stack<int> st;

    for (int i = n - 1; i >= 0; --i) {
        while (!st.empty() && nums[i] >= st.top()) {
            st.pop();
        }

        if (!st.empty()) {
            result[i] = st.top();
        }

        st.push(nums[i]);
    }

    return result;
}

int main() {
    std::vector<int> nums = {1,3,2,4};
    std::vector<int> result = nextGreaterElement(nums);

    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
