#include<stdio.h>  //載入標頭檔
#include<stdlib.h>

int main() {
	int i, j;                             /*定義兩變數i, j */
	for (i=1;i<10;i++){                   /*給i起始值，執行條件，變數處理*/
		for (j=1;j<10;j++){
			printf ("%5d" ,i*j );             /*輸出格式，填入變數*/
		}
		printf ("\n");
	}
	return 0;
}
