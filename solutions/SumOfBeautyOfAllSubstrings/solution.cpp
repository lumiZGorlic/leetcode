class Solution {
public:
    int beautySum(string s) 
	{
		/*int ans = 0, n = s.size();
		for(int i = 0; i < n; i++)
		{
			map<char,int> m;
			multiset<int> st;

			for(int j = i; j < n; j++)
			{
				if(m.find(s[j]) != m.end())
				    st.erase(st.find(m[s[j]]));

				m[s[j]]++;
				st.insert(m[s[j]]);

				ans += ( *st.rbegin() - *st.begin() );
			}
		}
		return ans;*/


        int sz = s.size(), ret = 0;
        for (int i=0; i<sz; i++){
            vector<int> freq(26, 0);
            freq[s[i] - 'a']++;

            for (int j=i+1; j<sz; j++){
                freq[s[j] - 'a']++;
                
                int mn = 501, mx = 0;
                for (int k=0; k<26; k++) {
                    if(freq[k]) {
                        mn = min(mn, freq[k]);
                        mx = max(mx, freq[k]);
                    }
                }
                ret += mx - mn;
            }
        }
        return ret;
    }
};
