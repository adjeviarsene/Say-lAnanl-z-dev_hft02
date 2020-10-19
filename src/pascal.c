#include"pascal.h"

void getwanted_line(int setnumber){
    int myList[setnumber][setnumber];
        for(int i=0;i<setnumber;i++){
            for(int j=0;j<=i;j++){
                if(j==0 || j==i){
                   *(*(myList+ i) +j)=1;
            }
            else{
                 *(*(myList + i) +j)=*(*(myList+ i-1) +j-1)+ *(*(myList+ i-1) +j);
            }
            if(i==setnumber-1){
                printf("%4d",*(*(myList+i) +j));
            }
        }
     }
}


