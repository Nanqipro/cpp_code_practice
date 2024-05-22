#include <cstdio>
using namespace std;
typedef struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
}*tree;
void insertBST(tree &root,int data){
    tree pNewNode = new TreeNode;
    pNewNode->data = data;
    pNewNode->left = NULL;
    pNewNode->right = NULL;
    if(root == NULL){
        root = pNewNode;
    }
    else{
        tree pPre = root;
        tree pCur;
        while(true){
            if(data == pPre->data){
                break;
            }
            else if(data<pPre->data){
                pCur = pPre->left;
                if(pCur == NULL){
                    pPre->left = pNewNode;
                    break;
                }
                else{
                    pPre = pCur;
                }
            }
            else{
                pCur = pPre->right;
                if(pCur == NULL){
                    pPre->right = pNewNode;
                    break;
                }
                else{
                    pPre = pCur;
                }
            }
        }
    }
}
//递归遍历
//递归先序
void preOrder(tree root){
    if(root != NULL){
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
//递归中序
void inOrder(tree root){
    if(root != NULL){
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}
//递归后序
void backOrder(tree root){
    if(root != NULL){
        backOrder(root->left);
        backOrder(root->right);
        printf("%d ",root->data);
    }
}
int main() {
    int n;
    while(scanf("%d",&n)!=EOF){
        int num[120];
        for(int i = 0;i<n;i++){
            scanf("%d",&num[i]);
        }
        tree root = NULL;
        for(int i = 0;i<n;i++){
            insertBST(root,num[i]);
        }
        preOrder(root);
        printf("\n");
        inOrder(root);
        printf("\n");
        backOrder(root);
        printf("\n");
    }

    return 0;
}
