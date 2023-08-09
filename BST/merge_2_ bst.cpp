// Not Optimize code
void BSTtoDLL(TreeNode<int>* root, TreeNode<int>* &head){
    if(root == NULL) return;

    BSTtoDLL(root->right, head);

    root->right = head;
    if(head != NULL) head->left = root;
    head = root;

    BSTtoDLL(root->left, head);
}

TreeNode<int>* merge(TreeNode<int>* head1, TreeNode<int>* head2){
    TreeNode<int>* head = NULL;
    TreeNode<int>* tail = NULL;

    if(head1->data < head2->data){
        head = head1;
        tail = head1;
        head1 = head->right;
    }
    else{
        head = head2;
        tail = head2;
        head2 = head2->right;
    }

    while(head1 != NULL && head2 != NULL){
        if(head1->data < head2->data){
                tail->right = head1;
                head1->left = tail;
                tail = head1;
                head1 = head1->right;
        }
        else{
                tail->right = head2;
                head2->left = tail;
                tail = head2;
                head2 = head2->right;
        }
    }

    while(head1 != NULL){
        tail->right = head1;
        head1->left = tail;
        tail = head1;
        head1 = head1->right;
    }

    while(head2 != NULL){
        tail->right = head2;
        head2->left = tail;
        tail = head2;
        head2 = head2->right;
    }

    return head;
}

TreeNode<int>* DLLtoBST(TreeNode<int>* &head, int n){
    if(n <= 0 || head == NULL) {return NULL;}

    TreeNode<int>* left = DLLtoBST(head, n/2);
    TreeNode<int>* root = head;
    root->left = left;

    head = head->right;

    root->right = DLLtoBST(head, n-n/2-1);
    return root;
}

int countNodes(TreeNode<int>* head){
    int count = 0;
    if(head == NULL) return 0;

    while(head != NULL){
        count++;
        head = head->right;
    }
    return count;
}

TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    TreeNode<int>* head1 = NULL;
    TreeNode<int>* head2 = NULL;

    BSTtoDLL(root1, head1);
    head1->left = NULL;
    BSTtoDLL(root2, head2);
    head2->left = NULL;

    head1 = merge(head1, head2);
    return DLLtoBST(head1, countNodes(head1));
}