class Solution {
public:
    Node* divide(Node* head) {
        if (head == nullptr || head->next == nullptr)
            return head;

        vector<int> odd;
        vector<int> even;

        Node* current = head;
        while (current != nullptr) {
            if (current->data % 2 == 0)
                even.push_back(current->data);
            else
                odd.push_back(current->data);
            current = current->next;
        }

        Node* dummy = new Node(0);
        Node* curr = dummy;

        for (int i = 0; i < even.size(); i++) {
            curr->next = new Node(even[i]);
            curr = curr->next;
        }
        for (int i = 0; i < odd.size(); i++) {
            curr->next = new Node(odd[i]);
            curr = curr->next;
        }

        return dummy->next;
    }
};
