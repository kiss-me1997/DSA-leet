 int lengthOfLongestSubstring(string s) {
        if(s.length()==NULL)
        {
            return 0;
        }
        int l=s.length();
        int st=0,temp=0,maxi=INT_MIN;
        map<char,int> m;
        int flag=0;
        for(int i=0;i<l;i++)
        {
            char c=s[i];
            m[c]++;
            temp++;
            for(auto it:m)
            {
               if(it.second>1)
               {
                   char ch=s[st];
                   m[ch]--;
                   st++;
                   temp--;
               }
            }
            maxi=max(maxi,temp); 
            
        }
        
        return maxi;
        
    }
