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
 * @brief week1 Applicaion Assignment
 *
 * Coursera- Embedded Software- Week1 Application Assignment
 *
 * @author Vignesh Pai
 * @date 9/14/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints the statistics of an array
 *
 * This function prints the statistics of an array including minimum,
 * maximum, mean, median
 *
 * @param targetArray- An unsigned char pointer to a n-element data array
 * @param length- An unsigned integer for the size of the array
 */

void print_statistics(unsigned char *targetArray, unsigned int length);

/**
 * @brief Prints the array on the screen
 *
 * This function prints the array of given size on the screen
 *
 * @param targetArray - An unsigned char pointer to a n-element data array
 * @param length- An unsigned integer for the size of the array
 */

void print_array(unsigned char *targetArray, unsigned int length);

/**
 * @brief returns median value of the given array
 *
 * This function returns the median value of the given array
 *
 * @param targetArray- An unsigned char pointer to a n-element data array
 * @param length- An unsigned integer for the size of the array
 *
 * @return Array median value
 */

unsigned char find_median(unsigned char *targetArray, unsigned int length);

/**
 * @brief returns mean value of the given array
 *
 * THis function returns the mean value of the given array
 *
 * @param targetArray- An unsigned char pointer to a n-element data array
 * @param length- An unsigned integer for the size of the array
 *
 * @return Array mean value
 */

unsigned char find_mean(unsigned char *targetArray, unsigned int length);

/**
 * brief return maximum value of the given array
 *
 * This function returns the maximum value of the given array
 *
 * @param targetArray- An unsigned char pointer to a n-element data array
 * @param length- AN unsigned integer for the size of the array
 *
 * @return Array maximum value
 */

unsigned char find_maximum(unsigned char *targetArray, unsigned int length);

/**
 * @brief returns minimum value of the given array
 *
 * This function returns the minimum value of the given array
 *
 * @param targetArray- An unsigned char pointer to a n-element data array
 * @param length- An unsigned integer for the size of the array
 *
 * @return Array minimum value
 */

unsigned char find_minimum(unsigned char *targetArray, unsigned int length);

/**
 * @brief sorts the array from larget to smallest
 *
 * Given an array of data and a length, this function sorts the array from larget to smallest
 *
 * @param targetArray- An unsigned char pointer to a n-element data array
 * @param length- An unsigned integer for the size of the array
 */

void sort_array(unsigned char *targetArray, unsigned int length);


#endif /* __STATS_H__ */
