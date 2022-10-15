class students()
{ 
    int age;
     char * names;
      public:
       students(int age, char * names){ 
        this->age = age; 
        // shallow copy
         this->names = names;
          } 
          };