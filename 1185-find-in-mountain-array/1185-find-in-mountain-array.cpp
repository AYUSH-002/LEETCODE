/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) 
    {
       int low=0,high=mountainArr.length()-1;
       int peak;
       while(low!=high)
       {
           peak=(low+high)/2;
           if(mountainArr.get(peak)<mountainArr.get(peak+1))
           {
               low=peak+1;
           }
           else
           {
               high=peak;
           }
       }
       peak=low;

       //Left
       low=0,high=peak;
       while(low<=high)
       {
           int mid=(low+high)/2;
           if(mountainArr.get(mid)==target)
           {
               return mid;
           }
           else if(mountainArr.get(mid)<target)
           {
               low=mid+1;
           }
           else
           {
               high=mid-1;
           }
       }
       //right yaha ulta chalega
       low=peak,high=mountainArr.length()-1;
       while(low<=high)
       {
           int mid=(low+high)/2;
           if(mountainArr.get(mid)==target)
           {
               return mid;
           }
           else if(mountainArr.get(mid)>target)
           {
               low=mid+1;
           }
           else
           {
               high=mid-1;
           }
       }
       return -1;
    }
};