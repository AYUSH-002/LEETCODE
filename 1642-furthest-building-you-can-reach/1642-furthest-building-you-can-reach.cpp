class Solution {
public:
    int furthestBuilding(vector<int>& het, int br, int l) {
         priority_queue<int> pq;
        int i=0, diff =0; 
        for(i=0; i<het.size()-1; i++){ 
            
            diff = het[i+1]-het[i];
            
            if(diff <= 0){
                continue;
            }

            br -= diff; 
            pq.push(diff); 
       
            if(br < 0){
                br += pq.top(); 
                pq.pop(); 
                l--;
            }
            if(l < 0) break;
        }
        
        
        return i;
    }
};