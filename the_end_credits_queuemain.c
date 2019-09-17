/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Raj
 *
 * Created on April 12, 2018, 6:01 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

/*
 * 
 */
int main(int argc, char** argv) {
  Queue queue = {NULL, NULL, 0};

  int done = 0;
  while (!done) {
    int choice, nValid;
    do {
      printf("Enter 1 to add to queue or 0 to remove "
	     "(-1 to quit): ");
      nValid = scanf("%d", &choice);
    } while (nValid != 1 || choice < -1 || choice > 1);

    switch (choice) {
    case 0: {
      ItemType *item;
      if ((item = dequeue(&queue)) != NULL) {
	printf("Removed " ITEM_FORMAT "\n", *item);
      } else {
	printf("Queue is empty\n");
      }
      break;
    }

    case 1: {
      ItemType *item = malloc (sizeof(ItemType));
      if (item == NULL) {
	fprintf(stderr, "%s: Error allocating memory for item.\n", argv[0]);
	return EXIT_FAILURE;
      }

      printf ("Enter " ITEM_PROMPT ": ");
      if (scanf(ITEM_FORMAT, item) != 1) {
	fprintf(stderr, "Unable to read " ITEM_PROMPT "\n");
	break;
      }

      if ((item = enqueue(&queue, item)) != NULL) {
	printf("Added " ITEM_FORMAT "\n", *item);
      } else {
	fprintf(stderr, "%s: Error allocating memory to queue.\n", argv[0]);
	return EXIT_FAILURE;
      }
      break;
    }

    case -1:  {
      done = 1;
      break;
    }

    default:
      fprintf(stderr, "Invalid choice entered");
    }
  }

  printf ("%d Items remaining in the queue:\n", queueSize(queue));
  printQueue (queue, stdout);





    return (EXIT_SUCCESS);
}

