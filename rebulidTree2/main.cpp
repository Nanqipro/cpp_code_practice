#include <cstdio>
#include <string>
using namespace std;

typedef struct TreeNode{
    char data;
    TreeNode* left;
    TreeNode* right;
}*tree;
tree RecursiveBuildTree(int &i,string str){//返回本棵子树根节点地址
    char c = str[i];
    i++;
    if('#' == c){
        return NULL;
    }
    else{
        tree pNewNode = new TreeNode;
        pNewNode->data = c;
        pNewNode->left = RecursiveBuildTree(i,str);
        pNewNode->right = RecursiveBuildTree(i,str);
        return pNewNode;
    }
}
void inOrder(tree root){
    if(root != NULL){
        inOrder(root->left);
        printf("%c ",root->data);
        inOrder(root->right);
    }
}
int main() {
    char str[110];
    while(scanf("%s",str)!=EOF){
        int i = 0;
        tree root = RecursiveBuildTree(i,str);
        inOrder(root);
        printf("\n");
    }
    return 0;
}
