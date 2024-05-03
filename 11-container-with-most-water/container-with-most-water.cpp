class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int j=n-1;
        int i=0;
        int maxi=INT_MIN;
        while(i<j){
            maxi=max(maxi,((j-i)*min(height[i],height[j])));
            if(height[i]<height[j]) i++;
            else 
            j--;
        }
       return maxi; 
    }
};