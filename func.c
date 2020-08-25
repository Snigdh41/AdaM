//sorting array function using selection sort method
int *Sorting(int *array,int size){
        int i,j,id,tmp;
        for(i=0;i<size-1;i++){
                id=i;
                for(j=i+1;j<size;j++){
                        if(array[j]<array[id])
                                id=j;
                }
        tmp=array[id];
        array[id]=array[i];
        array[i]=tmp;
        }
        return array;
}

//mean using standard calculation
float Mean(int *array,int size){
        int i;
        float mean=0.0f;
        for(i=0;i<size;i++)
                mean=mean+array[i];
        mean=mean/size;
        return mean;
}

//mode calculation standard method
int Mode(int *array,int size){
        int max_occur_val=0,max_occur_count=0,i,j;
		array = Sorting(array,size);
        for(i=0;i<size;i++){
                int counter=0;
                for(j=0;j<size;j++){
                        if(array[j]==array[i])
                                counter++;
                }
                if(counter>max_occur_count){
                        max_occur_count=counter;
                        max_occur_val=array[i];
                }
        }
        return max_occur_val;
}

//median calculation using standard method
float Median(int *array,int size){
        float median=0.0f;
		array = Sorting(array,size);
        if(size%2==0)
                median=(array[(size-1)/2]+array[size/2])/2.0;
        else
                median=array[size/2];
        return median;
}

//calculate maximum element linear search
int Maximum(int *array,int size){
        int max=array[0],i;
        for(i=1;i<size;i++){
                if(max<array[i])
                        max=array[i];
        }
        return max;
}

//calculate minimum element linear search
int Minimum(int *array,int size){
        int min = array[0],i;
        for(i=1;i<size;i++){
                if(min>array[i])
                        min=array[i];
        }
        return min;
}

//display function
void Display(int *array,int size){
        int i=0;
        printf("Array:\n");
        for(i=0;i<size;i++)
                printf("%d ",array[i]);
		printf("\n");
}
