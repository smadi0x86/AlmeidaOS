/*
 * process.h
 *
 *  Created on: 2/12/2021
 *      Author: Paulo Almeida
 */

#ifndef INCLUDE_KERNEL_TASK_PROCESS_H_
#define INCLUDE_KERNEL_TASK_PROCESS_H_

#include "kernel/compiler/freestanding.h"
#include "kernel/mm/pagetable.h"

typedef struct {

    /* intial virtual address */
    uint64_t ini_addr;
    /* final virtual address */
    uint64_t fini_addr;
    /* reference to process' page table */
    pagetable_t pgtable;

} mm_vm_area_t;

typedef struct {

    /* process identification */
    unsigned int pid;
    /* virtual memory related info */
    mm_vm_area_t vm_area;

} task_struct_t;


task_struct_t* create_process(uint64_t text_phy_addr);

#endif /* INCLUDE_KERNEL_TASK_PROCESS_H_ */