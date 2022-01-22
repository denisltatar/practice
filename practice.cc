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

    sols.prettyPrint(array); 
}