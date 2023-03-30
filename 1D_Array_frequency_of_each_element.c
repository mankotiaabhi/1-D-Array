/* Input :
   Number of Elements = 8
   Elements = 1 2 3 3 4 5 5 3
   Output :
   1 | 1
   2 | 1
3 | 3
4 | 1
5 | 2
*/

#include<stdio.h>
int main (){
    int n,count;             //intialize n,count
    scanf("%d",&n);          //take input
    int array[n],frequency[100]; //intialize two array
    for (int i=0;n>i;i++){
        scanf("%d",&array[i]);   // take input for elements
        frequency[i]=-1;         //asign every elements in 2nd array to -1
    }
    for (int i=0;n>i;i++){       
        count = 1;               //intialize count = 1.
        for (int j=i+1;n>j;j++){     // j=i+1,bcz of repeatation
            if (array[i]==array[j]){    //if element arr[i]==arr[j]
                count++;                //then increase count by 1
                frequency[j]=0;         //freq[] is an empty array
            }
        }
    if (frequency[i]!=0){              // element of array is not equal than store 
        frequency[i]=count;            //frequency[i] to count
    }    
    }
    for (int i=0;n>i;i++){                      
        if (frequency[i]!=0){                       //not to repeat same element
        printf("%d | %d\n",array[i],frequency[i]);  //print the  array 1 and arrat 2
        }
    }
    }
