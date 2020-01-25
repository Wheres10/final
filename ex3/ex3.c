#include <stdio.h>

#include<stdlib.h>

#include<ctype.h>

int main(int argc, char *argv[ ])

{

    double min;

    int i;

    if (argc==1){

      printf("The program needs at least one integer parameter tp run!\n");

 }

 if(argc==2){

     min=atof(argv[1]);

    for (i =1; i < argc; i++)

{

        if ( atof(argv[i])< min)

        {

            min =atof(argv[i]);

        }

}

    printf("Min parameter is %f\n", min);

 }

 else{

      

if(isdigit(*argv[1])&&isdigit(*argv[2]))

 {

    min=atof(argv[1]);

    for (i =1; i < argc; i++)

{

        if ( atof(argv[i])< min)

        {

            min =atof(argv[i]);

        }

}

    printf("Min parameter is %f\n", min);

 }

else{

     printf("The program has to be an integer format!\n");

 }

}

}
