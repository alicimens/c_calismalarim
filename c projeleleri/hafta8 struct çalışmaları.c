#include<stdio.h>
//   STRUCT 1 . ORNEK 
struct sikisikbirnokta {
	
	int x ;
	int y;
	
};


int main (){
	
	struct sikisikbirnokta point1 = {8,7};
	struct sikisikbirnokta point2 = {9,18};
	
	printf (" nokta1 in koordinatlari : %d %d \n ",point1.x,point1.y);
	printf("nokta2 nin koordinatlari  : %d %d ",point2.x,point2.y);
	
}
