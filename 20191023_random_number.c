#include<stdio.h>  //載入標頭檔
#include<stdlib.h>  //rand() 宣告在stdlib.h

//method 1
/*rand()-->每次叫都會回傳一個隨機產生的變數*/
/*但是rand()產生的序列是固定的*/

int main() {
	int n;
	for (n=1; n<2; n++){
		printf("%d\n", rand());
	}
	return 0;
}

//method 2
/*srand()-->初始化亂數產生器，給的整數會決定rand的數列*/
/*time()-->取得系統時間做為srand()參數*/
#include <time.h>
int main() {
	srand(time(0));          
	int n;
	for (n=1; n<2; n++){
		printf("%d\n", rand());
	}
	return 0;
}
