#include<bits/stdc++.h>
using namespace std;

struct fri{
    string name;
    string birthDate;
    int date;
    int month;
    int year;
    string day;
};


int main()
{
  int total;
  cout<<"Enter Total Numer Of Friends : ";
  cin>>total;
  vector<fri>friends;
  int choice;
  string search;
  int findMonth;
  string editName,editBirthdate,editDay;
  int editDate,editMonth,editYear;
  while(choice!=6)
  {

    cout<<"Menu"<<endl;
    cout<<"1.Insert Birthdate."<<endl;
    cout<<"2.Display Birthdates."<<endl;
    cout<<"3.Seach by Name."<<endl;
    cout<<"4.Display List By Month."<<endl;
    cout<<"5.Edit."<<endl;
    cout<<"6.Exit"<<endl;
    cout<<"Enter Choice :";
    cin>>choice;
       struct fri temp;
    switch (choice)
    {
    case 1:
      
        cout<<"Enter Name : "<<endl; 
        cin>>temp.name;
        cout<<"Enter Birthdate : "<<endl; 
        cin>>temp.birthDate;
        cout<<"Enter Date : "<<endl; 
        cin>>temp.date;
        cout<<"Enter Month : "<<endl; 
        cin>>temp.month;
        cout<<"Enter Year : "<<endl; 
        cin>>temp.year;
        cout<<"Enter Day : "<<endl; 
        cin>>temp.day;
        friends.push_back(temp);
        break;


     case 2:
           cout<<"Name"<<" "<<"BirthDate"<<" "<<"Day"<<" "<<"Date"<<" "<<"Month"<<" "<<"Year"<<" "<<endl;
           for(auto i:friends)
           {
            cout<<i.name<<" "<<i.birthDate<<" "<<i.day<<" "<<i.date<<" "<<i.month<<" "<<i.year<<endl;
           }
        break;

    case 3:
      cout<<"Enter Name for Searching : ";
      
      cin>>search;
      for(auto i:friends)
      {
        if(search==i.name)
        {     cout<<"Name"<<" "<<"BirthDate"<<" "<<"Day"<<" "<<"Date"<<" "<<"Month"<<" "<<"Year"<<" "<<endl;
              cout<<i.name<<" "<<i.birthDate<<" "<<i.day<<" "<<i.date<<" "<<i.month<<" "<<i.year<<endl;
              break;
        }
      }
      break;


      case 4:
      cout<<"Enter Month Number for Searching : ";
      cin>>findMonth;
      for(auto i:friends)
      {
        if(findMonth==i.month)
        {        cout<<"Name"<<" "<<"BirthDate"<<" "<<"Day"<<" "<<"Date"<<" "<<"Month"<<" "<<"Year"<<" "<<endl;
                cout<<i.name<<" "<<i.birthDate<<" "<<i.day<<" "<<i.date<<" "<<i.month<<" "<<i.year<<endl;
        }
      }
      break;

      case 5:
      cout<<"Enter Name for Editing : ";
      cin>>search;
       for(auto i:friends)
      {
        if(search==i.name)
        {    
            int c;

        while (c!=7)
        {
            cout<<"1.Edit Name."<<endl; 
     
        cout<<"2.Edit Birthdate."<<endl; 
      
        cout<<"3.Edit Date."<<endl; 
        
        cout<<"4.Edit Month."<<endl; 
   
        cout<<"5.Edit Year."<<endl; 
    
        cout<<"6.Edit Day."<<endl; 
        cout<<"7.Exit"<<endl;
      cout<<"Enter Choice: ";
      cin>>c;


switch (c)
{
case 1:
     cout<<"Enter New Name: ";
     cin>>editName;
     i.name=editName;
     cout<<"Name Edited"<<endl;
    break;


case 2:
cout<<"Enter New BirthDate: ";
     cin>>editBirthdate;
     i.name=editBirthdate;
     cout<<"BirthDate Edited"<<endl;

    break;


case 3:
cout<<"Enter New Day: ";
     cin>>editDay;
     i.name=editDay;
     cout<<"Day Edited"<<endl;

    break;    

case 4:
cout<<"Enter New Date: ";
     cin>>editDate;
     i.name=editDate;
     cout<<"Date Edited"<<endl;

    break;

case 5:

     cout<<"Enter New Month: ";
     cin>>editMonth;
     i.name=editMonth;
     cout<<"Month Edited"<<endl;
    break; 

case 6:
      cout<<"Enter New Year: ";
     cin>>editYear;
     i.name=editYear;
     cout<<"Year Edited"<<endl;
    break; 

default:
    break;
}

        }
        

        

        }
      }
      break;
      
        
      
    
    default:
        break;
    }

  }




}
