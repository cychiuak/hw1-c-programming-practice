/*
 ============================================================================
 Name        : roboticshw1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

#include <string.h>

void decimalbi(char array[],int size){
	int finalnum[1000];
	int decimal;
	char converter;
	for (int i=0;i<size;i++){
		converter = array[size];
		decimal = decimal + atoi(&converter);
		decimal = decimal*10;
	}

	int i;
	for( i=0;decimal>0;i++)
	{
	finalnum[i]=decimal%2;
	decimal=decimal/2;
	}
	printf("\nBinary of Given Number is=");
	for(i=i-1;i>=0;i--)
	{
	printf("%d",finalnum[i]);
	}

}

void decimalbinary(int decimal,int size){
	int finalnum[1000];

	int i;
	for( i=0;decimal>0;i++)
	{
	finalnum[i]=decimal%2;
	decimal=decimal/2;
	}
	printf("\nBinary of Given Number is=");
	for(i=i-1;i>=0;i--)
	{
	printf("%d",finalnum[i]);
	}

}
void decimaltohex(int decimalnum){
	 long  quotient, remainder;
	    int i, j = 0;
	    char hexadecimalnum[100];


	    quotient = decimalnum;

	    while (quotient != 0)
	    {
	        remainder = quotient % 16;
	        if (remainder < 10)
	            hexadecimalnum[j++] = 48 + remainder;
	        else
	            hexadecimalnum[j++] = 55 + remainder;
	        quotient = quotient / 16;
	    }

	    // display integer into character
	    for (i = j; i >= 0; i--)
	            printf("%c", hexadecimalnum[i]);
}
int main()
{
    char hex[100];
    printf("Enter any  number: ");
    scanf(" %s",hex);
    for(int i=0; hex[i]!='\0'; i++)
    {
	if (hex[i]>'F' && hex[i]<'a' ){printf("error!"); return 0;}
	if (hex[i]>'f'  ){printf("error!"); return 0;}
	if (hex[i]>'9' && hex[i]<'A' ){printf("error!"); return 0;}
	if (hex[i]<'0'  ){printf("error!"); return 0;}}
    long long decimal, place;
    int i = 0, val, len;
    len = strlen(hex);
    len--;
    int currentsys;
    printf("current system?");
    scanf(" %d",&currentsys);
    printf("target system?");
    int targetsys;
    scanf(" %d",&targetsys);



    decimal = 0;
    place = 1;

    /* Input hexadecimal number from user */


    /* Find the length of total number of hex digit */

    /*
     * Iterate over each hex digit
     */
    if (currentsys == 16 && targetsys == 10){
    for(i=0; hex[i]!='\0'; i++)
    {


        /* Find the decimal representation of hex[i] */
        if(hex[i]>='0' && hex[i]<='9')
        {
            val = hex[i] - 48;
        }
        else if(hex[i]>='a' && hex[i]<='f')
        {
            val = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            val = hex[i] - 65 + 10;
        }
        for (int i=0;i<len;i++){
            val = val*16;
        }
        decimal += val;
        len--;
    }

    printf("Hexadecimal number = %s\n", hex);
    printf("Decimal number = %lld", decimal);
    }


    if (currentsys == 16 && targetsys == 2){
    	int size = len;
        for(i=0; hex[i]!='\0'; i++)
        {

            /* Find the decimal representation of hex[i] */
            if(hex[i]>='0' && hex[i]<='9')
            {
                val = hex[i] - 48;
            }
            else if(hex[i]>='a' && hex[i]<='f')
            {
                val = hex[i] - 97 + 10;
            }
            else if(hex[i]>='A' && hex[i]<='F')
            {
                val = hex[i] - 65 + 10;
            }
            for (int i=0;i<len;i++){
                val = val*16;
            }
            decimal += val;
            len--;
        }
        //printf(" %d", &decimal);
        decimalbinary(decimal,size);

        printf("Hexadecimal number = %s\n", hex);
        printf("Decimal number = %lld", decimal);

    }
    if (currentsys == 10 && targetsys == 2){
    	int size = len;
        for(i=0; hex[i]!='\0'; i++)
        {

            /* Find the decimal representation of hex[i] */
            if(hex[i]>='0' && hex[i]<='9')
            {
                val = hex[i] - 48;
            }
            else if(hex[i]>='a' && hex[i]<='f')
            {
                val = hex[i] - 97 + 10;
            }
            else if(hex[i]>='A' && hex[i]<='F')
            {
                val = hex[i] - 65 + 10;
            }
            for (int i=0;i<len;i++){
                val = val*10;
            }
            decimal += val;
            len--;
        }
        //printf(" %d", &decimal);
    	decimalbinary(decimal,size);
    }
    if (currentsys == 10 && targetsys == 16){
    	int size = len;
        for(i=0; hex[i]!='\0'; i++)
        {

            /* Find the decimal representation of hex[i] */
            if(hex[i]>='0' && hex[i]<='9')
            {
                val = hex[i] - 48;
            }
            else if(hex[i]>='a' && hex[i]<='f')
            {
                val = hex[i] - 97 + 10;
            }
            else if(hex[i]>='A' && hex[i]<='F')
            {
                val = hex[i] - 65 + 10;
            }
            for (int i=0;i<len;i++){
                val = val*10;
            }
            decimal += val;
            len--;
        }
        decimaltohex(decimal);
    }
    if (currentsys == 2 && targetsys == 16){

    	int decimal = 0;
    	int power = 1;
    	for (int i=len;i>=0;i--){
    		//printf(" %c",hex[i]);
    		if (hex[i] != '1'&&hex[i]!='0'){printf("error!");return 0;}
    		if (hex[i] == '1' )decimal = decimal + power;
    		power = power*2;
        	//printf("%d",power);
    	}
    	//printf("%d",decimal);
        decimaltohex(decimal);
    }
    if (currentsys == 2 && targetsys == 10){
    	int decimal = 0;
    	int power = 1;
    	for (int i=len;i>=0;i--){
    		//printf(" %c",hex[i]);
    		if (hex[i] != '1'&&hex[i]!='0'){printf("error!");return 0;}
    		if (hex[i] == '1' )decimal = decimal + power;
    		power = power*2;
        	//printf("%d",power);
    	}
    	printf("the decimal number is %d", decimal);
    }
    return 0;
}
