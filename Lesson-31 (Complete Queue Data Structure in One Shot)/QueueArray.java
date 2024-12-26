public class QueueArray{
    static class Queue{
       static int arr[];
       static int size;
       static int rear = -1;
       Queue(int n)
       {
         this.size = n;
         arr = new int[n];
       }
       public static boolean isEmpty()
       {
        return rear == -1;
       }
       // enqueue
       public static void add(int data)
       {
         if(rear == size-1){
            System.out.println("Queue is full");
            return;
         }         
         rear++;
         arr[rear] = data;   
        }
        // dequeue = O(n)
        public static int remove(){
            if(isEmpty()){
                System.out.println("Queue is empty");
                return -1;
            }
            int frontData = arr[0]; // first remove the front data
            for(int i=0;i<rear;i++){ // left shift the data in array 
                arr[i] = arr[i+1];
            }
            rear--; // reduce the rear value by one
            return frontData;
        }
        // peek = O(1)
        public static int peek(){
            if(isEmpty())
            {
                System.out.println("Empty Queue");
                return -1;
            }
            return arr[0];
        }
}
    public static void main(String args[])
    {
        Queue q = new Queue(5);
        q.add(1);
        q.add(2);
        q.add(3);
        while(!q.isEmpty()){
            System.out.println(q.peek());
            q.remove();
        }

    }
}