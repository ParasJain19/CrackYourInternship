class Solution {
public:
    void rearrangeEvenOdd(Node *head) {
        if (!head || !head->next) return;

        Node *odd = head;
        Node *even = head->next;
        Node *evenHead = even;

        while (even && even->next) {
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }
        
        odd->next = evenHead;
    }
};
