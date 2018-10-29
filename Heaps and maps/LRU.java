import java.util.*;
class doublylinkedlist{
    
    
}

class LRU{

    int capacity;
    int size=0;
     HashMap<Integer,node> map=new HashMap<>();

    public LRU(int capacity) {
        this.capacity=capacity;
        map.clear();
    }
    static node head=null;
    static node tail=null;
    class node{
        int key,value;
        node prev;
        node next;
    public node(int key,int value)
    {
        this.key=key;
        this.value=value;
    }
    }
    public void push(int key,int value)
    {
        node n=new node(key,value);
        n.next=head;
        n.prev=null;

        if(head==null)
        {
            tail=n;
        }
        if(head!=null)
        head.prev=n;

        head=n;
    }
    public node pop_at_last()
    {
        node n=tail;
        tail.prev.next=null;
        tail=tail.prev;
        return n;
    }
    public node pop_at_front()
    {
        node n=head;
        head=head.next;
        head.prev=null;
        return n;
    }

    
    public int get(int key) {   

        if(map.containsKey(key)==1)
        {
            node n=map.get(key);
            if(n==tail)
            {
                node nn=pop_at_last();
                push(nn.key,nn.value);
                return nn.value;
            }
            else if(n==head)
            {
                node nn=pop_at_front();
                push(nn.key,nn.value);
                return nn.value;
            }
            else
            {
                n.prev.next=n.next;
                n.next.prev=n.prev;
                push(n.key,n.value);
                return n.value;
            }
        }
        return -1;
    }
    
    public void set(int key, int value) {
        
        if(map.containsKey(key)==1)
        {
            node n=map.get(key);
            if(n==tail)
                pop_at_last();
            else if(n==head)
                pop_at_front();
            else
            {
                n.prev.next=n.next;
                n.next.prev=n.prev;
            }
            map.remove(key);    
            
        }
        if(map.size()<capacity)
        {
            node n=new node(key,value);
            map.put(key,n);
            push(key,value);
        }
        else if(map.size>=capacity)
        {
            node n=pop_at_last();
            map.remove(n.key);
            n=new node(key,value);
            map.put(key,n);
            push(key,value);
        }
        

    }
                


    public static void main(String[] args)
    {

   

    }
}