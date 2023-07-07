#include<iostream>
using namespace std;
int vertArr[20][20];
void displayMatrix(int v){
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<< vertArr[i][j]<< " ";
        }
        cout<<endl;
    }
}
void add_edge(int u, int v){
    vertArr[u][v] = 1;
    vertArr[v][u] = 1;
}
main(int argc, char* argv[]) {
   int v = 6;    //there are 6 vertices in the graph
   add_edge(0, 4);
   add_edge(0, 3);
   add_edge(1, 2);
   add_edge(1, 4);
   add_edge(1, 5);
   add_edge(2, 3);
   add_edge(2, 5);
   add_edge(5, 3);
   add_edge(5, 4);
   displayMatrix(v);
}