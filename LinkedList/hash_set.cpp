class MyHashSet {
public:
vector<int> m;
int size;
    MyHashSet() {
        size=1e6 + 1;
        m.resize(size);
    }
    
    void add(int key) {
        m[key] = 1;
    }
    
    void remove(int key) {
        m[key] = 0;
    }
    
    bool contains(int key) {
        return m[key];
    }
};

//use of hashing function i.e chaining for larger range
//we will use doubly LL

/*
vector<list<int>> m;
int size;
MyHashSet(){
  size=1e6+1;
  m.resize(size);
}
int hash(int key){
    return key%size;
}
list<int> :: iterator search(int key){
    int i=hash(key);
    return find(m[i].begin(),m[i].end(),key);
}
void add(int key){
    if(contains(key))return;
    int i = hash(key);
    m[i].push_back(key);
}
void remove(int key){
    if(!contains(key))return;
    int i=hash(key);
    m[i].erase(search(key));
}
bool contains(int key){
    int i=hash(key);
    if(search(key) != m[i].end()) return true;
    else return false;
}
};

*/