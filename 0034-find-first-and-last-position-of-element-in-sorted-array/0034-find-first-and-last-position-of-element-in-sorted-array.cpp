class Solution {
public:
   
  int firstoccurence(vector<int>& nums, int key){
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(nums[mid]==key){
                ans= mid;
                e=mid-1;
            }
            else if(nums[mid]<key){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
             mid=s+(e-s)/2;
        }
        return ans;
    }
    int lastoccurence(vector<int>& nums, int key){
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(nums[mid]==key){
                ans= mid;
                s=mid+1;
            }
            else if(nums[mid]<key){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
             mid=s+(e-s)/2;
        }
        return ans;
    }
     
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
        int first=firstoccurence(nums,target);
        int last=lastoccurence(nums,target);
        v.push_back(first);
        v.push_back(last);
        return v;
       
        
    }
};