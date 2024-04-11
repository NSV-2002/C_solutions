#include<stdio.h>
void main()
{
  int radius,cube;
  float volume ;
  const float pi =3.14;
  printf("Enter the radius of sphere :");
  scanf("%d",&radius);
  cube=(radius*radius*radius);
  volume = ((1.333333)* 3.14)* cube;
  printf("The volume of sphere is :%f",volume);
}