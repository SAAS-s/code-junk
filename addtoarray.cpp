#include <bits/stdc++.h>
using namespace std;

int main() {
    class Solution {
        public:
            vector<int> addToArrayForm(vector<int>& num, int k) {
                /*
                int N = num.size();
                vector<int> ans;

                int i = N-1;
                //exit when both A and L are visited through
                while(i >=0 || k>0){
                    if(i >=0) k += num[i];
                    ans.push_back(k%10);
                    k/=10;
                    i--;
                }

                reverse(ans.begin(), ans.end());

                return ans;
                */
               int numIndex = num.size() -1; //start from the last digit of the number
               int carry = 0; //intialize carry for addition
               vector<int> result; //the result vector to store the sum

               //iterate until all digits are processes, or there is no carry, or k is not zero:
               while(numIndex >=0 || k>0 || carry>0) {
                //if numIndex is within bounds, add the current digit to carry
                //otherwise, add 0 (when numIndex <0)
                carry += (numIndex >=0 ? num[numIndex] :0) + (k % 10);
                result.push_back(carry % 10); //extract the last digit of carry and add it to result
                carry /= 10; //update carry for the next iteration
                k /=10; //move to the next digit in k
                numIndex--; //move to th eprevious digit in num
               }

               //the result currently contains the digits in reverse order.
               reverse(result.begin(), result.end());//reverse the result to get the correct order/

               return result;
            }
    };

}