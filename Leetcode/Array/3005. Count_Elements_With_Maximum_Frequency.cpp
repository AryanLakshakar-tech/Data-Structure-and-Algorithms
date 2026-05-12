// Aprroach 1
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        // using 2 pass
        vector<int> Count(101);   //we can also use unordered_map<int, int> mp;

        int maxfreq=0;

        for(int &nums : nums){
            Count[nums]++; //increasing the freq of num
            maxfreq =  max(maxfreq,Count[nums]);
        }

        return std::count(begin(Count), end(Count), maxfreq) * maxfreq;
        
    }
};
