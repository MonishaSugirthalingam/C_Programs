#include <stdio.h>
float level1chargeperunits(float);
float level2chargeperunits(float);
float level3chargeperunits(float);
float level4chargeperunits(float);
float main()
{
    float consumption_units;
    printf("Enter the value of the consumption_units :");
    scanf("%f",&consumption_units);
    if(consumption_units>0 && consumption_units<=200){
        level1chargeperunits(consumption_units);
    }
    else if(consumption_units>200 && consumption_units<=400){
        level2chargeperunits(consumption_units);
    }
    else if(consumption_units>400 && consumption_units<=600){
        level3chargeperunits(consumption_units);
    }
    else {
        level4chargeperunits(consumption_units);
    }

}
float level1chargeperunits(float consumption_units)
{
    float charge;
    charge=consumption_units*0.5;
    printf("Your charge is %f\n",charge);
}
float level2chargeperunits(float consumption_units)
{
    float charge;
    charge=100+(consumption_units*0.65);
    printf("Your charge is %f\n",charge);
}
float level3chargeperunits(float consumption_units)
{
    float charge;
    charge=230+(consumption_units*0.80);
    printf("Your charge is %f\n",charge);
}
float level4chargeperunits(float consumption_units)
{
    float charge;
    charge=390+(consumption_units*1);
    printf("Your charge is %f\n",charge);
}