/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/









#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char array[10000];
    int finalarray[10000];
    printf("Write down your ID number!\n");
    int size = 0;
    char hi;
for(;;size++)
{
	scanf(" %s", array);
if (array[0] == '/'){array[size] = '\0';break;}



    finalarray[size] = atoi(array);
    //printf(" the finalarray is %d \n", finalarray[size]);


}

//printf("size is%d \n",size);
for (int i=0;i<size;i++){
//printf(" final array is %d \n",finalarray[i]);

}





float mean = 0;
for (int i=0;i<size;i++){
    if (finalarray[i]=='\0')break;
//printf("array[i] is %d iteration is %d",finalarray[i],i);
mean = mean+finalarray[i];

}

mean = mean/size;
int temp;
printf("mean is %f",mean);
for (int i=0;i<size;i++){
    for (int j=0;j<size;j++){
        if(finalarray[i]<finalarray[j]){temp = finalarray[i];finalarray[i]=finalarray[j];finalarray[j]=temp;}
    }

}
float median ;
if (size%2 == 1){median = finalarray[size/2];printf(" the median is = %f ", median);}
if (size%2 == 0){median = (finalarray[size/2-1]+finalarray[size/2]);

median = median/2;
    printf(" the median is = %f ", median);
}


    int mode[1000];
    int modenum = 0;
    mode[0] = finalarray[0];
    int count1 = 0;
    int count2 = 1;
    for (int i=0;i<size-1;i++){
        if (finalarray[i] == finalarray[i+1]){count2++;}
        if (finalarray[i] != finalarray[i+1] || i == size-2){
            if (count1<count2){
                //printf(" %d", finalarray[i]);
                count1 = count2;

                for (int j=0;j<modenum;j++){
                    mode[j] = 0;
                }
                mode[0] = finalarray[i];
                modenum=1;

            }
            else if (count1 == count2){mode[modenum] = finalarray[i];modenum++;}
            else{}
            count2 = 1;
        }

    }
    if (modenum ==1){
    printf(" the mode = %d ", mode[0]);}
    if (modenum>1){printf("no mode");}
    for (int i=0;i<size;i++){
    if (finalarray[i]=='\0')break;
//printf(" %d, ",finalarray[i]);


}
        return 0;
}
