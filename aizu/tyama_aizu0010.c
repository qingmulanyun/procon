//http://www.h6.dion.ne.jp/~jpe02_tn/ki-5.html
main(n){double x1,y1,x2,y2,x3,y3,a1,b1,c1,a2,b2,c2,x,y;for(scanf("%d",&n);n--;printf("%.3f %.3f %.3f\n",x,y,hypot(x1-x,y1-y)))scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3),a1=2*x2-2*x1,b1=2*y2-2*y1,c1=x1*x1-x2*x2+y1*y1-y2*y2,a2=2*x3-2*x1,b2=2*y3-2*y1,c2=x1*x1-x3*x3+y1*y1-y3*y3,x=(b1*c2-b2*c1)/(a1*b2-a2*b1),y=(c1*a2-c2*a1)/(a1*b2-a2*b1);exit(0);}