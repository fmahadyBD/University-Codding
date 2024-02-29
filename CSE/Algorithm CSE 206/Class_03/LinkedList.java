package Class_03;

/**
 *
 * @author student_user
 */
public class LinkedList {

    Node head;

    static class Node {

        int data;
        Node next;

        Node(int d) {
            this.data = d;
            next = null;
        }
    }

    public static LinkedList insert(LinkedList list, int data) {
        Node new_node = new Node(data);
        if (list.head == null) {
            list.head = new_node;

        } else {
            Node iterator = list.head;
            while(iterator.next!=null){
                iterator=iterator.next;
            }
            iterator.next=new_node;

        }
        return list;
    }
}
