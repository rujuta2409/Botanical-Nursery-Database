#include<stdio.h>

struct plants{
    char plant_name[20];
    char plant_species[20];
    int plant_quantity;
    float plant_price;
};

int main()
{
    struct plants pln[20],temp;
    int i,j;
    for(i=0;i<3;i++)
    {
        printf("\nEnter Plant name:");
        scanf("%s",pln[i].plant_name);
        
        printf("Enter Species name:");
        scanf("%s",pln[i].plant_species);
        
        printf("Enter Quantity of plants available:");
        scanf("%d",&pln[i].plant_quantity);
        
        printf("Enter Price:");
        scanf("%f",&pln[i].plant_price);
    }
    for (i=0;i<3;i++)
    {
        printf("\nPlant name:%s\n",pln[i].plant_name);
        printf("\nSpecies name:%s\n",pln[i].plant_species);
        printf("\nQuantity available:%d\n",pln[i].plant_quantity);
        printf("\nPrice:%f\n",pln[i].plant_price);
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
        if(pln[i].plant_quantity>pln[j].plant_quantity) 
        {
            temp=pln[i];
            pln[i]=pln[j];
            pln[j]=temp;
        }
        }
    }
    printf("\n----Sorted Plants Details(by Quantity available)----\n");
    for(i=0;i<3;i++)
    {
        printf("\nPlant name:%s\n",pln[i].plant_name);
        printf("\nSpecies name:%s\n",pln[i].plant_species);
        printf("\nPrice:%f\n",pln[i].plant_price);
        printf("\nQuantity available:%d\n",pln[i].plant_quantity);
    }
    return 0;
    }
