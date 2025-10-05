class MyCircularDeque {
public:
    int size,s,r,f;
    int *q;
    MyCircularDeque(int k) {
        size=k;
        s=r=f=0;
        q=new int[size];
    }
    bool insertFront(int value) {
        if(s<size){
            if(f==0)
                f=size;
            q[--f]=value;
            s++;
            return true;
        }
        return false;
    }
    
    bool insertLast(int value) {
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
    
    bool deleteFront() {
        if(s)
        {
            f++,s--;
            if(f==size)
                f=0;
            return true;
        } 
        return false;
    }
    
    bool deleteLast() {
        if(s){
            r--,s--;
            if(r==-1)
                r=size-1;
            return true;
        }
        return false;
    }
    
    int getFront() {
        if(s)
            return q[f];
        return -1;
    }
    
    int getRear() {
        if(s&&r)
            return q[r-1];
        else if(s)
            return q[size-1];
        return -1;
    }
    
    bool isEmpty() {
        return s==0;
    }
    
    bool isFull() {
        return s==size;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */