class MyHashMap {
public:
    vector<list<pair<int,int>>> m;
       int siz;
    MyHashMap() {
        siz=1000;
        m.resize(siz);
    }
    int hash(int key){ return key%siz;}
    list<pair<int,int>> :: iterator search(int key){
        int i = hash(key);
        
        list<pair<int,int>> :: iterator it =m[i].begin();
        
        while(it!=m[i].end()){
            if(it->first==key) return it;
            it++;
        }
        return it;
    }
    void put(int key, int value) {
        remove(key);
        int i = hash(key);
        m[i].push_back({key,value});
    }
    
    int get(int key) {
        int i = key%siz;
        if(search(key)==m[i].end()) return -1;
        return search(key)->second;
    }
    
    void remove(int key) {
        int i  =hash(key);
        if(search(key)!=m[i].end()) m[i].erase(search(key));
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */