#include <stdio.h>
int main(){
        int i;
        int arr[5] = {1,2,3,4,5};
        for (i = 0 ; i <5;i++){
        scanf("%d",&arr[i]);
        }
}

int i;
int arr [5] = {1,2,3,4,5,6};
for (i = 0 ; i<6;i++);
printf("%d",arr[i]);
}


int i;
int arr[5];
int sum = 0;
printf("enter the number");
for (i=0;i<5;i++){
    scanf("%d",&arr[i]);
    sum +=arr[i];
}
printf("%d",sum); 


char s[6];
scanf("%s",s);
printf("%s",s);
    return 0;

    strlen()
    strcpy()

    strcat():{

char s[5]="kites";
char d[5] = "gg";
 strcat(d,s);
 printf("%s",d);

 char s[]="";
 if (s[0]=='\0'){
 printf("empty");
}
 else{
    printf("not empty");
}
    strcmp()
    toupper()

function
    int getnum(int a);
int main() {
getnum(5);    
}
int getnum(int a){
    printf("%d",a);
}

int getnum(int a);
int main() {
int a;  
printf("enter the number");
scanf("%d",&a);
getnum(a);
}
int getnum(int a){
    printf("%d",a);
}


// macros
// #include <stdio.h>
// #define PI 3.14
// #define cube(x) x*x*x

// int main() {

// int cube = cube(3);
// printf("%d",cube);
//     return 0;
// }