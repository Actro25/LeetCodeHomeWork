#include <iostream>
#include <unordered_map>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *detectCycle(ListNode *head) {
    std::unordered_map<ListNode*,bool> headsMap;
    ListNode* temp = head;
    while(temp != NULL){
        if(headsMap.count(temp) > 0){
            return temp;
        }
        headsMap[temp] = true;
        temp = temp->next;
    }
    return NULL;
}
int main(){
    ListNode node(3);
    node.next = new ListNode(2);
    node.next->next = new ListNode(0);
    node.next->next->next = new ListNode(-4);
    node.next->next->next->next = node.next;

    ListNode* result = detectCycle(&node);
    if(result == NULL)
        std::cout<<"NULL";
    else
        std::cout<<"Nonde val: "<<result->val;

    delete node.next->next->next;
    delete node.next->next;
    delete node.next;
    return 0;
}