// https://leetcode.com/problems/product-of-array-except-self/description/

vector<int> ans( nums.size(),1);
         
         int prefix = 1;
         for ( int i = 0 ; i < nums.size(); i++ ){
             ans[i] = prefix;
             prefix *= nums[i];
         }

         int postfix = 1;
         for ( int i = nums.size() - 1 ; i >= 0; i-- ){
             ans[i] *= postfix;
             postfix *= nums[i];
         }

         return ans;

    }