class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i = 0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1]){
                return true;
            }
        }
        return false; /* IF YOU GET AN ERROR OF PLACING THE RETURN STAETEMENT JUST AFTER TWO BARACES THIS IS ANOTHER TYPE THAT I CAME ACCROSS AND HERE I GOT TO LEARN THAT NO NEED TO PLACE ELSE JUST SATISFIY THE CONDITION AND RETURN THERE AND FOR LAST RETURN USE IT AS ELSE PART BEACAUSE AGAR WHO CORRECT HAI THO TRUE PRINT HO JAIGA AND IF NOT THEN LAT MAY RETURN FALSE
    }
};
