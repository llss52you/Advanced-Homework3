#include <stdio.h>

int main ( ) { 

double i ;

     double profit1 , profit2 , profit4 , profit6 , profit10 , profit ;

     printf ("���Q���G" ) ;

     scanf ( "%lf" ,& i ) ;

     profit1 = 100000 * 0.1 ;

     profit2 = profit1 + 100000 * 0.075 ;  

     profit4 = profit2 + 200000 * 0.05 ;  

     profit6 = profit4 + 200000 * 0.03 ;

     profit10 = profit6 + 400000 * 0.015 ;

     if ( i <= 100000 ) 

	 { profit = i * 0.1 ; 

	 printf ( "���o������`�ơGprofit=%lf ",profit);

     } 

	 else if ( i <= 200000 ) 

	 { profit = profit1 + ( i - 100000 ) * 0.075 ; 

	 printf ( "���o������`�ơGprofit=%lf ",profit);

	 } 

	 else if ( i <= 400000 )  

	 { 

	 profit = profit2 + ( i - 200000 ) * 0.05;

	 printf ( "���o������`�ơGprofit=%lf ",profit);

     } 

	 else if ( i <= 600000 )  

	 { profit = profit4 + ( i - 400000 ) * 0.03;

	 printf ( "���o������`�ơGprofit=%lf ",profit);

	 } 

	 else if ( i <= 1000000 ) 

	 { 

	 profit = profit6 + ( i - 600000 ) *0.015 ;   

	 printf ( "���o������`�ơGprofit=%lf ",profit);

	 } 

	 else if ( i > 1000000 ) 

	 { 

	 profit = profit10 + ( i - 1000000 ) * 0.01;

     printf ( "���o������`�ơGprofit=%lf ",profit);

	 } 

 }
