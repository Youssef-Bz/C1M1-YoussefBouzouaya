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
 * @file stats.c 
 * @brief Coursera first assignment
 *
 * 
 *
 * @author Youssef Bouzouaya
 * @date 03/10/2021
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)
void print_statistics(int med,int mean,int max,int min);
void sort_array(unsigned char test[]);
int find_minimum (unsigned char test[]);
int find_maximum (unsigned char test[]);
int find_mean( unsigned char test[]);
int find_median(unsigned char sorted_array[]);
void print_array(unsigned char test[]);



void main(){ 


unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
																																																																													
unsigned char sorted_array[SIZE]; 	

int max =0;
		
int min=0;

int mean=0;

int med=0;

printf("Unsorted array \n");

 
print_array(test);

 
sort_array(test);

 
printf("\nSorted array \n");

 
print_array(test);

 
printf("\n");

 
max = find_maximum(test);

 
min = find_minimum(test);

 
med = find_median(test);

 
mean = find_mean(test);

print_statistics(med, min, mean , med);



}




 






