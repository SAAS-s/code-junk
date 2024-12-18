/*You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. 
In this case, the max area of water (blue section) the container can contain is 49.

Constraints:

n == height.length
2 <= n <= 105
0 <= height[i] <= 104

*/
#include <bits/stdc++.h>
using namespace std;


int main() {
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0;
        for(int i=0; i < height.length; i++) {
            for(int j=0; j<height.length; j++) {
                int localArea= Math.abs(i-j)*Math.min(height[i],height[j]);
                maxArea=Math.max(maxArea,localArea);
            }
        }
        return maxArea;
    }
};
}
