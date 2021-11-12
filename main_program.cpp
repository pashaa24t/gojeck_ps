// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class customer 
{
  public :
  int d , c ;
  
  customer()
  {
     d =0 ;
     c =0;
  }
};
int stringtoint(string s)
{
    int fact = 1,res=0;
    for(int i = s.length()-1 ; i>=0;i--)
    {
        res += int(s[i] - 65) * fact;
        fact *= 10;
    }
    return res;
}
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
    customer first;
    int choice;
    int dol , cent ;
    char x , y;
   while(1)
  {
      cout<<"$ Select an option:"<<endl;
      cout<<"1.Credit"<<endl<<"2.Debit"<<endl<<"3.Check Balance"<<endl<<"4.Exit"<<endl;
      
      cin>>choice;
      
      if(choice == 1)
      {
          cout<<"$ Enter Amount."<<endl;
          string  str,dstr , cstr ;
          cin>>str;
          
         int i=0;
         for(i=0;i<str.length();i++)
         {
             if(str[i] != 'D')
                dstr += str[i];
            else
                break;
         }
         i++;
         for( ; i<str.length();i++)
         {
             if(str[i] == 'C')
                cstr += str[i];
            else
                break;
         }
          
          dol = stringtoint(dstr);
          cent = stringtoint(cstr);
          
          first.d +=  dol ;
          first.c += cent;
          pair<int,int> p = balace(first.d , first.c);
          
          first.d = p.first ;
          first.c = p.second ;
          
      }
      else if(choice == 2)
      {
          cout<<"$ Enter Amount."<<endl;
          string str,dstr , cstr ;
          cin>>str;
          int i=0;
         for(i=0;i<str.length();i++)
         {
             if(str[i] != 'D')
                dstr += str[i];
            else
                break;
         }
         i++;
         for( ; i<str.length();i++)
         { 
             if(str[i] == 'C')
                cstr += str[i];
            else
                break;
         }
          
          dol = stringtoint(dstr);
          cent = stringtoint(cstr);
          
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
