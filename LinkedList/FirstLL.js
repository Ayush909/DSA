//1-->10-->99-->5-->16
//Note: Javascript doesnt have their own linkedLists. So we make one :)
//this is branch using c++
class LinkedList {
    constructor(value){
        this.head = {
            value : value,
            next : null
        }

        this.tail = this.head;
        this.length = 1;       
    }
    //append at tail
    append(value){
        const newNode = {
            value : value,
            next : null
        }
        this.tail.next = newNode;
        this.tail = newNode;
        this.length++ ;        
    }
    //prepend at head
    prepend(value){
      const newNode = {
        value : value,
        next : null
      }
      newNode.next = this.head
      this.head = newNode
      this.length++;
    }
    //print the whole LinkedList as an array
    printList(){
      const array = [];
      let currentNode = this.head;

      while( currentNode !== null){
        array.push(currentNode.value);
        currentNode = currentNode.next;
      }
      return array;
    }
    //insert
    insert(index,value){
      const newNode = {
        value : value,
        next : null
      }

      if(index >= this.length){
        return this.append(value)
      }
      if(index === 0){
        return this.prepend(value);
      }

      const leader = this.traverse(index-1)
      const holdingPointer = leader.next;

      leader.next = newNode;
      newNode.next = holdingPointer;
      this.length++;
      return this.printList();
    }
    //traverse the LinkedList
    traverse(index){
      let currentNode = this.head;
      let counter = 0;
      while(counter != index){
        currentNode = currentNode.next;
        counter++;
      }
      return currentNode;
    }
    //deleting a node
    delete(index){
      const leader = this.traverse(index-1);
      const unwantedNode = leader.next;
      leader.next = real.next;
      this.length--;
      return this.printList();
    }
}

const myLinkedList = new LinkedList(10)
myLinkedList.append(5)
myLinkedList.append(16)
myLinkedList.prepend(1)
myLinkedList.insert(2,99)
myLinkedList.insert(0,9)
myLinkedList.insert(200,13)
myLinkedList.printList()
