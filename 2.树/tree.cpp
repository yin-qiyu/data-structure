/*
 * @Author: yin-qiyu
 * @Date: 2022-09-20 11:08:25
 * @LastEditTime: 2022-09-29 17:58:01
 * @Description: 
 * 
 */



#include <iostream>
#include <vector>
using namespace std;

typedef struct TreeNode
{
    int data;
    bool isEmpty;
}TreeNode;

//初始化顺序存储的二叉树，所有结点标记为"空"
void InitSqBiTree (TreeNode t[], int length) {
    for (int i=0; i<length; i++){
        t[i].isEmpty=true;
    }
}

int main(){
    TreeNode t[100];        //定义一棵顺序存储的二叉树
    InitSqBiTree(t, 100);   //初始化为空树
    //...
}

