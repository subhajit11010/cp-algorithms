//This program will print any array in increasing order
#include <stdio.h>
int main(){
    int n;
    //enter any integer
    printf("Enter any +ve integer: \n");
    scanf("%d\n", &n);
    int SC[n];
    int i = 0;
    while(i != n-1){
        //taking integers as input
        scanf("%d ", (SC + i));
        printf("\n");
        i++;
    }
        //applying algorithm
        for(int i = 0; i < n; i++){
            if(i < n-1){
                for(int j = i+1; j < n; j++){
                     if(SC[i] > SC[j]){
        	            int i_term = SC[i];
        	            SC[i] = SC[j];
        	            SC[j] = i_term;
    	             }
                }   
            }
	        
        }
    	    for(int i = 0; i < n; i++){
              //printing the array in increasing order
    	        printf("%d ", SC[i]);
    	    }
