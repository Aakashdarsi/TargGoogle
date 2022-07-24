class tree {
    public static void main(String[] args) {
        Node root = new Node(10);
        root.left = new Node(20);
        root.right = new Node(30);
        root.left.left = new Node(40);
    }
}class Node{
    int data;
    Node left;
    Node right;
    Node(int d){
        this.data = d;
        this.left = null;
        this.right = null;
    }
};
