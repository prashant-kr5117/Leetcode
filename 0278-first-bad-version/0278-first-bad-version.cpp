// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
    long l=0,r=n,result;
       
        while(l<=r){
            int mid=(l+r)/2;
            if(isBadVersion(mid)) {
                result=mid;
                r=mid-1;}
            else l=mid+1;
        }
        return result;
    }
};