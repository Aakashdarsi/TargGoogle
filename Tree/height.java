

class height {
    public static void main(String[] args) {
        Node root = new Node(10);
        root.left = new Node(20);
        root.right = new Node(30);
        root.left.left = new Node(40);
        int h = height_r(root);
        System.out.println(h);
    }
    static int height_r(Node root){
        if(root == null){
            return 0;
        }
        return Math.max(height_r(root.left),height_r(root.right))+1;

    }
    
}
class Node{
    
    int data;
    Node left;
    Node right;
    public Node(int d){
        this.data = d;
        this.left = null;
        this.right = null;
    }
};
