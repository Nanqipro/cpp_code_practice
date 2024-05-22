#include <cstdio>
#include <string>
using namespace std;

typedef struct TreeNode{
    //数据域
    int data;
    //指针域
    TreeNode* left;
    TreeNode* right;
}TreeNode,*Tree;

//BST建树
void insertBST(Tree &root,int data){
    Tree pNewNode = new TreeNode;
    pNewNode->data = data;
    pNewNode->left = NULL;
    pNewNode->right = NULL;
    if(root == NULL){
        root = pNewNode;
        printf("-1\n");
    }
    else{
        Tree pPre = root;
        Tree pCur;
        while (true){
            if(data < pPre->data){
                pCur = pPre->left;
                if(pCur == NULL){
                    pPre->left = pNewNode;
                    printf("%d\n",pPre->data);
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
                    printf("%d\n",pPre->data);
                    break;
                }
                else{
                    pPre = pCur;
                }
            }
        }
    }
}
//递归中序
void inOrder(Tree root){
    if(root != NULL){
        inOrder(root->left);
        printf("%d",root->data);
        inOrder(root->right);
    }
}
int main() {
    Tree root = NULL;
    int n;
    while(scanf("%d",&n) != EOF){
        for(int i = 0;i < n;i++){
            int m;
            scanf("%d",&m);
            insertBST(root,m);
        }
    }
    //inOrder(root);
    //printf("\n");
    return 0;
}
