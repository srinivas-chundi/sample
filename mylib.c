
#include<stdio.h>
#include<stdlib.h>

#include "mylib.h"

struct handle {
	int capacity;
};

handle_t * create_handle(void)
{
	handle_t *hdl = malloc(sizeof(handle_t));
	hdl->capacity = 100;
	return hdl;
}

void display(handle_t *hdl)
{
	printf("%d\n", hdl->capacity);
}
