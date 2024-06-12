#include <bits/stdc++.h>
using namespace std;
int main (){
class test
{
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int min_difference = __INT_MAX__;
        int result =0;
        for(int i=0; i<nums.size(); i++){
            int left = i+1;
            int right = nums.size()-1;

            while(left<right){
                int curr_sum = nums[i] + nums[left] + nums[right];

                if(abs(target - curr_sum) < min_difference){
                    min_difference = abs(target - curr_sum);
                    result = curr_sum;
                }
                if(curr_sum > target) right--;
                else left++;
                if(target == curr_sum) return result;
            }
        }
        return result;
    }
};
}
