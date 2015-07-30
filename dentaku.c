#include <stdio.h>


int main(void)
{


int a,b,c,z,i;
char d;

/*入力部*/
printf("２つの数字(整数のみ)の演算を入力してください(ex.3+4):\n");
scanf("%d%c%d",&a,&d,&b);

/*入力チェック部*/


/*計算部*/
switch(d){
case '-': c = a - b; break;
case '+': c = a + b; break;
case '*':
c=0;
for(i=1;i<=b;i++){c=c+a;} break;
case '/':
/*yがゼロ*/
if(b==0){printf("ゼロ割りはできません\n");return 0;};
c=a-b;
for(i=1;b<=c;i++){c=c-b;}c=i; break;
default:
printf("計算式が誤っています\n");
return 0;
}

/*表示部分*/
printf("%d%c%dは%dです\n",a,d,b,c);
return 0;

}
