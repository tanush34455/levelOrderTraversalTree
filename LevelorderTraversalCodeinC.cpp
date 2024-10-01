void levelOrder(struct node *root) {
    if (root == NULL) {
        return;
    }

    struct node* queue[501];  // Queue to hold nodes
    int front = 0, rear = 0;

    // Enqueue the root node
    queue[rear++] = root;

    // Level order traversal
    while (front < rear) {
        // Dequeue the front node
        struct node* current = queue[front++];

        // Print the current node's data
        printf("%d ", current->data);

        // Enqueue the left child if it exists
        if (current->left != NULL) {
            queue[rear++] = current->left;
        }

        // Enqueue the right child if it exists
        if (current->right != NULL) {
            queue[rear++] = current->right;
        }
    }
}
