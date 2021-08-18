int n,m,test;
scanf("%d",&test);
while(test--)
 {
 
  scanf("%d",&n);
  scanf("%d",&m);
 if(n%2==0)
 {printf("%d\n",(n/2)*m);
  
 }
 
 else
 {printf("%d\n",((n/2)+1)*m);
 }
 }
return 0;
}
