// Linked list --

/* 

    * Linked list and array both are linear data structure.

    Different problems with arrays --

    1) Insertion in the middle or in the begining is costly.
    2) Deletion from the middle or in the begining is costly.
    3) Implemention of data structure like, Queue, Deque is complex with array.
    4) Impelemention problem like round robin scheduling algorithm is difficult. Where involved insertion, deletion, rotation.
    5) Memory fragmentation, With arrays has to be allocate contiguous memory, But linked list doesn't required it.

    Different problems with linked list --

    1) In linked list required more memory for the pointer to store the address of next node.
    2) Linked list terversal is costly than array.
    3) Direct access not possible in linked list because no indices are there.
    4) Reverse traversing is not possible in singly linked list however in doubly linked list it is possible.

    * What is self referential structure?

    => When a structure contain a pointer of type itself those structure are called self referential structure.

    Advantages and disadvantages between singly and doubly linked list--

    Advantages of doubly linkded list :

        1) Can be terversed in both the direction. Which can't be done in singly linked list.
        2) A given node can be delete in O(1) time with given reference or pointer to it. Which can be done in singly linked list for last node it won't work.
        3) Insert and delete before a given node. But in single linked list can't be done at all.
        4) Insert and delete from both the ends in O(1) time by maintaining the tail.

    Disadvantages of doubly linkded list :

        1) Extra space for _prev pointer.
        2) Code become more complex.

    * Circular linked list?

    Circular linked is a linked list where all the linked list are connected to form a circle. There is no NULL at the end a circular linked list can be single or double circular linked list.

    Advantages,

        1) Any can be consider as a starting point, We can terverse whole list by terverse from any point. We just need to stop when the first visited node is visited again.
        2) Useful for implement queue, We can insert at before head and after tail by maintaining only one pointer tail.
        3) Useful to implement scheduling algorithms.

    Circular doubly linked list (https://www.geeksforgeeks.org/doubly-circular-linked-list-set-1-introduction-and-insertion/)?

    Prev of head is last node. Last of head is first node.

    Advantages :
    
        1) All the advantages of Circular + Doubly linked list.
        2) Used to implement adv DS like fibonacci heap.
        3) Can be done insertion/deletion from any node.
    
    Disadvantages :

        1) It takes slightly extra memory in each node to accommodate the previous pointer.
        2) Lots of pointers involved while implementing or doing operations on a list. So, pointers should be handled carefully otherwise data of the list may get lost.

    Application :

        1) Managing songs playlist in media player applications.
        2) Managing shopping cart in online shopping.

    * Unrolled linked list.

    Advantages : 
    
    1) Cache friendly (Locality of reference) for using array.
    2) Increases efficiency.

    Disadvantages : 

    1) If we are using a bigger size array, Then we are encouraging a to occupy more more cache memory even if we are not using the entire array.

 */