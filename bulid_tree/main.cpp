#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

typedef struct TreeNode{
    //数据域
    char data;
    //指针域
    TreeNode* left;
    TreeNode* right;
}TreeNode,*Tree;
typedef struct QueueNode{
    Tree parent;
    bool isLeftIn;
}QueueNode;

void insertTreeNode(Tree &root,queue<QueueNode *> &myQueue,char data){
    if('#' != data){
        //创建二叉树节点,申请在堆空间
        Tree pTreeNode = new TreeNode;
        pTreeNode->data = data;
        //入队
        QueueNode *pQueueNode = new QueueNode;
        pQueueNode->parent = pTreeNode;
        pQueueNode->isLeftIn = false;
        myQueue.push(pQueueNode);
        //插入操作
        if(NULL == root){
            root = pTreeNode;
        }
        else{
            //pParent 用来定位插入节点的父亲的位置
            QueueNode *pParent = myQueue.front();
            if(!(pParent->isLeftIn)){
                pParent->parent->left = pTreeNode;
                pParent->isLeftIn = true;
            }
            else{
                pParent->parent->right = pTreeNode;
                myQueue.pop();//出队
                delete pParent;//释放堆空间，防止内存泄露
            }
        }
    }
    else{
        //是#
        if(root != NULL){
            QueueNode *pParent  =myQueue.front();
            if(pParent->isLeftIn == false){
                pParent->parent->left = NULL;
                pParent->isLeftIn = true;
            } else{
                pParent->parent->right = NULL;
                myQueue.pop();
                delete pParent;
            }
        }
    }
}
//二叉树层次遍历
void LevelOrder(Tree root){
    queue<Tree> pos;
    pos.push(root);
    while (!pos.empty()){
        Tree pCur = pos.front();
        pos.pop();
        printf("%c",pCur->data);
        if(pCur->left != NULL){
            pos.push(pCur->left);
        }
        if (pCur->right != NULL){
            pos.push(pCur->right);
        }
    }
    printf("\n");
}
//递归遍历
//递归先序
void preOrder(Tree root){
    if(root != NULL){
        printf("%c",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
//递归中序
void inOrder(Tree root){
    if(root != NULL){
        inOrder(root->left);
        printf("%c",root->data);
        inOrder(root->right);
    }
}
//递归后序
void backOrder(Tree root){
    if(root != NULL){
        backOrder(root->left);
        backOrder(root->right);
        printf("%c",root->data);
    }
}

//二叉树层次建树
int main() {
    Tree root = NULL;
    char charList[] = "abc##de#g##f###";
    queue<QueueNode *> myQueue;
    for(int i = 0;charList[i] != '\0';i++){
        insertTreeNode(root,myQueue,charList[i]);
    }
    LevelOrder(root);
    preOrder(root);
    printf("\n");
    inOrder(root);
    printf("\n");
    backOrder(root);
    printf("\n");
    return 0;
}
