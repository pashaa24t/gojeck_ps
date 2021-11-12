// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class customer 
{
  public :
  int d = 0;
  int c = 0;
  customers(int d , int c)
  {
      this->d = d;
      this->c = c;
  }
};
pair<int,int> balace(int d , int c)
{
    if(c > 0)
    {
        if(c >= 100)
            {
                d += c/100;
                c = c%100;
            }
        if(d < 0)
        {
            d -=1 ;
            c = 100 - c;
        }
    }
    if(c < 0)
    {
        if(c <= 100)
        {
            d -= c/100;
            c = c%100;
        }
        if(d > 0)
        {
            d -= 1;
            c = 100 - c;
        }
    }
    pair<int,int> ans;
    ans ={d,c};
    return ans;
    
}
int main() {
    customer first(0,0);
    int choice;
    int dol , cent ;
    char x , y;
   while(1)
  {
      cout<<"$ Select an option:"<<endl;
      cout<<"1.Credit"<<endl<<"2.Debit"<<endl<<"Check Balance"<<endl<<"Exit"<<end;
      cin>>choice;
      
      if(choice == 1)
      {
          cout<<"$ Enter Amount."<<endl;
          string dstr , cstr ;
          getline(dstr,cin,'D');
          getline(cstr,cin,'C');
          
          dol = stoi(dstr);
          cent = stoi(cstr);
          
          first.d +=  dol ;
          first.c += cent;
          pair<int,int> p = balace(first.d , first.c);
          
          first.d = p.first ;
          first.c = p.second ;
          
      }
      else if(choice == 2)
      {
          cout<<"$ Enter Amount."<<endl;
          string dstr , cstr ;
          getline(dstr,cin,'D');
          getline(cstr,cin,'C');
          
          dol = stoi(dstr);
          cent = stoi(cstr);
           first.d -=  dol ;
          first.c -= cent;
          pair<int,int> p = balace(first.d , first.c);
          
          first.d = p.first ;
          first.c = p.second ;
          
          
      }
      else if(choice == 3)
      {
          cout<<"$Current balance is"<<first.d<<"D"<<first.c<<"C"<<endl;
      }
      else
        break;
      
  }

    return 0;
}
