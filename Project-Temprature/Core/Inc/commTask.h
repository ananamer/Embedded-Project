/*
 * commTask.h
 *
 *  Created on: Nov 17, 2022
 *      Author: student
 */

#ifndef SRC_COMMTASK_H_
#define SRC_COMMTASK_H_
#include "main.h"

#ifdef __cplusplus
extern "C" {
#endif

#define MAX_COMMANDS 50

typedef void (*HanlderFunc)(void *, char *);

void commTask();
int communication();
void handleCommand();
void printCommands();



#ifdef __cplusplus
}
#endif

#endif /* SRC_COMMTASK_H_ */
