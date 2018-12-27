#include <stdio.h>

int main(){
  int t;
  printf("masukan temperatur zat :");
  scanf("%d",&t );

  if (t<=0) {
    /* code */printf("zat beku\n");
  } else if (t>=0) {
    /* code */printf("zat tidak beku\n");
  }
}
