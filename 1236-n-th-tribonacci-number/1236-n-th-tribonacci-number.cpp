class Solution {
public:
    int tribonacci(int n) 
    {
        int arr[n+1];
        for(int i=0;i<n+1;i++)
        {
            if(i==0)
            {
                arr[i]=0;
            }
            else if(i==1 || i==2)
            {
                arr[i]=1;
            }
            else 
            {
                arr[i]=arr[i-3]+arr[i-2]+arr[i-1];
            }
        }
        return arr[n];
    }
};