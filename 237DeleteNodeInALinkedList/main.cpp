#include <iostream>

struct ListNode;


void deleteNode(ListNode* node) {
    if(node == NULL || node->next == NULL) return;
    if(node->next->next == NULL){
        node->val = node->next->val;
        delete node->next;
        node->next = NULL;
        return;
    }
    node->val = node->next->val;
    deleteNode(node->next);
}

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
void printNodes(ListNode* node){
    if(node == NULL){
        std::cout<<std::endl;
        return;
    }
    std::cout<<" "<<node->val;
    printNodes(node->next);
}
int main(){
    ListNode node(4);
    node.next = new ListNode(5);
    node.next->next = new ListNode(1);
    node.next->next->next = new ListNode(9);

    printNodes(&node);
    
    deleteNode(node.next);
    
    printNodes(&node);

    delete node.next->next->next;
    delete node.next->next;
    delete node.next;


    return 0;
}