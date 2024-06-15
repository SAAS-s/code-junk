#include <bits/stdc++.h>
using namespace std;

int main() {
    class Solution {
        public:
            void sortColors(vector<int>& nums) {
                int zero = 0;
                int end = nums.size() -1;

                for(int i=0;i<=end;i++)
                {
                    while(nums[i]==2 && i<end) swap(nums[i], nums[end--]);
                    while(nums[i]==0 && i>zero) swap(nums[i], nums[zero++]);
                }
            }
    };
}