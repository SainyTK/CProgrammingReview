#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct{
	int x,y;
}Point;

typedef struct{
	Point c;
	int r;
}Circle;

void input_circle(Circle* c);
float line_distance(Point* p1,Point* p2);
int is_intersect(Circle* c1,Circle* c2);


int main(){
	Circle main;
	Circle *others;
	int i,num,count=0;
	
	//input main circle
	input_circle(&main);
	
	printf("Enter num: ");
	scanf("%d",&num);
	
	//allocate memory for others
	others = (Circle*)malloc(sizeof(Circle)*num);
	
	for(i=0;i<num;i++){
		//input for others
		input_circle(&(others[i]));
	}
	
	for(i=0;i<num;i++){
		//chech intersection, count++ if yes
		if(is_intersect(&main,&(others[i])))
			count++;
	}
	printf("Intersected circle = %d\n",count);
	
	//free unused memory for others
	free(others);
		
	return 0;
}

void input_circle(Circle* c){
	printf("Circle x, y, r: ");
	scanf("%d %d %d",&(c->c.x),&(c->c.y),&(c->r));
}

float line_distance(Point* p1,Point* p2){
	return sqrt(pow(p1->x - p2->x,2) + pow(p1->y - p2->y,2));
}

int is_intersect(Circle* c1,Circle* c2){
	if(c1->r+c2->r > line_distance(&(c1->c),&(c2->c)));
		return 1;
	return 0;
}
