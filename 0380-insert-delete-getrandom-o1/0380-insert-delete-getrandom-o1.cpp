class RandomizedSet {
 public:
    vector<int> values;
    unordered_map<int,int> valueToIndex;
    RandomizedSet() {    
    }
    
    bool insert(int val) {
        
        if(valueToIndex.count(val)) return false;    
        values.push_back(val);
        
        valueToIndex[val]=size(values)-1;
        
        return true;
    }
    
    bool remove(int val) {
         if(!valueToIndex.count(val)) return false;
        
        int index=valueToIndex[val];// to be removed
        int lastVal= values.back();
        values[index]=lastVal;
        valueToIndex[lastVal]=index;
        values.pop_back();
        valueToIndex.erase(val);
        
        return true;
    }
    
    int getRandom() {
    // return values[rand()%values.size()] ;
          int randomIndex = rand() % values.size();
        return values[randomIndex];
    }
//     bool remove(int val) {   
//         if(mp.count(val))
//         { int idx = mp[val];               
//             int last_val = arr.back();
//             arr[idx] = last_val;                     
//             arr.pop_back();
//             mp[last_val] = idx;         
//             mp.erase(val);
//             return true;
//         }
        
//         return false;
//     }
    
//     int getRandom() {
                
//         int rand_idx = rand() % arr.size();
        
//         return arr[rand_idx];
//     }
};