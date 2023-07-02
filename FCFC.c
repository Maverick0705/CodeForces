#include<stdio.h>
using namespace std;

int main()
{
	int p[20],at[20],bt[20],tat[20],ct[20], wt[20];
	int avg_tat = 0, avg_wt = 0;

	int n;
	printf("Enter the number of Processes: \n");
	scanf("%d",&n);

	for(int i = 0; i< n ; i++)
	{	
		printf("Enter Process Number: ");
		scanf("%d",&p[i]);
		printf("\nEnter Arrival Time: ")
		scanf("%d",&at[i]);
		printf("Enter Burst Time: ")
		scanf("%d",&bt[i]);
	}

	for(int i = 0; i<n;i++)
	{
		wt[i+1] = 0;
		for(int j =0; j < i;j++)
		{
			wt[i+1] += wt[j+1];
		}
		
	}
	
	for(int i = 0; i<n;i++)
	{
		tat[i+1] = wt[i+1] + bt[i+1];
		avg_tat += tat[i+1];
	}
	

	printf("\n Process No \t Arrival Time \t Burst Time \t CT \t TAT \t WT");

	for(int i= 1; i<= n ;i++)
	{
		printf("\n %d \t %d \t %d \t %d \t %d \t %d", &p[i],&at[i],&bt[i],&ct[i],&tat[i],&wt[i]);
	}



}