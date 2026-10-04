 #include<iostream.h>
 int  main()
 {
 int marks;

 cout<<"Enter marks:";
 cin>>marks;
 if(marks>=50)
 {
 if(marks>80)
 cout<<"A grade";
 else if(marks>=60)
 cout<<"B grade";
 else
 cout<<"C grade";
 }
 else{
 cout<<"FAil";
 }
 return 0;
 }
