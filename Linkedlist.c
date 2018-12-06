#include <stdio.h>
#include <stdlib.h>

typedef struct linknode {
	int data;
	void *next;
	//struct linked *next;(둘중하나 아무거나 쓰기) 
} linknd_t;

static linknd_t *list; //linked List 실체

linknd_t* create_node(int value) {
	linknd_t* ndPtr;
	
	//동적 메모리 할당
	ndPtr = (linknd_t*)malloc(sizeof(linknd_t));
	if (ndPtr == NULL) {
		printf("ERROR\n");
		return NULL;
	}
	
	//정수값저장 
	ndPtr->data = value;
	ndPtr->next = NULL;
	
	return ndPtr; 
}
