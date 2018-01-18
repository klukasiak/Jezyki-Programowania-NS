/*
 * Krystian Łukasiak
 * 13.01.18
 */

#include <stdio.h>

struct point {
  int x;
  int y;
};

struct rect {
  struct point ll;  /* lower left */
  struct point ur;  /* upper right */
};

struct point makepoint(int x, int y) {
  struct point tmp;
  tmp.x = x;
  tmp.y = y;
  return tmp;
}

struct rect makerect(struct point ll, struct point ur) {
  struct rect tmp;
  tmp.ll = ll;
  tmp.ur = ur;
  return tmp;
}

int ptinrect(struct point p, struct rect r) {
  return p.x >= r.ll.x && p.x < r.ur.x
      && p.y >= r.ll.y && p.y < r.ur.y;
}

int rectinrect(struct rect r1, struct rect r){
	return (r1.ll.x > r.ll.x && r1.ll.y > r.ll.y && r1.ur.x < r.ur.x && r1.ur.y < r.ur.y) ||
	(r1.ll.x < r.ll.x && r1.ll.y < r.ll.y && r1.ur.x > r.ur.x && r1.ur.y > r.ur.y);
}

struct rect minspan(struct rect r1, struct rect r2){
	int minLlX, minLlY, maxUrX, maxUrY;
	struct point ll1, ur1;
	if(r1.ll.x<r2.ll.x) minLlX = r1.ll.x;
	else minLlX = r2.ll.x;
	if(r1.ll.y<r2.ll.y) minLlY = r1.ll.y;
	else minLlY = r2.ll.y;
	if(r1.ur.x>r2.ur.x) maxUrX = r1.ur.x;
	else  maxUrX = r2.ur.x;
	if(r1.ur.y>r2.ur.y) maxUrY = r1.ur.y;
	else maxUrY = r2.ur.y;
	ll1 = makepoint(minLlX, minLlY);
	ur1 = makepoint(maxUrX, maxUrY);
	return makerect(ll1, ur1);
}

int main(){
	struct point p,p1,p2,p3;
	struct rect r,r1,r2;
	p = makepoint(21,22);
	p1 = makepoint(1,2);
	p2 = makepoint(13,14);
	p3 = makepoint(0,1);
	r = makerect(p1,p2);
	r1 = makerect(p3,p);
	printf("%s\n", rectinrect(r1,r)?"zawarte":"niezawarte");
	r2 = minspan(r1,r);
	printf("(%d,%d) ; (%d,%d)\n", r2.ll.x, r2.ll.y, r2.ur.x, r2.ur.y);
	return 0;
}
