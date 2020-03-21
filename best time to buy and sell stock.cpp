class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0)
            return 0;
        stack<int>st;
        st.push(prices[0]);
        int res=0;
        int k=0;
        for(int i=1;i<prices.size();i++){
           if(prices[i]<st.top()){
               st.pop();
               st.push(prices[i]);
               k++;
           }
            else if(prices[i]>st.top()){
                res=max(res,prices[i]-st.top());
            }
        }
        if(k==prices.size())
            return 0;
        return res;
        
    }
};
