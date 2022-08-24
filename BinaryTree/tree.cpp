//create tree from level order Traversal
#include<iostream>
#include<queue>
using namespace std;
class node {
    public:
    int data;
    node* left;
    node* right;

    node(int d){   //constructor
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};
node* buildtree(node* root){
    cout<<"enter data"<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }
    cout<<"enter data for left side"<<data<<endl;
    root -> left = buildtree(root->left);
     cout<<"enter data for right side"<<data<<endl;
    root->right = buildtree(root->right);
    return root;

}

void levelordertraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp = NULL)// this means previous level is completed use seprator to make in order
        {
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
              cout<<temp->data<<" ";
        if(temp -> left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }
    }
}

void node* buildfromlevelorder(node* root){
    queue<node*> q;
    cout<<"enter data for root"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);
    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout<<"enter left node for:"<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata != -1){
            temp -> left = new node(leftdata);
            q.push(temp->left);
        }
        cout<<"enter right node for:"<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata != -1){
            temp -> right = new node(rightdata);
            q.push(temp->right);
        }

    }
}

int main(){
    node* root = NULL;
    buildfromlevelorder(root);

    /*root = buildtree(root);

    cout<<"Traversal order"<<endl;
    levelordertraversal(root);*/

}