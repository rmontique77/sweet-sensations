/*
 *Function Files for the queue project
 */

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

ItemType *enqueue(Queue *queue, ItemType *item) {

    ListNode *new = (ListNode*) malloc(sizeof (ListNode));
    new->data = item;
    if (queue->size == 0) {
        queue->front = new;
    } else {
        queue->rear->next = new;
    }
    queue->rear = new;
    queue->size++;
    return item;
}

ItemType *dequeue(Queue *queue) {
    if ((queue->size) == 0) {
        return NULL;
    }
    ItemType *item = queue->front->data;
    ListNode *del = queue->front;
    queue->front = queue->front->next;
    free(del);
    --queue->size;
    return item;
}

/* Returns:  number of items in the queue */
int queueSize(const Queue queue) {
    int why;
    why = queue.size;
    return why;
}

/* Print the contents of the queue to the specified stream */
void printQueue(const Queue queue, FILE *stream) {
    ListNode *hold = queue.front;
    for (int i = 0; i < queue.size; i++) {
        fprintf(stream, ITEM_FORMAT " ", *hold->data);
        hold = hold->next;
    }
    printf("\n");
}