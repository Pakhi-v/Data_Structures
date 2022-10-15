class student()
{ 
    int age; 
    char * names; 
    public: 
    student(int age, char * names){ 
        this->age = age; 
        //deep copy 
        this->names = new char[strlen(names) + 1]; 
        strcopy(this->names, names);
         //Created new array and copied data
          }