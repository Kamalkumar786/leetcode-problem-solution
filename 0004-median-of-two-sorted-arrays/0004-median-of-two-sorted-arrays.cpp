class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      int n=nums1.size()+nums2.size();
        vector<int>v(n);
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),v.begin());
        if(n%2==0){
            double t=v[(n/2)-1]+v[((n/2)-1)+1];
            // cout<<t/2;
            return t/2;
        }
        else{
            return v[n/2];
        }
    }
};