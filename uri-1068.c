#include <stdio.h>

int main(){
    
    char x[1001];
    
    int i,esq, dir;
    
    while(scanf("%s",&x) != EOF){
        
       esq = 0;
       
       dir = 0;
       
       for(i = 0; x[i] != '\0'; i++){
           
             if(x[i] == '(') esq++;
             
             else if (x[i] == ')'){
                 
                  dir++;
                  
                  if(esq > 0){
                      
                         esq--;
                         
                         dir--;
                  }
             }
       }
       
       if(esq == 0 && dir == 0) printf("correct\n");
       
       else printf("incorrect\n");
    }
    return 0;
}