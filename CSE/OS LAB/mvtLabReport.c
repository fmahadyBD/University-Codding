#include <stdio.h>

int main() {
    int numBlocks, numProcesses;
    printf("Enter the number of Blocks: ");
    scanf("%d", &numBlocks);

    int blockSizes[numBlocks], blockAllocated[numBlocks];
    for (int i = 0; i < numBlocks; i++) {
        printf("Block %d size: ", i + 1);
        scanf("%d", &blockSizes[i]);
        blockAllocated[i] = 0; 
    }

    printf("Enter the number of processes: ");
    scanf("%d", &numProcesses);

    int processSizes[numProcesses], processAllocated[numProcesses], internalFrag[numProcesses];
    for (int i = 0; i < numProcesses; i++) {
        printf("Enter memory required for process %d: ", i + 1);
        scanf("%d", &processSizes[i]);
        processAllocated[i] = -1;  
        internalFrag[i] = 0;
    }

    for (int i = 0; i < numProcesses; i++) {
        int bestBlock = -1;
        for (int j = 0; j < numBlocks; j++) {
            if (!blockAllocated[j] && blockSizes[j] >= processSizes[i]) {
                if (bestBlock == -1 || blockSizes[j] < blockSizes[bestBlock]) {
                    bestBlock = j;
                }
            }
        }

        if (bestBlock != -1) {
            processAllocated[i] = bestBlock + 1; 
            blockAllocated[bestBlock] = 1; 
            internalFrag[i] = blockSizes[bestBlock] - processSizes[i];
        }
    }

    // Output results
    printf("\nProcess\tProcess Size\tBlock\tBlock Size\tAllocated\tInt. Frag\n");
    for (int i = 0; i < numProcesses; i++) {
        if (processAllocated[i] != -1) {
            printf("%d\t%d\t\t%d\t%d\t\tYes\t\t%d\n",
                   i + 1, processSizes[i], processAllocated[i], blockSizes[processAllocated[i] - 1], internalFrag[i]);
        } else {
            printf("%d\t%d\t\t-\t-\t\tNo\t\t-\n", i + 1, processSizes[i]);
        }
    }

    return 0;
}
