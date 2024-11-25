#include <stdio.h>

int main() {
    int i, j, count;
   int start, end;
   int so_nguoi_dung_nhap;
	printf("ban hay nhap mot so bat ky tu 1 den 10 nao ! \n");
	scanf("nhap so bat ky tu 0 den 10");

   start = 2, end = 10;

   printf("In bang cuu chuong :\n");
   for(i = start; i <= end; i++) {
      count = i;

      for(j = 1; j <= 10; j++) {
         printf(" %3d", count*j);
      }

      printf("\n");
   }

   return 0;
}
