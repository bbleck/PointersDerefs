//
//  main.c
//  PointersDerefs
//
//  Created by Brian on 2/11/19.
//  Copyright © 2019 Brian Bleck. All rights reserved.
//

#include <stdio.h>

int main(void) {
  int x = 10;
  int y = 33;
  int *px = &x;
  
  int **ppint = &px;
  int ***pppint = &ppint;
  int ****ppppint = &pppint;
  
  if(!x || !y || !px || !ppint || !pppint || !ppppint){
    return 1;
  }
  
  printf("x: %d\n", x);
  printf("*x deref: %d\n", *px);
  printf("**x deref: %d\n", **ppint);
  printf("***x deref: %d\n", ***pppint);
  printf("****x deref: %d\n\n", ****ppppint);
  
  ****ppppint = y; //changes the value of x to that of y
  
  printf("x: %d, y: %d\n", x, y);
  printf("*x deref: %d\n", *px);
  printf("**x deref: %d\n", **ppint);
  printf("***x deref: %d\n", ***pppint);
  printf("****x deref: %d\n\n", ****ppppint);
  
  ****ppppint = 10; //changes value of x to 10
  ***ppppint = &y; //changes the first pointer to point at y instead of x
  
  printf("x: %d, y: %d\n", x, y);
  printf("*y deref: %d\n", *px);
  printf("**y deref: %d\n", **ppint);
  printf("***y deref: %d\n", ***pppint);
  printf("****y deref: %d\n\n", ****ppppint);
  
  return 0;
}
