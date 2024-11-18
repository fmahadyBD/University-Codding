#include<stdio.h>

int main(){

int numberOfBlock, numberOfFile;
printf("Enter the number of  Block: ");
scanf("%d",&numberOfBlock);
printf("Enter the number of File: ");
scanf("%d",&numberOfFile);

int blockSi2e[numberOfBlock];
int fileSi2e[numberOfFile];
int fragmentation[numberOfBlock];

for(int i=0;i<numberOfBlock;i++){
    printf("Enter the block Si2e- %d: ",i+1);
 	scanf("%d",&blockSi2e[i]);

}

for(int i=0;i<numberOfFile;i++){
    printf("Enter the file Si2e- %d: ",i+1);
 	scanf("%d",&fileSi2e[i]);

}


int isAssign[numberOfBlock];

// make every isAssign
for(int i=0;i<numberOfBlock;i++){
	isAssign[i]=-1;

}


for(int i=0;i<numberOfBlock;i++){
 	fragmentation[i]=0;

}



for(int i=0;i<numberOfFile; i++){
	int minInd=-1;
	int minValue =10000;

	for(int j=0;j<numberOfBlock;j++){
		if(fileSi2e[i] >=  blockSi2e[j] && isAssign[j]==-1){
			if(minValue < blockSi2e[j]) {
				minValue= blockSi2e[j];
				minInd=j;
			}

		}

	}
	if(minInd !=-1){
		isAssign[minInd]=1;
		fragmentation[minInd] = blockSi2e[minInd] - minValue;

	}

}


printf("\nFile no \t Block No \t Bloack si2e \t Fragmentation\n");

for(int i=0;i<numberOfBlock;i++){

// need to work
   //printf("%d\t  %d\t %d\t %d ",)

}

}
