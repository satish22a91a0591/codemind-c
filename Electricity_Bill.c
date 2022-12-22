#include<stdio.h>
int main()
{
    int u;
    scanf("%d",&u);
    if(u<200)
    {
        printf("Units Consumed: %d
",u);
        float c=1.20,surcharge;
        printf("Cost per Unit: %.2f
",c);
        float bill=c*u;
        printf("Bill: %.2f
",bill);
        if(bill>400)
        {
            surcharge=0.15*bill;
         printf("Surcharge: %.2f
",surcharge);   
        }
        else
        {
            surcharge=0.00;
            printf("Surcharge: %.2f
",surcharge);
        }
        printf("Total Amount: %.2f
",surcharge+bill);
    }
    else if(u>199&&u<400)
    {
        printf("Units Consumed: %d
",u);
        float c=1.40,surcharge;
        printf("Cost per Unit: %.2f
",c);
        float bill=c*u;
        printf("Bill: %.2f
",bill);
        if(bill>400)
        {
            surcharge=0.15*bill;
         printf("Surcharge: %.2f
",surcharge);   
        }
        else
        {
            surcharge=0.00;
            printf("Surcharge: %.2f
",surcharge);
        }
        printf("Total Amount: %.2f
",surcharge+bill);
    }
    else if(u>399&&u<600)
    {
        printf("Units Consumed: %d
",u);
        float c=1.60,surcharge;
        printf("Cost per Unit: %.2f
",c);
        float bill=c*u;
        printf("Bill: %.2f
",bill);
        if(bill>400)
        {
            surcharge=0.15*bill;
         printf("Surcharge: %.2f
",surcharge);   
        }
        else
        {
            surcharge=0.00;
            printf("Surcharge: %.2f
",surcharge);
        }
        printf("Total Amount: %.2f
",surcharge+bill);
    }
    else if(u>599&&u<800)
    {
        printf("Units Consumed: %d
",u);
        float c=1.80,surcharge;
        printf("Cost per Unit: %.2f
",c);
        float bill=c*u;
        printf("Bill: %.2f
",bill);
        if(bill>400)
        {
            surcharge=0.15*bill;
         printf("Surcharge: %.2f
",surcharge);   
        }
        else
        {
            surcharge=0.00;
            printf("Surcharge: %.2f
",surcharge);
        }
        printf("Total Amount: %.2f
",surcharge+bill);
    }
    else
    {
        printf("Units Consumed: %d
",u);
        float c=2.00,surcharge;
        printf("Cost per Unit: %.2f
",c);
        float bill=c*u;
        printf("Bill: %.2f
",bill);
        if(bill>400)
        {
            surcharge=0.15*bill;
         printf("Surcharge: %.2f
",surcharge);   
        }
        else
        {
            surcharge=0.00;
            printf("Surcharge: %.2f
",surcharge);
        }
        printf("Total Amount: %.2f
",surcharge+bill);
    }
    
}