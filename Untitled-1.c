/*#include <stdio.h>

int main()
{
   int n, k, i, count, temp, div;
   scanf("%d %d", &n, &k);
   temp = n;

   while (temp%n != 0)
   {
      for (i = 1; i <= n; i++)
      {
         div = temp % n;
      }
   }
   printf("%d", div);
   return 0;
}*/

// #include <stdio.h>

// int main()
// {
//     long long int n;
//     int k;
//     scanf("%lld %d", &n, &k);

//     int flag = 0;
//     int amr = 0;

//     for (long long int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             flag++;
//             if (flag >= k)
//             {
//                 amr = i;
//                 break;
//             }
//         }
//     }

//     if (amr != 0)
//     {
//         printf("%d", amr);
//     }
//     else
//     {
//         printf("-1");
//     }

//     return 0;
// }

// #include <stdio.h>
// // declaration/protype
// void printHi();

// int main()
// {
//     printHi(); // function call
//     printHi();
//     printHi();
//     return 0;
// }

// // function definition
// void printHi()
// {
//     printf("Hi\n");
// }

/*#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

const char* getColor(double wavelength) {
    if (wavelength >= 380 && wavelength < 450)
        return "Violet";
    else if (wavelength >= 450 && wavelength < 485)
        return "Blue";
    else if (wavelength >= 485 && wavelength < 500)
        return "Cyan";
    else if (wavelength >= 500 && wavelength < 565)
        return "Green";
    else if (wavelength >= 565 && wavelength < 590)
        return "Yellow";
    else if (wavelength >= 590 && wavelength < 625)
        return "Orange";
    else if (wavelength >= 625 && wavelength <= 750)
        return "Red";
    else
        return "Not in visible range";
}

int main() {
    int m;               
    double theta_deg;    
    double a_um;        

  
    printf("Enter diffraction order (m): ");
    scanf("%d", &m);

    printf("Enter angle θ in degrees: ");
    scanf("%lf", &theta_deg);

    printf("Enter slit separation a in micrometers (μm): ");
    scanf("%lf", &a_um);

  
    double theta_rad = theta_deg * PI / 180.0;

   
    double wavelength = (a_um * 1000.0 * sin(theta_rad)) / m;

 
    const char* color = getColor(wavelength);


    printf("\nCalculated Wavelength: %.2f nm\n", wavelength);
    printf("Color: %s\n", color);

    return 0;
}
*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
    int m1 = 3;                 
    double lambda1 = 530.0;     
    double theta1_deg = 65.0;   
    
    
    int m2 = 2;                 
    double lambda2 = 700.0;    
    double theta2_deg;         
    
  
    double theta1_rad = theta1_deg * PI / 180.0;
    
    
    double d = (m1 * lambda1) / sin(theta1_rad);
    
   
    double sin_theta2 = (m2 * lambda2) / d;
    
   
    if (fabs(sin_theta2) > 1.0) {
        printf("No solution exists - the second-order bright spot for red light cannot be produced.\n");
        return 1;
    }
    
    theta2_rad = asin(sin_theta2);
    theta2_deg = theta2_rad * 180.0 / PI;
    
    printf("Given a diffraction grating that produces:\n");
    printf("- 3rd-order green light (530 nm) at 65.0°\n\n");
    printf("The 2nd-order red light (700 nm) will appear at:\n");
    printf("Angle: %.1f degrees\n", theta2_deg);
    
    return 0;
}