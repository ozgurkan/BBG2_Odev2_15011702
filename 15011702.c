
#include <stdio.h>

int main(){
    int satir,sutun;
    int i,j, row, col,value=1;
   printf("satir boyutu giriniz : ");
    scanf("%d", &satir);
    printf("sutun boyutu giriniz : ");
    scanf("%d", &sutun);

     int a[satir][sutun];
     for( i=0;i<satir;++i){
        for( j=0;j<sutun;++j)
            {
                a[i][j]=0;
            }
    }
row = col = 0;
int ilksatir=0,ilksutun=0,sonsutun=sutun,sonsatir=satir;
int k=0,l=0;

                       do{

                        for(i=ilksutun;i<sonsutun-l;i++){
                                    a[row][col++] = '*';//RIGHT
                                }
                                col--;
                                row++;
                       for(i=ilksatir;i<sonsatir-1;++i){
                                a[row++][col] = '*';//DOWN
                            }
                                row--;
                                col--;

                        for(i=sonsutun-1;i>ilksutun+k;--i){
                                a[row][col--] = '*';//LEFT
                            }
                                col++;


                        for(i=sonsatir;i>ilksatir+2;--i){
                                a[row--][col] = '*';//UP
                            }
                        col++;
                        row++;
                        ilksutun=ilksutun+1;
                        sonsutun=sonsutun-2;
                        ilksatir=ilksatir+2;
                        sonsatir=sonsatir-2;
                        k++;
                        if(i>2){
                            l++;
                        }
}while(ilksutun<sonsutun && ilksatir<sonsatir);

    for( i=0;i<satir;++i){
        for( j=0;j<sutun;++j)
            printf("%3c ", a[i][j]);
        printf("\n");
    }

    return 0;
}
