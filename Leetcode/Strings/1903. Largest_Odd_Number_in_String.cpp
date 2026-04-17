//1903. Largest Odd Number in String

class Solution {
public:
    string largestOddNumber(string num) {

        int n=num.length();
         
         for(int i=n-1;i>=0;i--){
                if((num[i] - '0') % 2 !=0){   //num[i] - '0' to convert char into ASCII valuethat is integer value
                    return num.substr(0,i+1);
                }
         }

         return "";
        
    }
};
