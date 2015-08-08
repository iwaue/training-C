#include <stdio.h>

int main()
    {
      int x,y,z,i;
      char op;
      char str[1024];
/*１つ目の数値入力判定*/
      do {
              printf("１つ目の数値を入力してください:");
              scanf("%d",&x);
              gets(str);
             } while (str[0]);
/*演算子入力判定*/
     printf("演算子を入力してください:");
     scanf("%c",&op);
     switch(op){
              case '-': break;
              case '+': break;
              case '*': break;
              case '/': break;
              default:
              printf("計算式が誤っています\n");
              return 0;
             }
/*１つ目の数値入力判定*/
     do {
         printf("2つ目の数値を入力してください:");
         scanf("%d",&y);
         gets(str);
        } while (str[0]);

/*計算部*/
     switch(op){
         case '-': z = x - y; break;
         case '+': z = x + y; break;
         case '*':z=0;
             for(i=1;i<=y;i++){z=z+x;} break;
         case '/':
         /*yがゼロ*/
         if(y==0){printf("ゼロ割りはできません\n");return 0;};
             z=x-y;
         for(i=1;y<=z;i++){z=z-y;}
             z=i; break;
              }
/*表示部分*/
     printf("--------------------------------\n"
        "%d %c %d = %d\n",x,op,y,z);
        return 0;

}
