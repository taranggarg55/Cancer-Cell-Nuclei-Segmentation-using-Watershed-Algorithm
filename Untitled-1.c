#include <stdio.h>
int main()
 {
int i, n, master, clocks[n][2], nh=0, nm=0, nclocks[n][2];
printf("How many clocks are there?: ");
scanf("%d",&n);
printf("The master clock is (any clock from 0 to n-1): ");
scanf("%d",&master);
for(i=0;i<n;i++)
 {
if(i==master)
 {
printf("\nThe time at master clock in hours is: ");
scanf("%d", &clocks[i][0]);
printf("\nThe time at master clock in minutes is: ");
scanf("%d",&clocks[i][1]);
 }
else
 {
printf("\nThe time at clock %d in hours is: ",i);
scanf("%d", &clocks[i][0]);
printf("\nThe time at clock %d in minutes is: ",i);
scanf("%d",&clocks[i][1]);
 }
 }
for(i=0;i<n;i++)
 {
nh+=clocks[i][0];
 nm+=clocks[i][1];
 }
nm=(int)(nm/n);
 if(nm>60)
 {
 nm%=nm;
 }
 nh=(int)(nh/n)+(nm/60);
for(i=0;i<n;i++)
 {
nclocks[i][0]=nh;
nclocks[i][1]=nm;
 }
printf("\nThe updated time at all the clocks is %d hours and %d minutes.",nh,nm);
return 0;
}

