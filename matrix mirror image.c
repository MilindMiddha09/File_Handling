#include<stdio.h>
#include<stdlib.h>


void function(int m,int n,int a,char arr[][n])
{
    int i,j;
    char arraymir[m][n];
    for (i=0 ; i<m ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            switch(a){
                case 3:
                arraymir[i][j]=arr[(m-1)-i][j];
                printf("%c",arraymir[i][j]);
                break;
                case 2:
                arraymir[i][j]=arr[i][(m-1)-j];
                printf("%c",arraymir[i][j]);
                break;
                case 1:
                arraymir[i][j]=arr[i-(m-1)][j];
                printf("%c",arraymir[i][j]);
                break;
                case 4:
                arraymir[i][j]=arr[i][j-(m-1)];
                printf("%c",arraymir[i][j]);
                break;
                default:
                printf("Input a valid number");
                break;

            }
        }
        printf("\n");
    }
}
int main(){

FILE* name; 
name=fopen("al1-a.txt","r");
int row, col, choice;

fscanf(name,"%d %d %d", &row,&col,&choice);
printf("row=%d, col=%d, choice=%d\n",row,col,choice);

char matrix[row][col];

for(int i=0;i<row;i++){
     for(int j=0;j<col;j++){
        fscanf(name,"%c",&matrix[i][j]);
        
     }
}
function(row,col,choice,matrix);

    return 0;
}
