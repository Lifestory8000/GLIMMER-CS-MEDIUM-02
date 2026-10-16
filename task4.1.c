#include <stdio.h>
int plus(int a[], int b[], int c[]){
    if(a[0]==1 || b[0]==1){
        return 0;
    }
    c[0]=0;
    int suma=0, sumb=0;
    int m=0;
    int taila=0, tailb=0, tailc=0;
    for(int i=4; 0<i; i--){
        suma+=a[i]*(1<<m);
        sumb+=b[i]*(1<<m);
        m++;
    }
    if(suma-sumb==0){
        m=0;
    for(int i=7; 4<i; i--){
        taila+=a[i]*(1<<m);
        tailb+=b[i]*(1<<m);
        m++;
    }
    taila+=(1<<3);
    tailb+=(1<<3);
    tailc=taila+tailb;
    if(tailc & (1<<4)){
        tailc>>=1;
        tailc-=(1<<3);
        suma++;
        m=3;
        for(int i=1; i<5; i++){
            c[i]=(suma >> m--) & 1;
        }
        m=2;
        for(int i=5; i<8; i++){
            c[i]=(tailc >> m--) & 1;
        }
        return 1;
    }   
    }
    int x=0;
    if(suma>sumb){
        x=suma-sumb;
        m=0;
    for(int i=7; 4<i; i--){
        taila+=a[i]*(1<<m);
        tailb+=b[i]*(1<<m);
        m++;
    }
    tailb+=(1<<3);
    tailb>>=x;
    taila+=(1<<3);
    tailc=taila+tailb;
    if(tailc & (1<<4)){
        tailc>>=1;
        tailc-=(1<<3);
        suma++;
        m=3;
        for(int i=1; i<5; i++){
            c[i]=(suma >> m--) & 1;;
        }
        m=2;
        for(int i=5; i<8; i++){
            c[i]=(tailc >> m--) & 1;
        }
        return 1;
    } 
    else{
        tailc-=(1<<3);
        m=3;
    for(int i=1; i<5; i++) c[i]=(suma >> m--) & 1;
    m=2;
    for(int i=5; i<8; i++) c[i]=(tailc >> m--) & 1;
    return 1;
    }    
    }
if(suma<sumb){
        x=sumb-suma;
        m=0;
    for(int i=7; 4<i; i--){
        taila+=a[i]*(1<<m);
        tailb+=b[i]*(1<<m);
        m++;
    }
    taila+=(1<<3);
    taila>>=x;
    tailb+=(1<<3);
    tailc=taila+tailb;
    if(tailc & (1<<4)){
        tailc>>=1;
        tailc-=(1<<3);
        sumb++;
        m=3;
        for(int i=1; i<5; i++){
            c[i]=(sumb >> m--) & 1;;
        }
        m=2;
        for(int i=5; i<8; i++){
            c[i]=(tailc >> m--) & 1;
        }
        return 1;
    } 
    else{
        tailc-=(1<<3);
        m=3;
    for(int i=1; i<5; i++) c[i]=(sumb >> m--) & 1;
    m=2;
    for(int i=5; i<8; i++) c[i]=(tailc >> m--) & 1;
    return 1;
    }  
    }
    return 0;
    }



int main(){
    char A[9];
    char B[9];
    int c[8]={0};
    printf("Enter 2 Eight-bit binary floating-point number:");
    scanf("%s %s",A ,B);
    int a[8];
    for (int i = 0; i < 8; i++) {
    a[i] = A[i] - '0';
}
    int b[8];
    for (int i = 0; i < 8; i++) {
    b[i] = B[i] - '0';
}
    if(plus(a, b, c)){
        for(int i=0; i<8; i++){
            printf("%d", c[i]);
        }
    }
    else{
        printf("error");
    }
    return 0;
}