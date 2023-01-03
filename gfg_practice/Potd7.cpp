

class Solution{
	public:
	int mod = 1000000007;
	long long inv(long long int r){
	    if(r==1) return 1;
	    return (mod-((mod/r)*inv(mod%r))%mod+mod)%mod;
	}
	int compute_value(int n){
	    long long int ans =1, ncr=1;
	    for(int i=1;i<=n;i++){
	        ncr=(((ncr*(n+1-i))%mod)*inv(i))%mod;
	        ans=(ans+(ncr*ncr)%mod)%mod;
	    }
	    return ans%mod;
	}
};