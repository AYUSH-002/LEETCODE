static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution 
{
 public:
  int countPrimes(int n)
   {
    vector<bool>isprime(n,true);
    for(int i=2;i*i<n;i++)
    {
        if(isprime[i]==false)
        {
            continue;
        }
        for(int j=i*i;j<n;j+=i)
        {
            isprime[j]=false;
        }
    }
    int count=0;
    for(int i=2;i<n;i++)
    {
        if(isprime[i]==true)
        {
            count++;
        }
    }
    return count;
  }
};
