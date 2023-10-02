// Definition for singly-linked list.
function ListNode(val) {
    this.val = val;
    this.next = null;
}

function reverseLinkedList(head) {
    let prev = null;
    let current = head;

    while (current !== null) {
        const nextTemp = current.next;
        current.next = prev;
        prev = current;
        current = nextTemp;
    }

    return prev; // The new head of the reversed list
}

// Helper function to convert an array to a linked list
function arrayToLinkedList(arr) {
    if (arr.length === 0) return null;
    const head = new ListNode(arr[0]);
    let current = head;

    for (let i = 1; i < arr.length; i++) {
        current.next = new ListNode(arr[i]);
        current = current.next;
    }

    return head;
}

// Helper function to convert a linked list to an array
function linkedListToArray(head) {
    const result = [];
    let current = head;

    while (current !== null) {
        result.push(current.val);
        current = current.next;
    }

    return result;
}

// Example usage:
const inputArray = [1, 2, 3, 4, 5];
const inputLinkedList = arrayToLinkedList(inputArray);
const reversedLinkedList = reverseLinkedList(inputLinkedList);
const reversedArray = linkedListToArray(reversedLinkedList);

console.log(reversedArray); // Output: [5, 4, 3, 2, 1]
