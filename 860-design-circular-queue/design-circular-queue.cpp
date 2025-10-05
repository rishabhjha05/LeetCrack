class MyCircularQueue {
public:
    int size,s,r,f;
    int *q;
    MyCircularQueue(int k) {
        size=k;
        s=r=f=0;
        q=new int[size];
    }
    bool enQueue(int value) {
       if(s<size)
       {
            if(r==size)
                r=0;
            q[r]=value;
            r++,s++;
            return true;
       } 
       return false;
    }
    
    bool deQueue() {
        if(s)
        {
            f++,s--;
            if(f==size)
                f=0;
            return true;
        } 
        return false;
    }
    
    int Front() {
        if(s)
            return q[f];
        return -1;
    }
    
    int Rear() {
        if(s)
            return q[r-1];
        return -1;
    }
    
    bool isEmpty() {
        return s==0;
    }
    
    bool isFull() {
        return s==size;
    }
};
//q: 
/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */