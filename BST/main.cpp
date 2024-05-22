#include <cstdio>
#include <string>
using namespace std;

typedef struct treeNode{
    char data;
    treeNode* left;
    treeNode* right;
}*Tree;
//构建二叉搜索树
void insertBST(Tree &root,char data){
    Tree pNewNode = new treeNode;
    pNewNode->data = data;
    pNewNode->left = NULL;
    pNewNode->right = NULL;
    if(NULL == root){
        root = pNewNode;
    }
    else{
        Tree pPre = root;
        Tree pCur;
        while (true){
            if(data<pPre->data){
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
string inOrder(Tree root){
    if(root == NULL){
        return "";
    } else{
        return inOrder(root->left)+root->data+inOrder(root->right);
    }
}
string preOrder(Tree root){
    if(root == NULL){
        return "";
    }else{
        return root->data+ preOrder(root->left)+ preOrder(root->right);
    }
}


int main() {
    int n;
    while(scanf("%d",&n)!= EOF){
        if(n == 0){
            break;
        }
        char str1[100];
        scanf("%s",str1);
        Tree root1 = NULL;
        for(int i = 0;str1[i] != '\0';i++){
            insertBST(root1,str1[i]);
        }
        string preOrder1 = preOrder(root1);
        string inOrder1 = inOrder(root1);

        for(int idx = 0;idx<n;idx++){
            char str2[100];
            scanf("%s",str2);
            Tree root2 = NULL;
            for(int i = 0;str2[i]!= '\0';i++){
                insertBST(root2,str2[i]);
            }
            string preOrder2 = preOrder(root2);
            string inOrder2 = inOrder(root2);
            if(preOrder1 == preOrder2 && inOrder1 == inOrder2){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }
    return 0;
}
