#include<bits/stdc++.h>
using namespace std;

int main(){
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int size1 = word1.size(); 
        int size2 = word2.size();
        std::string mergeWord;

        //Reserve space for the merged word
        mergeWord.reserve(size1 + size2);

        //Merge
        int i= 0, j=0;
        while(i<size1 && j<size2) {
            mergeWord.push_back(word1[i++]);
            mergeWord.push_back(word2[j++]);
        }

        //append the remainig characters
        if(i < size1) {
            mergeWord.append(word1.substr(i));
        }
        else{
            mergeWord.append(word2.substr(j));
        }
        return mergeWord;
    }
};
}
/**
 * Second approach
 * class Solution {
 * public:
 *  string mergeAlternatively(string word1, string word2) {
 *      int i = 0, j =0, n1 = word1.length(), n2 = word2.length();
 *      string s = "";
 *      while(i<n1 || j<n2){
 *          if(i<n1){
 *              s+= word1[i];
 *              i++;
 *          }
 *          if(j<n2){
 *              s+= word2[j];
 *              j++;
 *          }
 *      }
 *      return s;
 *    }
 * }
 */