// add a method remove() to the linked list that deletes a node to the specified index.

class LinkedList {
    constructor(value) {
      this.head = {
        value: value,
        next: null,
        prev : null
      };
      this.tail = this.head;
      this.length = 1;
    }
    append(value) {
      const newNode = {
        value: value,
        next: null,
        prev : null
      }
      newNode.prev = this.tail;
      this.tail.next = newNode;
      this.tail = newNode;
      this.length++;
      return this;
    }
    prepend(value) {
      const newNode = {
        value: value,
        next: null,
        prev: null
      }
  
      newNode.next = this.head;
      this.head.prev = newNode;
      this.head = newNode;
      this.length++;
      return this;
    }
    printList() {
      const array = [];
      let currentNode = this.head;
      while(currentNode !== null){
          array.push(currentNode.value)
          currentNode = currentNode.next
      }
      return array;
    }
    insert(index, value){
      //Check for proper parameters;
      if(index >= this.length) {
        console.log('yes')
        return this.append(value);
      }
      
      const newNode = {
        value: value,
        next: null,
        prev: null
      }
      const leader = this.traverseToIndex(index-1);
      const follower = leader.next;
      leader.next = newNode;
      newNode.prev = leader;
      newNode.next = follower;
      follower.prev = newNode;
      this.length++;
      return this.printList();
    }
    traverseToIndex(index) {
      //Check parameters
      let counter = 0;
      let currentNode = this.head;
      while(counter !== index){
        currentNode = currentNode.next;
        counter++;
      }
      return currentNode;
    }
    remove(index) {
      // Check Parameters      
      const leader = this.traverseToIndex(index-1);
      const unwantedNode = leader.next;
      const follower = unwantedNode.next;
      leader.next = follower;
      follower.prev = leader;
      this.length--;
      return this.printList();
    }
    //reverse function
    reverse(){
      let current = this.head;
      let prev = null;
      let next1;
      while(current!=null){
        next1 = current.next;
        current.next = prev;
        prev = current;
        current = next1;
      }
      this.head = prev;
      return this.printList();
    }
  
  }
  
  let myLinkedList = new LinkedList(10);
  myLinkedList.append(5);
  myLinkedList.append(16);
  myLinkedList.prepend(1);
  myLinkedList.insert(2, 99);
  myLinkedList.insert(4, 88);
  myLinkedList.reverse();
  
  
  
  