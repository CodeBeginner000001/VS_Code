public class CircularQueueArray {
    static class Queue{
        static int arr[];
        static int size;
        static int front=-1;
        static int rear=-1;
        Queue(int n){
        this.size = n;
        arr = new int[n];
        }
        public static boolean isEmpty(){
            return rear == -1 && front == -1;
        }
        public static boolean isFull(){
            return (rear+1)%size == front;
        }
        // enqueue
        public static void add (int data)
        {
            if(isFull()){
                System.out.println("Queue is full");
                return;
            }
            if(front == -1)
            {
                front = 0;
            }
            rear = (rear+1)%size;
            arr[rear] = data;
        }
    }
    public static void main(String args[])
    {

    }
}
