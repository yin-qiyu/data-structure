/*
 * @Author: yin-qiyu
 * @Date: 2022-09-27 20:37:43
 * @LastEditTime: 2022-09-28 22:57:49
 * @Description: 2012
 * 假定采用带头结点的单链表保存单词，当两个单词有相同的后缀时，则可共享相同的后缀存储空间，例如，“loading”和“being”的存储映像如下图所示。
  
设str1和str2分别指向两个单词所在单链表的头结点，链表结点结构为，请设计一个时间上尽可能高效的算法，找出由str1和str2所指向两个链表共同后缀的起始位置（如图中字符i所在结点的位置p）。要求：
1）给出算法的基本设计思想。
2）根据设计思想，采用C或C++或Java语言描述算法，关键之处给出注释。
3）说明你所设计算法的时间复杂度。

 */
#include <iostream>
#include <vector>
using namespace std;


