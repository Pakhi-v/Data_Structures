//design a hashmap
class MyHashMap {
public:
vector<int> m;
int size;
    MyHashMap() {
        size=1e6+1;
        m.resize(size);
        fill(m.begin(),m.end(),-1);     
    }
    
    void put(int key, int value) {
        m[key] = value; 
    }
    
    int get(int key) {
        return m[key];
    }
    
    void remove(int key) {
        m[key]=-1;
    }
};

//for large range
/*
class MyHashMap {
public:
vector<list<pair<int,int>>> m;
int size;
MyHashMap(){
     size=1000;
  m.resize(size);
}
int hash(int key){
    return key%size;
}
list<pair<int,int>> :: iterator search(int key){
    int i=hash(key);
    list<pair<int,int>> :: iterator it = m[i].begin();
    while(it!=m[i].end()){
        if(it->first==key) return it;
        it++;
    }
    return it;
}
void put(int key,int value){
    int i = hash(key);
    remove(key);
    m[i].push_back({key,value});
}
int get(int key){
    int i=hash(key);
    list<pair<int,int>> :: iterator it = search(key);
    if(it==m[i].end()) return -1;
    else return it->second;
}
void remove(int key){
    int i=hash(key);
    list<pair<int,int>> :: iterator it = search(key);
    if(it!=m[i].end())m[i].erase(it);

}
};

*/