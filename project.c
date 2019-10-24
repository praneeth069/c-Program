#include<stdio.h>
#include<math.h>
#define pi 3.14159
void main()
{
	printf("*****************************************************************************\n");
	printf("                             mini engineering calculator \n");
	printf("*****************************************************************************\n");
 	printf("1.Arithmetic operations\t\t2.Trigonometric functions\n3.square roots\t\t\t4.Number system conversion\n");
//	printf("5.power of a numer\n");
	printf("5.power of a number\t\t6.Exponent\n7.Factorial\nSelect your option:\n");
	int z;
	scanf("%d",&z);
	switch(z)
	{
		case(1):	
		{
printf("*********************Arithmetic operations*********************\n");
printf("1.Addition\t\t2.Addition of 'n' numbers\n3.subtraction\t\t4.subtraction of 'n' numbers\n5.multiplication\t6.multiplication of 'n' numbers\n7.division\t\t8.modulo division\n");
printf("			------------------------------			\n");
printf("please select your option:\n");
int a;
scanf("%d",&a);

		switch(a)
		{	
			case(1):
				{
printf("enter 2 number to add:\n");
float a,b,c;
scanf("%f%f",&a,&b);
c=a+b;
printf("%f+%f=%f\n",a,b,c);
				}
				break;
			case(2):
				{
printf("enter the 'n' value:\n");
int n,i;
float value,sum=0;
scanf("%d",&n);
printf("enter %d numbers:\n",n);
for(i=0;i<n;i++)
{
	scanf("%f",&value);
	sum=sum+value;
}
printf("the grand total:%f\n",sum);

				}break;
				case(3):
				{
printf("enter 2 number to subtract:\n");
float c,d,e;
scanf("%f%f",&c,&d);
e=c-d;
printf("%f-%f=%f",c,d,e);
				}
				break;
				case(4):
					{
printf("enter the 'n' value:\n");
int b,i;
scanf("%d",&b);
float sum,value;
scanf("%f",&value);
for(i=0;i<b-1;i++)
{
	scanf("%f",&sum);
	value=value-sum;
}
printf("the grand total:%f\n",value);
					}
				break;
				case(5):
					{
printf("enter two numbers to multiply:\n");
float g,h,i;
scanf("%f%f",&g,&h);
i=g*h;
printf("%f*%f=%f\n",g,h,i);
					}
				  break;
				 case(6):
				{
printf("enter the value of 'n' value:\n");
int k,i;
float a,b,c;
scanf("%d",&k);
printf("enter the %d values:\n",k);
scanf("%f",&a);
for(i=0;i<k-1;i++)
{
	scanf("%f",&b);
	a=a*b;
}
printf("the grand total is :%f",a);
				}
				break;
				case(7):
{
printf("enter two numbers:\n");
float a,b,c;
scanf("%f%f",&a,&b);
c=a/b;
printf("%f/%f=%f\n",a,b,c);
}
				break;
				case(8):
{
printf("enter two integer numbers:\n");
int a,b,c;
scanf("%d%d",&a,&b);
c=a%b;
printf("%d\n",c);
}
break;
		}
		}
				break;
//trigonometric fucntions:
		case(2):
			{
printf("*********************trigonometric functions*******************\n");
printf("1.Tan\t\t\t\t2.sin\n3.cos\t\t\t\t4.sinh\n5.cosh\t\t\t\t6.tanh\n7.inverse of sin\t\t8.inverse of cos\n9.inverse of tan\n");
printf("			--------------------------------		\n");
printf("10.sin(A+B)\t\t\t11.sin(A-B)\n12.cos(A+B)\t\t\t13.cos(A-B)\n14.tan(A+B)\t\t\t15.tan(A-B)\n16.log\t\t\t\t17.log10\n");
printf("			--------------------------------		\n");
printf("select your option:\n");
int y;
scanf("%d",&y);
switch(y)
{
		case(1):
		{
printf("enter angle of Tan:\n");
float a,tan_value;
scanf("%f",&a);
tan_value=tan(a);
printf("tan(%f)=%f in radians\n",a,tan_value);
printf("tan(%f)=%f in degrees\n",a,(tan_value*(180/pi)));
			}
			break;
		case(2):
			{
printf("enter the angle of Sin:\n");
float b,sin_value;
scanf("%f",&b);
sin_value=sin(b);
printf("sin(%f)=%f in radians\n",b,sin_value);
			}
			break;
		case(3):
			{
printf("enter the angle of Cos:\n");
float c,cos_value;
scanf("%f",&c);
cos_value=cos(c);
printf("cos(%f)=%f in radians",c,cos_value);
			}
			break;
		case(4):
			{
printf("enter the angle of sinh:\n");
float d,sinh_value;
scanf("%f",&d);
sinh_value=sinh(d);
printf("sinh(%f)=%f in radians\n",d,sinh_value);
printf("sinh(%f)=%f in degrees\n",d,(sinh_value*(180/pi)));
			}
			break;
		case(5):
			{
printf("enter the angle of cosh:\n");
float e,cosh_value;
scanf("%f",&e);
cosh_value=cosh(e);
printf("cosh(%f)=%f in radians\n",e,cosh_value);

			}
			break;
	          case(6):
			{
printf("enter the angle of tanh:\n");
float f,tanh_value;
scanf("%f",&f);
tanh_value=tanh(f);
printf("tanh(%f)=%f in radians\n",f,tanh_value);
			}
			break;
		  case(7):
			{
printf("enter the angle of sin inverse:\n");
float g,sin_inverse;
scanf("%f",&g);
sin_inverse=asin(g);
printf("sin_inverse(%f)=%f in radians\n",g,sin_inverse);

			}
			break;
		    case(8):
			{
printf("enter the angle of cos inverse\n");
float h,cos_inverse;
scanf("%f",&h);
cos_inverse=acos(h);
printf("cos_inverse(%f)=%f in radians\n",h,cos_inverse);
			}
			break;
		       case(9):
			{
printf("enterthe the angle of angle of tan inverse:\n");
float i,tan_inverse;
scanf("%f",&i);	
tan_inverse=atan(i);
printf("tan_inverse(%f)=%f in radians\n",i,tan_inverse);	
			}
			break;
		       case(10):
			{
printf("enetr 'A' and 'B' values:\n");
float j,k,l;
scanf("%f",&j);
scanf("%f",&k);
l=sin(j)*cos(k)+cos(j)*sin(k);			
printf("sin(%f+%f)=%f\n",j,k,l);
			}
			break;
		       case(11):
			{
printf("enter 'A' and 'b' values:\n");
float m,n,o;
scanf("%f",&m);
scanf("%f",&n);
o=sin(m)*cos(n)-cos(m)*sin(n);
printf("sin(%f-%f)=%f\n",m,n,o);
			}
			break;
		       case(12):
			{

printf("enter 'A' and 'B' values:\n");
float p,q,r;
scanf("%f%f",&p,&q);
r=cos(p)*cos(q)-sin(p)*sin(q);
printf("cos(%f+%f)=%f\n",p,q,r);
			}
			break;
		       case(13):
			{
printf("enter 'A' and 'B' values:\n");
float s,t,u;
scanf("%f%f",&s,&t);
u=cos(s)*cos(t)+sin(s)*sin(t);
printf("cos(%f-%f)=%f\n",s,t,u);
			}
			break;
		       case(14):
			{
printf("enter 'A' and 'B'values:\n");
float v,w,x;
scanf("%f%f",&v,&w);
x=((tan(v)+tan(w))/(1-(tan(v)*tan(w))));
printf("tan(%f+%f)=%f\n",v,w,x);
			}
			break;
		       case(15):
			{
printf("enter 'A' and 'B' values:\n");
float a,b,c;
scanf("%f%f",&a,&b);
c=((tan(a)-tan(b))/(1+(tan(a)*tan(b))));
printf("tan(%f-%f)=%f\n",a,b,c);
			}
			break;
		       case(16):
			{
printf("enter the value:\n");
float a,b;
scanf("%f",&a);
b=log(a);
printf("log(%f)=%f\n",a,b);
			}
			break;
		       case(17):
			{
printf("enter the value:\n");
float c,d;
scanf("%f",&c);
d=log10(c);
printf("log10(%f)=%f\n",c,d);
			}break;	
}
}break;
//squareroot:
case(3):
{

printf("enter any number:\n");
float a,r;
scanf("%f",&a);
r=sqrt(a);
printf("square root of %f = %f\n",a,r);
}break;


//coversions:
case(4):
{
int n,c,k,j;
printf("**************************Number system conversion*****************\n");
printf("1.Decimal to Binary\t\t2.Binary to Decimal\n");
printf("please select your option:\n");
scanf("%d",&j);
switch(j)
{
	case(1):
	{
printf("Enter an integer number in decimal nubmer system:\n");
scanf("%d",&n);
printf("%d in binary number system:\n",n);
	for(c=31;c>=0;c--)
	{
		k=n>>c;
		if(k&1)
			printf("1");
		else
			printf("0");
	}
printf("\n");
} break;
	case(2):
		{
long int i,n,x=0,a;
printf("Enter a binary number:\n");
scanf("%ld",&n);
printf("The ecimal conversion of %ld: ",n);
for(i=0;n!=0;++i)
	{
		a=n%10;
		x=(a)*(pow(2,i))+x;
		n=n/10;

	}
printf("%ld\n",x);
		}break;
}break;
}break;
//powers:
case(5):
{
printf("*********************Power of a Number********************\n");
int a;
printf("1.'x' power 'y'\t\t\t2.'10' power 'x'\n");
printf("select your option:\n");
scanf("%d",&a);
switch(a)
{
	case(1):
		{
printf("********************'x' power 'y'************************\n");
float a,b,c;
printf("enter base number:\n");
scanf("%f",&a);
printf("enter the exponent value:\n");
scanf("%f",&b);
c=pow(a,b);
printf("%f power of %f = %f\n",a,b,c);
		}break;
	case(2):
		{
printf("enter the exponent value:\n");
int j=10;
float a,b;
scanf("%f",&a);
b=pow(j,a);
printf("%d pow %f = %f\n",j,a,b);
		}break;
}break;
case(6):
{
printf("enter the exponent value:\n");
float a,b;
scanf("%f",&a);
b=exp(a);
printf("exponent of %f = %f\n",a,b);
}
break;
case(7):
{
printf("enter an integer number:\n");
long long int c,n,fact=1;
scanf("%lld",&n);
for(c=1;c<=n;c++)
	{
	fact=fact*c;
		}
printf("factorial of %lld = %lld\n",n,fact);
}
break;

}break;
//}break;
}
}

