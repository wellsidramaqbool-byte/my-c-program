 #include<iostream.h>

 int main()
 {
 int year;
 cout<<"Enter year:";
 cin>>year;
 if(year%4==0)
 {
 if(year%100==0)
 {
 if(year%400==0)
 cout<<"Leap year";
 else
 cout<<"Not Leap year";
	}
 else
 {
 cout<<"Leap year";
 }

  cout<<"Not Leap year";

 }
 return 0;
 }

