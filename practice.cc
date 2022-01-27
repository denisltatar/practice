#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        // result = [] 
        
        // Use the first loop as an anchor point
        for (int i = 0; i < nums.size(); i++){
            // cout << nums[i] << endl;
            // Use second loop as comparison
            for (int j = 0; j < nums.size(); j++){
                if (i == j){
                    break;
                } else if (nums[i] + nums[j] == target){
                    result.push_back(j);
                    result.push_back(i);
                }
            }
        }
        return result;
    }


    void prettyPrint(vector<int> array){
        cout << "[";
        for (int i = 0; i < array.size(); i++){
            if (i == array.size() - 1){
                cout << array[i] << "]" << endl;
            } else {
                cout << array[i] << ", ";
            }
        }
    }

    int strStr(string haystack, string needle) {
        int result;
        
        if (haystack == needle) {
            result = 0;
        } else if (needle.size() == 0 || haystack.size() == 0){
            result = -1;
        } else {
            result = haystack.find(needle);
        }
        
        return result;
        // Side not: hey, it's ok. Keep your head up.
    }

    // Not finished yet
    // https://leetcode.com/problems/reverse-words-in-a-string-iii/
    string reverseWords(string s) {
        string result;        
        string word;
        string reverseWord;


        // Traverse through the list and find each word 
        for (int i = 0; i < s.length(); i++){
            if (s[i] == ' ' || i == s.length() - 1){
                // Word is now complete, we need to reßverse it.
                cout << word << endl;
                for (int j = word.size() + 1; j > 0; j--){
                    reverseWord = reverseWord + word[j];
                    cout << word[j] << endl; 
                }
                cout << reverseWord << endl;

                // Word is successfully reversed, check if last word and add to result string
                if (i == s.length() - 1){
                    result = result + reverseWord;
                    break;
                } else {
                    reverseWord = reverseWord + ' ';
                    result = result + reverseWord;
                    reverseWord = "";
                }

                
                
                // Replace what is in word with an empty string and repeat the process
                word = "";
            } else {
                // Keeping adding to the word vector so it can be reversed
                word += s[i];
            }
        }

        // Return our final answer
        cout << "Result is: " << result << endl;
        return result;
    }
};


int main(){
    // Declaring sols, an instance of the class Solution
    Solution sols;

    vector<int> array;
    array.push_back(2);
    array.push_back(7);
    array.push_back(11);
    array.push_back(12);
    sols.twoSum(array, 9);

    // sols.prettyPrint(array); 
    
    sols.reverseWords("Let's take LeetCode contest");
    // "s'teL ekat edoCteeL tsetnoc"
}