class inorder {
    public static void main(String[] args) {
        Node root = new Node(10);
        root.left = new Node(20);
        root.right = new Node(30);
        root.left.left = new Node(40);
        inorder_trav(root);
    }
    static void inorder_trav(Node root)
    {
        if(root==null){
            return ;
        }
        inorder_trav(root.left);
        System.out.println(root.data);
        inorder_trav(root.right);
    }
}class Node{
    
    int data;
    Node left;
    Node right;
    public Node(int d){
        this.data = d;
        this.left = null;
        this.right = null;
    }
};


    
