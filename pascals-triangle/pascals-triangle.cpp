class Solution {
public:
    vector<vector<int>> generate(int n) {
        
        if(n == 1)
            return {{1}};
        else if(n==2)
            return {{1}, {1,1}};
        
        vector<vector<int>> res ;
        res.push_back({1});
        res.push_back({1,1});
        
        vector<int> current = {1,1};
        
        for(int i =3; i<=n; i++){
            
            vector<int> temp;
            temp.push_back(1);
            
            for(int j = 0; j<current.size()-1;j++){
                 temp.push_back(current[j]+current[j+1]);
                
            }
             temp.push_back(1);
            
            res.push_back(temp);
            
            current = temp;
            
        }
        
        return res;
        
    }
};