#include<stdio.h>
#include<unistd.h>
int main(){
    int TotalRP=0, Total_R_need=0,i,Resources,Processes;
    printf("The Number of resources available :- ");
    scanf("%d", &Resources);
    printf("The number of processes :- ");
    scanf("%d\n", &Processes);
    TotalRP = Resources + Processes;
    for (i = 0; i < Processes; ++i)
    {
        int Resouces_need;
        printf("Enter the number resources you need :- ");
        scanf("%d", &Resouces_need);
        Total_R_need += Resouces_need;
		if((Resouces_need > Resources) || (Total_R_need > TotalRP))
        {
            printf("\n\nSystem is Not in Safe state,\n");
            printf("As the required number of resources is more than the total number of resources available.\n");
            printf("Process is terminating\n\n");
            return 0;
        }
        else if(Resouces_need < 1)
        {
            printf("System is Not in Safe state,\n");
            printf("As entered number is less then 1.\n");
            return 0;
        }
        else
        {
            Resources = Resources - Resouces_need;
            printf("\nResources allocated successfully \n");
            printf("The system is in safe state.\n");
            Resources = Resources + Resouces_need;
            printf("Resources allocated successfully\n\n");
        }
    }
}
