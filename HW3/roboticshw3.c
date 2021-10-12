

#include <math.h>
#include "define.h"

int main()
{
  char firstname[10000];
  printf("Type your first name: ");
  scanf("%s",firstname);
  float firstnum;
  float secondnum;
  char change[100];
  char operator;
  int position ;
  float answer;

  for (int i=0;;i++){
	  if (firstname[i]=='*'||firstname[i]=='+'||firstname[i]=='-'||firstname[i]=='/'){operator = firstname[i];position = i+1;break;}
          change[i] = firstname[i];
          firstnum = atoi(change);

  }
  printf(" first is %f \n",firstnum);
  for (int i=0;change[i]!='\0';i++){
	  change[i] = '\0';
  }
for (int j=position;firstname[j]!='\0';j++){
    change[j-position] = firstname[j];
    secondnum = atoi(change);
}
printf(" second is %f \n",secondnum);
if (operator == '*'){answer = firstnum*secondnum;printf(" %f",answer);}
if (operator == '+'){answer = firstnum+secondnum;printf(" %f",answer);}
if (operator == '-'){answer = firstnum-secondnum;printf(" %f",answer);}
if (operator == '/'){answer = firstnum/secondnum;printf(" %f",answer);}

return(0);
}

