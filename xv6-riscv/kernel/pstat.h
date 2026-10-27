#ifndef _PSTAT_H_
#define _PSTAT_H_

#include "param.h"

struct pstat {
  int inuse[NPROC];   // whether this slot of the process table is in use (1 or 0)
  int pid[NPROC];     // the PID of each process 
  int runtime[NPROC];   // the number of ticks each process has accumulated 
  int pass[NPROC];      //process's scheduling priority
  int stride[NPROC];    //how much the pass value increases as it runs
  int passTotal; //new! sum of stride increases throughtout all processes 
};

#endif // _PSTAT_H_