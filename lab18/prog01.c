/*
 * Krystian Łukasiak
 * 08.01.2018
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
	(r1.ll.x < r.ll.x && r1.ll.y < r.ll.y && r1.ur.x > r.ur.x && r1.ur.y > r.ur.y) ;
}

int main(){
	struct point p,p1,p2,p3;
	struct rect r,r1;
	p = makepoint(1,2);
	p1 = makepoint(1,2);
	p2 = makepoint(13,14);
	p3 = makepoint(21,24);
	r = makerect(p1,p2);
	r1 = makerect(p3,p);
	printf("%d\n", rectinrect(r1,r));
	return 0;
}
