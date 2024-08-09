class Solution {
public:
    Node* flatten(Node* root) {
        vector<int> vec;
        Node* curr1 = root;

        while (curr1 != nullptr) {
            Node* temp = curr1;
            while (temp != nullptr) {
                vec.push_back(temp->data);
                temp = temp->bottom;
            }
            curr1 = curr1->next;
        }

        sort(vec.begin(), vec.end());

        Node* dummy = new Node(0);
        Node* curr = dummy;

        for (int i = 0; i < vec.size(); i++) {
            curr->bottom = new Node(vec[i]);
            curr = curr->bottom;
        }

        return dummy->bottom;
    }
};
