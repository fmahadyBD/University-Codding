#include <stdio.h>

int main() {
    int memorySize, blockSize, numberOfBlocks, totalInternalFragmentation = 0;
    int sizeOfProcess[10], i, count = 0, numberOfProcess;
    int unusedMemory;  // Renamed from

    /*
    We give the fixed size of each block

    */
    // Take memory size from user
    printf("Enter memory size: ");
    scanf("%d", &memorySize);

    // Take block size from user
    printf("Enter block size: ");
    scanf("%d", &blockSize);

    // Calculate number of blocks
    numberOfBlocks = memorySize / blockSize;
    unusedMemory = memorySize - (numberOfBlocks * blockSize);

    // Take number of processes from user
    printf("Enter the number of processes: ");
    scanf("%d", &numberOfProcess);

    // Take process sizes from user
    for (i = 0; i < numberOfProcess; i++) {
        printf("Enter size of process %d: ", i + 1);
        scanf("%d", &sizeOfProcess[i]);
    }

    // Display header for the process allocation
    printf("\nNo of blocks: %d\n", numberOfBlocks);
    printf("Process\tMemory Required\tAllocated\tInternal Fragmentation\n");

    // Process each process and check if it fits in the blocks
    for (i = 0; i < numberOfProcess; i++) {
        if (sizeOfProcess[i] > blockSize) {
            // If the process is larger than the block, it cannot be allocated
            printf("%d\t\t%d\t\tNo\t\tN/A\n", i + 1, sizeOfProcess[i]);
        } else {
            // If the process fits into the block
            totalInternalFragmentation += blockSize - sizeOfProcess[i];
            printf("%d\t\t%d\t\tYes\t\t%d\n", i + 1, sizeOfProcess[i], blockSize - sizeOfProcess[i]);
            count++; // Increment the number of processes that have been allocated
        }
    }

    // Display the total internal fragmentation
    printf("\nTotal Internal Fragmentation: %d\n", totalInternalFragmentation);

    // Check if memory is full (i.e., number of allocated blocks is equal to total blocks)
    if (count == numberOfBlocks) {
        printf("Memory is full.\n");
    } else {
        printf("Memory is not full. Some blocks are unallocated.\n");
    }

    return 0;
}
