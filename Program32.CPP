 #include<iostream.h>
 #include<string.h>
 int  main()
 {
 int num;
 char user[20], pass[20];

 cout<<"Enter username:";
 cin>>user;
 if(strcmp(user,"admin")==0)
 {
 cout<<"Enter password:";
 cin>>pass;
 if(strcmp(pass,"1234")==0)
 cout<<"Login Success";
 else
 cout<<"Wrong Pasword";
 }
 else
 {
 cout<<"Wrong Username";
 }
 return 0;
 }

