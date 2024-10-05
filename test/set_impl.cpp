
/**
* @file set_impl.cpp
* @author Srikanth S
* @date [Current Date]
* @see 
* @brief   Implement set using AVL tree
* Build using .\build.bat test set_impl
*/
#include <allheaders.h>
using namespace std;

//Write a class that implements set using AVL tree
/*
First let height be stored as part of the root. set to 1 in constructor(leaf node)
Define balance = height(left) - height(right)
balance < -1 means right imbalanced. Right heavy means balance is -1. 
Rule - If left imbalanced, do right rotate.
Before doing right rotate, check if left node needs left rotate(it is right heavy)
1. Right rotate on root x (bal >1)- do if left imbalance . left node y becomes root
    Before doing right rotate - check if y needs to be left rotated(right heavy - bal == -1)
    Now do right rotate on updated y. 
2. During insert, do all the rebalancing while backtracking
3. During rotation, update height at each node.
*/
//First write a class that can insert/delete elements to AVL tree
class AVLTree{
    private:
        struct Node{
            int val;
            Node*left;
            Node*right;
            int height;
            //leaf node
            Node(int key):val(key),height(1){left=NULL;right=NULL;}
        };
    public:
        Node* root;
        AVLTree(){
            root=NULL;
        }
        int height(Node* ptr){
            return ptr?ptr->height:0;
        }
        int balance(Node*ptr){
            return ptr?( height(ptr->left) - height(ptr->right) ):0;
        }

        Node* rotateRight(Node*x){
            Node* y = x->left;
            Node* t = y->right;
            y->right = x;
            x->left = t;
            x->height = max(height(x->left),height(x->right)) + 1;
            y->height = max(height(y->left),height(y->right)) + 1;
            return y; //returns root
        }

         Node* rotateLeft(Node*x){
            Node* y = x->right;
            Node* t = y->left;
            y->left = x;
            x->right = t;
            x->height = max(height(x->left),height(x->right)) + 1;
            y->height = max(height(y->left),height(y->right)) + 1;
            return y; //returns root
        }
        void insert(int val){
            this->root = insert(this->root,val);
        }
        Node* insert(Node* x,int val){
            if(!x)
                return new Node(val);
            if(x->val == val)
                return x;
            else if(x->val < val)
                x->right = insert(x->right,val);
            else
                x->left = insert(x->left,val);
            int bal = balance(x);
            //right rotate , if left imbalanced
            if(bal < -1){
                if(balance(x->left) == 1) // first left rotate
                    x->left = rotateLeft(x->left);
                x = rotateRight(x);
            }
            if(bal > 1){
                if(balance(x->right) == 1) // first left rotate
                    x->right = rotateRight(x->right);
                x = rotateLeft(x);
            }
            return x;
        }

        bool isBalanced(){
            return isBalanced(this->root);
        }

        bool isBalanced(Node *x){
            if(!x)
                return true;
            return abs( balance(x) ) <= 1 && isBalanced(x->left) && isBalanced(x->right) ;
        }

        bool isPresent(int val){
            return this->isPresent(this->root,val);
        }

        bool isPresent(Node* root ,int val){
            if(!root)
                return false;
            if(root->val == val)
                return true;
            if(root->val < val)
                return isPresent(root->right,val);
            return isPresent(root->left,val);
        }

        vector<int> toVector(){
            return read(this->root);
        }

        vector<int> read(Node*x){
            if(!x)
                return {};
            if(!x->left && !x->right)
                return {x->val};
            vector<int> Vleft = read(x->left);
            Vleft.push_back(x->val);
            vector<int> Vright = read(x->right);
            Vleft.insert(Vleft.end(),Vright.begin(),Vright.end());
            return Vleft;
        }
};


class Solution{
    public:
        AVLTree T;

        vector<int> insert(vector<int> V){
            for(auto &n:V)
                T.insert(n);
            if(T.isBalanced()){
                vector<int> V = T.toVector();
                for(int i=1;i<V.size();i++)
                    if(V[i] < V[i-1] || !T.isPresent(V[i]))
                        return {};
                return V;
            }
            return {};
        }
};
//2
// reads vector
// writes vector
void Test(const std::string& inputfile, const std::string& outputfile) {
    InputParser Ip;
    Output Op;

    std::vector<std::string> V = Ip.readInputFile(inputfile);
    std::vector<std::string> Output;
    std::vector<int> Vin,Vin1,Vout;
    for (auto &input : V) {
        Solution solution;
        Vin = Ip.buildVector(input);
        Vin1=Vin;//pass by reference changes Vin
        Vout = solution.insert(Vin);
        Op.appendInput(Vin1);
        Op.appendOutput(Vout);
    }

    Op.writeOutputFile(outputfile);
}


int main(int argc, char* argv[]) {

    Common().parseArguments(argc,argv);

    Test(argv[1], argv[2]);

    return 0;
}
    