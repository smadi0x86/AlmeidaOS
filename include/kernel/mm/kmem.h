/*
 * kmem.h
 *
 *  Created on: 19/08/2021
 *      Author: Paulo Almeida
 */

#ifndef INCLUDE_KERNEL_MM_KMEM_H_
#define INCLUDE_KERNEL_MM_KMEM_H_

#include "kernel/compiler/freestanding.h"

void kmem_init(void);
void* kmalloc(uint64_t bytes);
//void kfree(void *ptr);

#endif /* INCLUDE_KERNEL_MM_KMEM_H_ */
