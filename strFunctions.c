#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrlen(char dest[]){
  int ctr = 0;
  while (dest[ctr]){
    ctr++;
  }
  return ctr;
}

int * mystrncpy(char dest[], char src[], int n){
  int ctr;
  for (ctr = 0; ctr < n; ctr++){
    dest[ctr] = src[ctr];
  } 
  return dest;
}

int *mystrcat(char dest[], char src[]){
  int ctr = 0;
  int i = 0;
  while (dest[i]){
    i++;
  }
  while (src[ctr]){
    dest[i] = src[ctr];
    ctr++;
    i++;
  }
  dest[i] = 0;
  return dest;
}

int mystrcmp(char a[], char b[]){
  int ctr = 0;
  while (a[ctr]){
    if (a[ctr] != b[ctr]){
      return a[ctr] - b[ctr];
    }
    else ctr++;
  }
  if (b[ctr]) return 0;
  else return -1;
}

int *mystrchr(char str[], char b){
  int ctr = 0;
  while (str[ctr]){
    if (str[ctr] == b) return str + ctr;
    else ctr++;
  }
  return NULL;
}

int *mystrstr(char str[], char srch[]){
  int ctr = 0;
  while (str[ctr]){
    if (!mystrcmp(str+ctr,srch)){//&str[ctr]
      return str + ctr;
    }
    else ctr++;
  }
  return NULL;
}

int main(){
  char a[] = "abc";
  char b[] = "bc";
  char c = "c";
  char d = "d";
  char empty[] = "";
  printf("API\n");
  printf("%d\n", strncpy(empty));
  printf("Mine\n");
  printf("%d\n", mystrncpy(empty));
  return -1;
}
