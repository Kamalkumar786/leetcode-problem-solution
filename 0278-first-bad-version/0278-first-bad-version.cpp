// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long l=1,mid;
        while(l<n){
             mid=(l+n)/2;
            if(isBadVersion((int)mid)){
                n=mid;
            }
            else{
                l=mid+1;
            }
            // return s;
        }
    return (int)l;
    }
};