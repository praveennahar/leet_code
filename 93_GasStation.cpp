class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
    	long long int deficit = 0;
        long long int balance = 0;
        long long int start = 0;
        int n = gas.size();
               
        if(gas.size() == 1 && gas[0] >= cost[0]) return 0;       
        
        for(int i=0; i<n; i++)
        {
            balance += gas[i] - cost[i];
            if(balance < 0)
            {
                deficit += balance;
                start = i+1;
                balance = 0;
            }
        }
        
        if(deficit + balance >= 0) return start;
        else return -1;
    }
};