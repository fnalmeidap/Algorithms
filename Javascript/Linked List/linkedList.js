import { print } from '../utils.js';

class Node {
  constructor(data = null, next = null){
    this.data = data;
    this.next = next;
  }
}

class ListDebug{
  lprint(){
    let cur = this.head;
    let listArray = [];
    while(cur){
      listArray.push(cur.dat);
      cur = cur.next;
    }

    print(listArray);
  }

  showConnections(){
    let cur = this.head;
    
    while(cur.next){
      print(cur.data + " -> " + (cur.next).data);
      cur = cur.next;
    }
  }
}

class LinkedList extends ListDebug{
  constructor(head = null){
    super()
    this.head = head;
  }

  insert(value){
    const newNode = new Node(value);

    //if we have a empty list
    if(!this.head){
      this.head = newNode;
      
      return this;
    }

    // if the list has some elements in it, go until the end and append to the last one
    let cur = this.head;

    while(cur.next != null){
      cur = cur.next;
    }

    cur.next = newNode;

    return this;
  }

  size(){
    let count = 0;
    let cur = this.head;
    
    while(cur){
      count++;
      cur = cur.next;
    }

    return count;
  }

  clear(){
    this.head = null;
  }

  delete(value){
    let cur = this.head;
    let prev = null;
    
    while(cur){
      
      if(cur.data == value){
        prev.next = cur.next;
        cur.next = null;
        
        return this;
      }
        
      prev = cur;
      cur = cur.next;

    }
  }
}
