class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        int n=S.size(),num=1;
        string ans="";
        
        stack<int> st;
        
        for(int i=0;i<=n;i++)
        {
            st.push(num++);
            if(i==n || S[i]=='I')
            {
                while(!st.empty())
                {
                    ans+=to_string(st.top());
                    st.pop();
                }
            }
        }
        
        return ans;
    }
};
