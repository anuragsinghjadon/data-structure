#include<stdio.h>
#include<math.h>
#define PI 3.14159265
int main ()
{
float Vf,Vm,Ef,Em,Gf,Gm,E1,E2,v12,G12;
float vm,vf,q11,q12,q22,q66;
double x,val,K,y,Q11,Q12,Q16,Q22,Q26,Q66,X,Y,Z,R,S;

while(1)
{
printf("Enter value of Fiber fraction volume in decimal(Vf)= ");
scanf("%f",&Vf);
if (Vf<0||Vf>1)
{
printf (" Entered value is not valid");
continue;
}
else
{
Vm=1-Vf;
printf("value of matrix volume fraction will be %f",Vm);
printf("\nEnter the value of young's modulus of fiber material in MPa,(Ef)=");
scanf("%f",&Ef);
printf("\nEnter the value of young's modulus of matrix material in MPa,(Em)=");
scanf("%f",&Em);
printf("\nEnter value of poisson's ratio for fiber material(vf)= ");
scanf("%f",&vf);
printf("\nEnter the value of poisson's ratio for matrix material(vm)=");
scanf("%f",&vm);
printf("\nEnter the value of shear modulus of fiber in MPa (Gf)=");
scanf("%f",&Gf);
printf("\nEnter the value of shear modulus of matrix in MPa(Gm)=");
scanf("%f",&Gm);
printf("\nEnter the value of theta at which material is oriented in degrees=");
scanf("%lf",&K);
val=PI/180;
x=cos(val*K);
y=sin(val*K);
E1=Ef*Vf+Em*Vm;
E2=(Ef*Em)/(Ef*Vm+Em*Vf);
v12=vm*Vm+vf*Vf;
G12=(Gm*Gf)/(Vm*Gf+Vf*Gm);
q11=(1/E2)/(1/(E1*E2)-((-v12/E1)*(-v12/E1)));
q12=(v12/E1)/(1/E1*E2)-((-v12/E1)*(-v12/E1));
q22=(1/E1)/(1/(E1*E2)-((-v12/E1)*(-v12/E1)));
q66=((-v12/E1)*(-v12*E1))+(1/(E1*E2))/((1/E1*E2*G12)-(-v12/E1)*(-v12/E1));
X=pow(x,4);
Y=pow(y,4);
Z=(pow(x,2)*pow(y,2));
R=(y*pow(x,3));
S=(x*pow(y,3));
Q11=((q11*X)+(2*(q12+2*q66)*Z)+(q22*Y));
Q12=((q11+q22-4*q66)*Z)+(q12*(X+Y));
Q22=((q11*Y)+(2*(q12+2*q66)*Z)+(q22*X));
Q16=((q11-q12-2*q66)*R)+((q12-q22+2*q66)*S);
Q26=((q11-q12-2*q66)*S)+((q12-q22+2*q66)*R);
Q66=(q11+q22-(2*q12)-(2*q66))*Z+(q66*(X+Y));
break;
}
}
return 0;
}
