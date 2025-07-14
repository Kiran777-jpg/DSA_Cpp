

************************************************************************************

Recursion:


#include <iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* left;
        Node* right;
        
        Node(int data)
        {
            this->data=data;
            left=right=NULL;
        }
};

Node* buildTree()
{
    int data;
    cin>>data;
    if(data==-1) return NULL;
    Node* newnode = new Node(data);
    cout<<"left: "<<newnode->data<<endl;
    newnode->left = buildTree();
    cout<<"right: "<<newnode->data<<endl;
    newnode->right = buildTree();
    return newnode;
}


void inorder(Node* root)
{
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    Node* root = buildTree();
    inorder(root);
    cout<<endl;
}


************************************************************************************

Iterative:


/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    stack<TreeNode*> st;
    vector<int> ans;

    while(true)
    {
        if(A!=NULL)
        {
            st.push(A);
            A=A->left;
        }
        else
        {
            if(st.empty()) break;
            A=st.top();
            st.pop();
            ans.push_back(A->val);
            A=A->right;
        }
    }
    return ans;
}


************************************************************************************


 Using one stack and the binary tree node will be changed. Easy ,not Practical

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector < int > Solution::inorderTraversal(TreeNode * root) {
    vector < int > vector;
    if (!root)
        return vector;
    stack < TreeNode * > stack;
    stack.push(root);
    while (!stack.empty()) {
        TreeNode * pNode = stack.top();
        if (pNode -> left) {
            stack.push(pNode -> left);
            pNode -> left = NULL;
        } else {
            vector.push_back(pNode -> val);
            stack.pop();
            if (pNode -> right)
                stack.push(pNode -> right);
        }
    }
    return vector;
}


************************************************************************************

Using one stack and one unordered_map, this will not changed the node. Better

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector < int > Solution::inorderTraversal(TreeNode * root) {
    vector < int > vector;
    if (!root)
        return vector;
    unordered_map < TreeNode * , bool > map; //left child has been visited:true.
    stack < TreeNode * > stack;
    stack.push(root);
    while (!stack.empty()) {
        TreeNode * pNode = stack.top();
        if (pNode -> left && !map[pNode]) {
            stack.push(pNode -> left);
            map[pNode] = true;
        } else {
            vector.push_back(pNode -> val);
            stack.pop();
            if (pNode -> right)
                stack.push(pNode -> right);
        }
    }
    return vector;
}

************************************************************************************


Using one stack and will not changed the node. Best(at least in this three solutions)

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector < int > Solution::inorderTraversal(TreeNode * root) {
    vector < int > vector;
    stack < TreeNode * > stack;
    TreeNode * pCurrent = root;

    while (!stack.empty() || pCurrent) {
        if (pCurrent) {
            stack.push(pCurrent);
            pCurrent = pCurrent -> left;
        } else {
            TreeNode * pNode = stack.top();
            vector.push_back(pNode -> val);
            stack.pop();
            pCurrent = pNode -> right;
        }
    }
    return vector;
}

************************************************************************************

solution Approach:

Think stack.

Recursive call would look something like this :

inorderprint(root->left);
print(root->val);
inorderprint(root->right);

Instead of calling the functions, can you put the nodes on a stack and process them?

How would your solution work if you could change the original tree?
How would it work if you were not allowed to change the tree but use additional memory ( track the number of times a node has appeared in the tree )?
How would it work if you were not even allowed the extra memory?

************************************************************************************
