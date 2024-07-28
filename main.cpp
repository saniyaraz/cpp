#include <iostream>
#include <string>
using namespace std;
void myget1 (string &a);
void myget2 (string &b);
void myget3 (string &a);
void myget4 (string &b);
int mydebug (string c);
void mytasavi (string a, string b);
void myarr1 (string d);
void myarr2 (string e);
void myarr4 (string e);
void myarr5 (string a);
void myjam (int a[],int b[]);
int mydebug2 (char f);
void mytafrighB(int a[],int b[]);
void mytafrighK (int a[], int b[]);
int mymoghayese (int a[], int b[]);
void mytafrighM(int a[], int b[]);
void myzarb (int a[], int b[]);
void mytaghsim (int a[], int b[]);
void mytaghsimtafrighB (int a[], int b[]);
string adad1, adad2, adad3, adad4, adadakhar = "", baghimande;
char op;
int arr1[200] = {0}, arr2[200] = {0}, arr3[200] = {0}, i,h;
int main()
{
myget1(adad1);
myget3(adad3);
myget2(adad2);
myget4(adad4);
mytasavi(adad3,adad4);
myarr1(adad1);
myarr2(adad2);
cout << "yeki az amaliat haye + - / * ra entekhab konid:" << endl;
cin >> op;
switch(op){
case '+':
     myjam(arr1,arr2);
   h=1;
   break;
case '-':
    mytafrighB(arr1,arr2);
    mytafrighM(arr1,arr2);
    mytafrighK(arr1,arr2);
   h=1;
   break;
case '*':
   myzarb(arr1,arr2);
   h=1;
   break;
case '/':
    //mytaghsim(arr1,arr2);
    h=1;
    break;
default :
    cout << "amaliat eshtebah vared shode ast!";
    h=0;
}
}
void myget1 (string &a)
{
while(1)
   {
   cout << "lotfan adad yekom ra vared konid:" << endl;
   getline(cin, adad1  );
   cout << "adad yekom shoma hast: " << endl << adad1 << endl;
   if(mydebug(adad1)==2000)
      {
       cout << "adad yekom eshtebah vared shode ast!" << endl;
       continue;
      }
   else
      break;
   }
}
void myget2 (string &b)
{
while(1)
    {
   cout << "lotfan adad dovom ra vared konid:" << endl;
   getline(cin, adad2 );
   cout << "adad dovom shoma hast:" << endl << adad2 << endl;
   if(mydebug(adad2)==2000)
      {
       cout << "adad dovom eshtebah vared shode ast!" << endl;
       continue;
      }
   else
      break;
    }
}
void myget3 (string &a)
{
while(1)
   {
   cout << "lotfan adad yekom bakhsh ashari ra vared konid:" << endl;
   getline(cin, adad3);
   cout << "adad yekom bakhsh ashari shoma hast: " << endl << adad3 << endl;
   if(mydebug(adad3)==2000)
      {
       cout << "adad yekom bakhsh ashari eshtebah vared shode ast!" << endl;
       continue;
      }
   else
      break;
   }
}
void myget4 (string &b)
{
    while(1)
    {
   cout << "lotfan adad dovom bakhsh ashari ra vared konid:" << endl;
   getline(cin, adad4);
   cout << "adad dovom bakhsh ashari shoma hast:" << endl << adad4 << endl;
   if(mydebug(adad4)==2000)
      {
       cout << "adad dovom bakhsh ashari eshtebah vared shode ast!" << endl;
       continue;
      }
   else
      break;
    }
}
int mydebug (string c)
{
   int n;
   n = c.size();
   for(i=0;i<n;i++)
      if(!((c[i]>='0')&&(c[i]<='9')))
         return 2000;
}
void mytasavi (string a, string b)
{
int n3 = adad3.size(), n4 = adad4.size();
if(n3>n4)
    {
    for(i=1;i<n3;i++)
        adad4 += '0';
    }
if(n4>n3)
{
    for(i=1;i<n4;i++)
        adad3 += '0';
}
cout << endl << n3 <<endl<< n4 << endl;
adad1+=adad3;
cout << adad1 << endl;
adad2+=adad4;
cout << adad2;
}
void myarr1 (string d)
{
    int n;
    n = d.size();
    for(i=0;i<n;i++)
      arr1[n-i-1] = d[i] - 48;
    cout << endl;
    for(i=0;i<n;i++)
        cout << arr1[i] << endl ;
    cout << endl;
}
void myarr2 (string e)
{
    int n;
    n = e.size();
    for(i=0;i<n;i++)
      arr2[n-i-1] = e[i] - 48;
    for(i=0;i<n;i++)
        cout << arr2[i] << endl ;
    cout << endl;
}
void myjam (int a[],int b[])
{
   int ezafe;
   int n1 = adad1.size(), n2 = adad2.size() ,n3 = adad3.size();
   if(n1<n2)
      n1 = n2;
   for(i=0;i<n1;i++)
      {
      arr3[i] += arr1[i] + arr2[i];
      if(arr3[i]>9)
            {
              ezafe = arr3[i]/10;
              arr3[i]%=10;
              arr3[i+1]=ezafe;
            }
      }
      cout << n3 << endl;
      for(i=n1;i>=0;i--)
        {
        if(i==n3-1)
            {
            cout << ".";
            }
        cout << arr3[i] ;
        }
}
void mytafrighB(int a[],int b[])
{
    int n1 = adad1.size(), n2 = adad2.size();
    if(n1>n2)
    {
      for(i=0;i<n1;i++)
        {
        if(arr1[i]>=arr2[i])
            arr3[i] = arr1[i] - arr2[i];
        if(arr1[i]<arr2[i])
           {
            arr1[i+1]-=1;
            arr1[i]+=10;
            arr3[i] = arr1[i] - arr2[i];
            }
        }
        for(i=n1-1;i>=0;i--)
            cout << arr3[i];
    }
}
void mytafrighM(int a[], int b[])
{
int n1 = adad1.size(), n2 = adad2.size();
    if(n1==n2)
        {
         if(mymoghayese(arr1,arr2)==2003)
            cout << "0";
         if(mymoghayese(arr1,arr2)==2001)
            {
            for(i=0;i<n1;i++)
            {
            if(arr1[i]>=arr2[i])
                arr3[i] = arr1[i] - arr2[i];
            if(arr1[i]<arr2[i])
               {
               arr1[i+1]-=1;
               arr1[i]+=10;
               arr3[i] = arr1[i] - arr2[i];
               }
            }
            for(i=n1-1;i>=0;i--)
               cout << arr3[i];
            }
        if(mymoghayese(arr1,arr2)==2002)
            {
            for(i=0;i<n2;i++)
                {
                if(arr2[i]>=arr1[i])
                   arr3[i] = arr2[i] - arr1[i];
                if(arr1[i]>arr2[i])
                  {
                  arr2[i+1]-=1;
                  arr2[i]+=10;
                  arr3[i] = arr2[i] - arr1[i];
                 }
               }
           cout << "-";
            for(i=n2-1;i>=0;i--)
                cout << arr3[i] ;
            }
        }
}
void mytafrighK (int a[], int b[])
{
   int n1 = adad1.size(), n2 = adad2.size();
   if(n1<n2)
    {
        for(i=0;i<n2;i++)
        {
        if(arr2[i]>=arr1[i])
            arr3[i] = arr2[i] - arr1[i];
        if(arr1[i]>arr2[i])
           {
            arr2[i+1]-=1;
            arr2[i]+=10;
            arr3[i] = arr2[i] - arr1[i];
            }
        }
     cout << "-";
     for(i=n2-1;i>=0;i--)
         cout << arr3[i];
    }
}
int mymoghayese (int a[], int b[])
{
    int n1 = adad1.size();
    for(i=n1-1;i>=0;i--)
        {
        if(arr1[i]>arr2[i])
           return 2001;
        if(arr2[i]>arr1[i])
           return 2002;
        if(i==0)
           return 2003;
        }
}
void myzarb (int a[], int b[])
{
int n1 = adad1.size(), n2 = adad2.size(),j,m;
if(n1>=n2)
   for(i=0;i<n2;i++)
      for(j=0;j<n1;j++)
         {
         arr3[i+j]+=(arr1[j]*arr2[i]);
         if(arr3[j+i]>9)
            {
             m = arr3[j+i]/10;
             arr3[j+i]%=10;
             arr3[j+i+1] += m;
            }
         }
if(n1<n2)
    for(i=0;i<n1;i++)
      for(j=0;j<n2;j++)
         {
         arr3[i+j] += arr1[i]*arr2[j];
         if(arr3[i+j]>9)
            {
             m = arr3[i+j]/10;
             arr3[i+j]%=10;
             arr3[i+j+1] += m;
            }
        }
for(i=n1+n2;i>=0;i--)
    cout << arr3[i] ;
}
/*void mytaghsim (int a[], int b[])
{
int n1 = adad1.size(), n2 = adad2.size(),j,n3;
if(n1>n2)
{
 for(j=0;j<n1+n2;j++)
    {
        mytaghsimzarb(arr1,arr2);
        myemtehan(adadakhar);
        n3 = adadakhar.size


    }
}

}
void mytaghsimzarb (int a[], int b[])
{
int n1 = adad1.size();
   for(i=0;i<n2;i++)
      for(j=0;j<n1;j++)
         {
         arr3[i+j]+=(arr1[j]*arr2[i]);
         if(arr3[j+i]>9)
            {
             m = arr3[j+i]/10;
             arr3[j+i]%=10;
             arr3[j+i+1] += m;
            }
         }
for(i=n1+n2;i>=0;i--)
{
    arr1[i] = arr3[i] ;
    adadakhar += arr1[i] + 48;
}
}
void myemtehan (string a)
{
while(1)
{
if(*a.begin()!=48)
   break;
if(*a.begin()==48)
   a.erase(0,1);
}
}*/
