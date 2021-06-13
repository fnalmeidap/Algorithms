import { print } from '../utils.js';

class Node {
  constructor(data = null, next = null){
    this.data = data;
    this.next = next;
  }
}

class LinkedList {
  constructor(head = null){
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

  lprint(){
    let cur = this.head;
    let listArray = [];
    while(cur){
      listArray.push(cur.dat);
      cur = cur.next;
    }

    print(listArray);
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

  showConnections(){
    let cur = this.head;
    
    while(cur.next){
      print(cur.data + " -> " + (cur.next).data);
      cur = cur.next;
    }
  }
}

let lista = new LinkedList();

lista.insert(1);
lista.insert(2);
lista.insert(3);
lista.insert(4);
lista.insert(5);

print("Antes");
lista.showConnections()

lista.delete(3);

print("\nDepois");
lista.showConnections()

