#include <stdio.h>

int main() {
    int memorySize, numberOfProcesses, totalInternalFragmentation = 0;
    int processSize[10], i, blockStart, blockEnd;
    int remainingMemory;

      /*
    We don't give the fixed size of each block. only give the total memory size and give the number of process
    */

    // Take memory size from user
    printf("Enter memory size: ");
    scanf("%d", &memorySize);

    remainingMemory = memorySize; // Track remaining available memory

    // Take number of processes from user
    printf("Enter the number of processes: ");
    scanf("%d", &numberOfProcesses);

    // Process sizes from user input
            // Calculate internal fragmentation (in MVT, fragmentation is only the unused part of allocated space)
    for (i = 0; i < numberOfProcesses; i++) {
        printf("Enter size of process %d: ", i + 1);
        scanf("%d", &processSize[i]);
    }

    // Display header for process allocation
    printf("\nProcess\t\tMemory Required\t\tAllocated\tInternal Fragmentation\n");

    // Simulate the allocation of memory dynamically for each pr

    for (i = 0; i < numberOfProcesses; i++) {
        // If the process fits in the remaining memory
        if (processSize[i] <= remainingMemory) {

            // Allocate the partition (dynamic allocation based on process size)
            blockStart = memorySize - remainingMemory;  // Start of the block
            blockEnd = blockStart + processSize[i];     // End of the block

            int internalFrag = 0;
            remainingMemory -= processSize[i];  // Decrease remaining memory by the allocated size


            printf("%d\t\t%d\t\tYes\t\t%d\n", i + 1, processSize[i], internalFrag);
        } else {
            // If the process cannot fit into the remaining memory
            printf("%d\t\t%d\t\tNo\t\tN/A\n", i + 1, processSize[i]);
        }
    }

    // Check if memory is full
    if (remainingMemory == 0) {
        printf("\nMemory is full.\n");
    } else {
        printf("\nMemory is not full. %d units of memory are unallocated.\n", remainingMemory);
    }

    return 0;
}
