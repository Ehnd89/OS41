#include <stdio.h>
#include <stdlib.h>


struct Process {
  int pid;
  int arrival_time;
  int priority;
};

int compare(const void *a, const void *b) {
  struct Process *p1 = (struct Process *)a;
  struct Process *p2 = (struct Process *)b;

  if (p1->arrival_time != p2->arrival_time) {
    return p1->arrival_time - p2->arrival_time;
  }

  return p2->priority - p1->priority;
}

int main() {
  FILE *fp = fopen("process.txt", "r");
  if (fp == NULL) {
    printf("Error opening file\n");
    return 1;
  }

  struct Process processes[10];
  for (int i = 0; i < 10; i++) {
    fscanf(fp, "%d%d%d", &processes[i].pid, &processes[i].arrival_time, &processes[i].priority);
  }
  fclose(fp);

  qsort(processes, 10, sizeof(struct Process), compare);

  for (int i = 0; i < 10; i++) {
    printf("%d %d %d\n", processes[i].pid, processes[i].arrival_time, processes[i].priority);
  }

  return 0;
}