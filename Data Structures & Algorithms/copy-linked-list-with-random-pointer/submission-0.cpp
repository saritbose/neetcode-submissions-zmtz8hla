/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return NULL;

        unordered_map<Node*,Node*> m;

        Node* prev = new Node(head->val);
        m[head] = prev;
        Node* head1 = prev;
        Node* temp = head->next;
        
        
        while(temp != NULL) {
            Node* newNode = new Node(temp->val);

            if(m.find(temp) == m.end()) {
                m[temp] = newNode;
            }

            prev->next = newNode;
            temp = temp->next;
            prev = prev->next;
        }
        
        temp = head;
        prev = head1;
        while(temp != NULL) {
            prev->random = m[temp->random];
            temp = temp->next;
            prev = prev->next;
        }
        return head1;
    }
};
