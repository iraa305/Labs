//trapezoidal_method
#include<stdio.h>
#include<math.h>

/* Define the function to be integrated here: */
double f(double x){
    return x*x;
}

/*Program begins*/
main(){
    int n,i;
    double a,b,h,x,sum=0,integral;
    /*Ask the user for necessary input */
    printf("\nEnter the no. of sub-intervals: ");
    scanf("%d",&n);
    printf("\nEnter the initial limit: ");
    scanf("%lf",&a);
    printf("\nEnter the final limit: ");
    scanf("%lf",&b);
    /*Begin Simpson's 1/3rd Procedure: */
    h=fabs(b-a)/n;
    for(i=1;i<n;i++){
        x=a+i*h;
        sum=sum+f(x);
    }
    integral=(h/2)*(f(a)+f(b)+2*sum);
    /*Print the answer */
    printf("\nThe integral is: %lf\n",integral);
}

//Euler_method
#include <stdio.h>
#include <math.h>

typedef double (*deriv_f)(double, double);
#define FMT " %7.3f"

void ivp_euler(deriv_f f, double y, int step, int end_t)
{
    int t = 0;

    printf(" Step %2d: ", (int)step);
    do {
        if (t % 10 == 0) printf(FMT, y);
        y += step * f(t, y);
    } while ((t += step) <= end_t);
    printf("\n");
}

void analytic()
{
    double t;
    printf("    Time: ");
    for (t = 0; t <= 100; t += 10) printf(" %7g", t);
    printf("\nAnalytic: ");

    for (t = 0; t <= 100; t += 10)
        printf(FMT, 20 + 80 * exp(-0.07 * t));
    printf("\n");
}

double cooling(double t, double temp)
{
    return -0.07 * (temp - 20);
}

int main()
{
    analytic();
    ivp_euler(cooling, 100, 2, 100);
    ivp_euler(cooling, 100, 5, 100);
    ivp_euler(cooling, 100, 10, 100);

    return 0;
}

//reimann sum
#include <stdio.h>


double f(double x){
    return x * x;
}

int main() {
    double lower_limit;
    printf("Enter lower limit: \n");
    scanf("%lf", &lower_limit);
    double upper_limit;
    printf("Enter upper limit: \n");
    scanf("%lf", &upper_limit);
    double accuracy;
    printf("Enter accuracy: \n");
    scanf("%lf", &accuracy);
    double i = lower_limit;
    double area = 0;

    while (i < upper_limit){
        area += f(i) * accuracy;
        i += accuracy;
    }
    printf("Calculated area:%.3f\n", area);
    return 0;
}

