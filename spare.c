#include<stdio.h>

int main()
{
    int r = 3;
    int c = 3;
    int nz = 0;
    int A[3][3] = {{1,0,0},{0,2,0},{0,0,3}};
    for(int i =0; i<r;i++){
    for(int j = 0;j<c;j++){
    if(A[i][j]!=0){
        nz++;
        }
    }
}
int row[nz];
int col[nz];
int val[nz];
int k =0;
for(int i =0; i<r;i++){
for(int j = 0;j<c;j++){
if(A[i][j]!=0){
row[k] = i;
col[k] = j;
val[k++] = A[i][j];
}
}
}

printf("Array A:\n");
for(int i =0; i<r;i++){
for(int j = 0;j<c;j++){
printf(" %d,",A[i][j]);

}
printf("\n");
}
printf("\nRow:");
for(int l = 0; l<k;l++){
printf(" %d,", row[l]);

}

printf("\nCol:");
for(int l = 0; l<k;l++){

printf(" %d,",col[l]);

}
printf("\nVal:");
for(int l = 0; l<k;l++){

printf(" %d,",val[l]);
}

return 0;

}