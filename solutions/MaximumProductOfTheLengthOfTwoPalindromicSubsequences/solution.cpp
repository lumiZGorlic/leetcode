class Solution {
public:
    int ans = 0;
    bool ispal(string &n){
        int i=0,j=n.length()-1;
        while(i<j){
            if(n[i]!=n[j]){
                return false;
            }
            i++,j--;
        }
        return true;
    }

    void temp(string &ori,int i,string a,string b){
        if(i==ori.length()){
            if(ispal(a) && ispal(b)){
                ans = max(ans,(int)(a.length()*b.length()));
            }
            return;
        }

        temp(ori,i+1,a+ori[i],b);
        temp(ori,i+1,a,b+ori[i]);
        temp(ori,i+1,a,b);
    }

    int maxProduct(string s) {
        temp(s,0,"","");
        return ans;
    }
};
