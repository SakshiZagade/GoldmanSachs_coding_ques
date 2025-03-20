class Solution {
  public:
    // Function to delete a node without any reference to the head pointer.
    void deleteNode(Node* del_node) {
        // Your code here
         // Edge case: If the node to be deleted is NULL or last node, we cannot delete it
        if (del_node == NULL || del_node->next == NULL) {
            return;
        }

        // Copy data from the next node to the current node
        del_node->data = del_node->next->data;

        // Store the next node in a temporary pointer
        Node* temp = del_node->next;

        // Link current node to the next of next node
        del_node->next = del_node->next->next;

        // Delete the next node
        delete temp;
    }
};
