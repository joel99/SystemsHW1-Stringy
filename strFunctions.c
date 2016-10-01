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
  if (!b[ctr]) return 0;
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

void reset(char *a, char *b, char c, char d, char *empty){
  strcpy(a,"abc");
  strcpy(b,"bc");
  strcpy(empty, "");
}

int main(){

 char a[256];
 char b[256];
 char c;
 char d;
 char empty[1];

 reset(a,b,c,d,empty);
 /*
  printf("testing mystrlen\n");
  printf("API\n");
  printf("%d\n", strlen(a));
  printf("Mine\n");
  printf("%d\n", mystrlen(a));

  reset();

  printf("testing mystrcpy\n");
  printf("API\n");
  printf("%s\n", strncpy(a, b, 0));

  reset();
  printf("Mine\n");
  printf("%s\n", mystrncpy(a, b, 0));
  
  reset();

  printf("testing mystrcat\n");
  printf("API\n");
  printf("%s\n", strcat(b,a));
  reset();
  printf("Mine\n");
  printf("%s\n", mystrcat(b,a));
 */
  reset(a,b,c,d,empty); 
  printf("testing mystrcmp\n");
  printf("API\n");
  printf("Comparing %s and %s\n", b, a);
  printf("%d\n", strcmp(b,a));
  reset(a,b,c,d,empty);
  printf("Mine\n");
  printf("%d\n", mystrcmp(b,a));
  
  reset(a,b,c,d,empty); 
  printf("testing mystrchr\n");
  printf("API\n");
  //c = 'c';
  //d = 'd';

  char* pointer = strchr(a,100);
  if (pointer == NULL)
   printf("it's null\n");
  else
    printf("it's not null\n");
  
  printf("Mine\n");
  pointer = mystrchr(a,100);
  if (pointer == NULL)
    printf("null\n");
  else
    printf("it's not null\n");
  //printf("%d\n", mystrchr("abc",'d'));

  
  printf("testing mystrstr\n");
  printf("API\n");

  pointer = strstr(a, b);
  if (pointer == NULL)
    printf("it's null\n");
  else
    printf("%s\n", pointer);
  printf("Mine\n");
  pointer = mystrstr(a,b);
  if (pointer == NULL)
    printf("it's null\n");
  else
    printf("%s\n", pointer);
  return 0;
}
