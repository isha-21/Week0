# include<stdio.h>
# include<conio.h>
# include<stdlib.h>
int main()
{
unsigned int a[20];
int i,n,search,found=0;
FILE *fp,*fp1;
int cases = 0;

fp = fopen("input.txt","r");
            if ( fp == NULL ) {
		printf( "Error- Unable to open file"  );
		exit(1);
	}
	else
    {
        while (fscanf(fp, "%d", &n ) != EOF ) {
                int found = 0;
                int comparisions = 0;
                cases = cases + 1;
printf("INPUT CASE #%d NO OF ELEMENTS = %d\n",cases,n);
printf("Enter array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter element to search");
scanf("%d",&search);
for(i=0;i<n;i++)
{comparisions = comparisions + 1;
if(a[i] == search)
{

printf("Element %d is found at location %d\n",search,i+1);
found = 1;
}
}
if (found == 0)
printf("elt not found\n");
printf("TEST CASE NO - %d\tNO of array elements - %d\t No of comparisions - %d\n",cases,n,comparisions);
fp1 = fopen("output.txt", "a+");
fprintf(fp1,"TEST CASE NO - %d\tNO of array elements - %d\t No of comparisions - %d\n",cases,n,comparisions);
    }}
getch();
fclose(fp);
fclose(fp1);
return 0;
}
