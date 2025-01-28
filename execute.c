#include <stdio.h>
#include <stdlib.h>
#include "SampleLib.c"
int main( void ) {
	int c,d,s;
	float e,f;
 int result = power( 2, 3 );
 printf( "2³ == %d\n", result );
 result = fact( 6 );
 printf( "6! == %d\n\n\n\n\n\n\n", result );
 printf("Choose an exercise to execute\n");
 scanf("%d",&s);
 switch(s){
 	case 1:
 	  greet();
	   break;	
	   	case 2:
 	 reverseNumber(c);
	   break;
	    	case 17:
 	sumf (c,d);
	   break;
	   case 3:
	   prod(e,f);
	   break;
	    case 4:
	   even(c);
	   break;
	   case 5:
	   comp(c,d);
	   break;
	   case 6:
	 sortThreeNumbers(c,d,s);
	   break;
	   default:
	  printf("Not amongst the list\n");
		break;	
 }	

 return EXIT_SUCCESS;
  }
