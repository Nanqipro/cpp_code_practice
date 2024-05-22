#include <cstdio>
#include <string>
using namespace std;

typedef struct TreeNode{
    char data;
    TreeNode* left;
    TreeNode* right;
}*tree;

tree rebuild(string preOrder,string inOrder){
    //返回表示子树的根节点的地址
    if(preOrder.size() == 0){
        return NULL;
    }
    else{
        //从先序中确定根
        char rootData = preOrder[0];
        tree pNewNode = new TreeNode;
        pNewNode->data = rootData;
        //拿根去切割中序
        int pos = inOrder.find(rootData);
        // substr切割字符串函数,取出下标从1开始，长度位pos的字符串
        pNewNode->left = rebuild(preOrder.substr(1,pos),inOrder.substr(0,pos));
        pNewNode->right = rebuild(preOrder.substr(pos+1),inOrder.substr(pos+1));
        return pNewNode;
    }
}
//后序遍历
void postOrder(tree root){
    if(root !=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%c",root->data);
    }
}
int main() {
    char preOrder[30];
    char inOrder[30];
    while(scanf("%s%s",preOrder,inOrder)!= EOF){
        tree root = rebuild(preOrder,inOrder);
        postOrder(root);
        printf("\n");
    }
    return 0;
}
