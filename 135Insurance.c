#include<stdio.h>
#include<conio.h>
#include<string.h>

struct vehicle{
    char TYPE[10];
    int age;
    float value;  
    float premium;
};

float value_factor(float value){
    if(value>=2000000){
        return 1.05;
    }
    else if(value>=1000000){
        return 1.03;
    }
    else{
        return 1;
    }
}

float age_factor(int age){
    if(age>=10){
        return 1.07;
    }
    else if(age>=5){
        return 1.04;
    }
    else{
        return 1.02;
    }
}


float calculate_insurance(int type, int age, float value){
    float Base= (type==1)? 4000 : ((type==2)? 2500 : ((type==3)? 1500 : 0));
    return Base*age_factor(age)*value_factor(value);   
}

void print_insurance(struct vehicle vehicles[]){
    printf("\n%-12s %-4s %-8s %-10s\n","Type","Age","Value","Premium");
    for(int i=0;i<100;i++){
        if(vehicles[i].TYPE[0] == '\0') {
            break;
        }
        printf("%-12s %-4d %-6.2f %-8.2f\n",vehicles[i].TYPE,vehicles[i].age,vehicles[i].value,vehicles[i].premium);
    }
}


int main(){
    struct vehicle vehicles[100];
    int type;
    char key = '1';
    int i = 0;
    do{
        if(i >= 100) {
            printf("No more space for vehicles.\n");
            break;
        }
        printf("\n\nStep 1) Enter:\n\t1- Car\n\t2- Bike/Scooter\n\t3- Bus\n\n\t");
        scanf("%d",&type);
        if(type < 1 || type > 3) {
            printf("Invalid vehicle type. Please enter 1, 2, or 3.\n");
            continue;
        }
        strcpy(vehicles[i].TYPE,(type==1)? "Car" : ((type==2)? "Bike/Scooter" : ((type==3)? "Bus" : 0))); 
        printf("\n\nStep 2) Enter the age of your %s in years: ",vehicles[i].TYPE);
        scanf("%d",&vehicles[i].age);
        printf("\n\nStep 3) Enter the value of your %s in INR: ",vehicles[i].TYPE);
        scanf("%f",&vehicles[i].value);
        vehicles[i].premium = calculate_insurance(type,vehicles[i].age,vehicles[i].value);
        printf("\nThe value of your insurance premium is %.2f INR\n",vehicles[i].premium);
        i++;    
        printf("\nEnter\n\t1- Enter new Car\n\t2- View insurance records\n\t3- Exit the service\n\n\t");
        key = getche();
        if(key == '2') {
            print_insurance(vehicles);
        }
        if(key == '3') {
            printf("\nThank you for using our service!\n ");
            break;
        }
    } while(1);
    return 0;
}