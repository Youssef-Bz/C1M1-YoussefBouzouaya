/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h
 * 
 *
 * 
 *
 * Youssef Bouzouaya	
 * @03/10/2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__
#define SIZE (40)

/* Add Your Declarations and Function Comments here */ 




void print_statistics(int med,int mean ,int max,int min ){
printf("Median = %i \n Mean = %i \n Maximum = %i \n Minimum = %i  \n",med,mean,max,min);
}

/** 
*@Brief Print statistics
*This function prints calculated statistics
*
*@param test[] array of size "TEST"
*
*@return VOID
*/

void sort_array(unsigned char test[]){
int i;
for ( i=0; i<SIZE; i++)
	{

        int j;
	for ( j=0; j< SIZE, j++;)
		{
		if(test[j]>test[i])
			{		
 			int aux;
			aux=test[j];
			test[j]=test[i];
			test[i]=aux;

                        }

                 }


        }
}

/** 
*@Brief Sort the array from largest to smallest value
*
*
*@param test[] array of size "TEST"
*
*@return VOID
*/

void print_array(unsigned char test[])	{
int i;
	for ( i=0; i< SIZE;i++){
	printf("Test[%i]=%i\n", test[i],i);

	}
}
 
/** 
*@Brief Print the array
*
*
*@param test[] array of size "TEST"
*
*@return VOID
*/


int find_minimum (unsigned char test[]){

int i;
int min=0;
for ( i=0; i<SIZE; i++){
	if(min<test[i]){
	min=test[i];
	 }
}
return min;
} 
/** 
*@Brief Calculate maximum
*
*
*@param test[] array of size "TEST"
*
*@return maxium
*/

int find_maximum (unsigned char test[]){

int i;      
double max;       
for (i=0; i<SIZE; i++){
	if(test[i]>test[i+1]){
	max=test[i];
	}
}
return max;
}
/** 
*@Brief calculate minimum
*
*
*@param test[] array of size "TEST"
*
*@return minimum
*/

int find_median(unsigned char sorted_array[]){

int i = 0;
int med1=0;
if(SIZE%2==0){ med1=sorted_array[SIZE/2] + sorted_array[(SIZE/2)-1];}
else { med1= sorted_array[(SIZE-2)/2];}
int med;
med=med1;
return med;

}

/** 
*@Brief Calculate median
*
*
*@param test[] array of size "TEST"
*
*@return median
*/

int find_mean( unsigned char test[]){

int i;
int mean1;
for ( i=0; i<SIZE; i++){
	mean1=mean1+test[i];
}

int mean;
mean=mean1/(SIZE+1);
return mean;
}

/** 
*@Brief Calculate mean
*
*
*@param test[] array of size "TEST"
*
*@return mean
*/



#endif /* __STATS_H__ */
