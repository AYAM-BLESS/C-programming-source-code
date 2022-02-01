#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
int queue[256];
int count=0;
void insertIntoQueue(int x){
if(count==256){
fprintf(stderr, "No more space in the queue\n");
return;
}
queue[count]=x;
count++;
}
//1 2 3 5
//2 3 5
 int removeFromQueue(){
if(count==0){
fprintf(stderr, "No element to extract from queue\n");
return -1;
}
int res= queue[0];
int i;
for(i=0; i<count-1; i++){
queue[i]=queue[i+1];
}
count--;
return res;
}
int main(int argc, char*argv[])
{
 insertIntoQueue (1);
 insertIntoQueue (2);
 insertIntoQueue (3);
 insertIntoQueue (5);
  int i;
int localcount=count;
  for(i=0; i<localcount; i++){
  printf("%d", removeFromQueue());
}
	return 0;
}

    