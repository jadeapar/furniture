#include <stdio.h>
#define SOFAFIRMONTH 60
#define LOVESEATFIRMONTH 45
#define POSTBEDFIRMONTH 55
#define DRESSERFIRMONTH 28
#define KITCHTABFIRMONTH 35
#define SOFAMONTHLY 45
#define LOVESEATMONTHLY 30
#define POSTBEDMONTHLY 38
#define DRESSERMONTHLY 25
#define KITCHTABMONTHLY 20
#define SOFAYEARLY 450
#define LOVESEATYEARLY 280
#define POSTBEDYEARLY 350
#define DRESSERYEARLY 200
#define KITCHTABYEARLY 220
int main(){
    int months,choice,years,left,finalcost;
    printf("Please select from the following menu: 1. Sofa, 2. Loveseat, 3. 4 Post Bed, 4. Dresser 5. Kitchen Table");
    printf("Enter furniture selection: \n");
    scanf("%d",&choice);
    if (choice>5 || choice<=0){
                printf("Invalid input. The input should be in the range of 1 to 5.\n");
            }
            else{
    printf ("Enter months rented: \n");
    scanf("%d",&months);
    years=months/12;
    left=months%12;
    switch (choice){
        case 1:
            if (months<=12){
            finalcost=SOFAFIRMONTH+((months-1)*SOFAMONTHLY);
            if (finalcost>=SOFAYEARLY){
                finalcost=SOFAYEARLY;
            }
            else{
                finalcost=SOFAFIRMONTH+((months-1)*SOFAMONTHLY);
            }
            }
            else {
            finalcost=(SOFAYEARLY*years )+(left*SOFAMONTHLY);
            }
            printf ("Amount due ($): %d\n",finalcost);
            break;
        case 2:
            if (months<=12){
            finalcost=LOVESEATFIRMONTH+((months-1)*LOVESEATMONTHLY);
            if (finalcost>=LOVESEATYEARLY){
                finalcost=LOVESEATYEARLY;
            }
            else{
                finalcost=LOVESEATFIRMONTH+((months-1)*LOVESEATMONTHLY);
            }
            }
            else {
            finalcost=(LOVESEATYEARLY*years )+(left*LOVESEATMONTHLY);
            }
            printf ("Amount due ($): %d\n",finalcost);
            break;
        case 3:
            if (months<=12){
            finalcost=POSTBEDFIRMONTH+((months-1)*POSTBEDMONTHLY);
            if (finalcost>=POSTBEDYEARLY){
                finalcost=POSTBEDYEARLY;
            }
            else{
                finalcost=POSTBEDFIRMONTH+((months-1)*POSTBEDMONTHLY);
            }
            }
            else {
            finalcost=(POSTBEDYEARLY*years )+(left*POSTBEDMONTHLY);
            }
            printf ("Amount due ($): %d\n",finalcost);
            break;
        case 4:
            if (months<=12){
            finalcost=DRESSERFIRMONTH+((months-1)*DRESSERMONTHLY);
            if (finalcost>=DRESSERYEARLY){
                finalcost=DRESSERYEARLY;
            }
            else{
                finalcost=DRESSERFIRMONTH+((months-1)*DRESSERMONTHLY);
            }
            }
            else {
            finalcost=(DRESSERYEARLY*years )+(left*DRESSERMONTHLY);
            }
            printf ("Amount due ($): %d\n",finalcost);
            break;
        case 5:
            if (months<=12){
            finalcost=KITCHTABFIRMONTH+((months-1)*KITCHTABMONTHLY);
            if (finalcost>=KITCHTABYEARLY){
                finalcost=KITCHTABYEARLY;
            }
            else{
                finalcost=KITCHTABFIRMONTH+((months-1)*KITCHTABMONTHLY);
            }
            }
            else {
            finalcost=(KITCHTABYEARLY*years )+(left*KITCHTABMONTHLY);
            }
            printf ("Amount due ($): %d\n",finalcost);
            break;
    }
	return 0;
}
}
