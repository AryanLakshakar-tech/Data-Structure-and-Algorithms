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

//Approach 2
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        // using 1 pass
        vector<int> Count(101);   //we can also use unordered_map<int, int> mp;

        int maxfreq=0;
        int total=0;

        for(int &num:nums){
            Count[num]++;

            int freq=Count[num];

            if(freq>maxfreq){
                maxfreq=freq;   
                total=maxfreq;
            }else if(freq==maxfreq){
                total+=maxfreq;
            }
        }
        return total;
    }
};
