#include <stdio.h>
#include <stdlib.h>
#include "cpu.h"

/**
 * Main
 */
int main(int argc, char *argv[])
{
  struct cpu cpu;

  if (argc != 2) {
    fprintf(stderr, "need filename");
    exit(1);
  }

  char *filename = argv[1];
  
  cpu_init (&cpu);
  cpu_load(filename, &cpu);
  cpu_run(&cpu);

  return 0;
}