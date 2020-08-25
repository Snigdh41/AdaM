//This file contains the headers used in code.
#ifndef ARRAYFUNC_H
#define ARRAYFUNC_H
	//funcn to sort the input array
        int *Sorting(int *array,int size);
        //funcn to calculate mean of input array
        float Mean(int *array,int size);
        //funcn to calculate mode of input array
        int Mode(int *array,int size);
        //funcn to calculate median of input array
        float Median(int *array,int size);
        //funcn to calculate the maximum value in input array
        int Maximum(int *array,int size);
        //funcn to calculate the minimum value from input array
        int Minimum(int *array,int size);
        //display function to print array with the changes made
        void Display(int *array,int size);
#endif
