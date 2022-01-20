#include<iostream>
#include<stdio.h>
#include<math.h>
#include<windows.h>
#include<iomanip>
using namespace std;
float c(float x)

{
    return (6/(3-x));
}
int main ()
        {
            float f[1000],f0=0,hasil,fd,f1=0,error,ss,fo,t,dhh,dh,x,liv,h,batas_bawah,r,fc,batas_atas;
            int i,n;
            cout<<"masukkan nilai batas bawah:";
            cin>>batas_bawah;
            cout<<"masukkan nilai batas atas:";
            cin>>batas_atas;
            cout<<"masukkan nilai h:";
            cin>>h;
            n=(batas_atas-batas_bawah)/h;
            for(i=0;i<=n;i++)
 {
 cout<<setw (15) <<i;
 f[i]= c(batas_bawah);
 cout<<setw (15) <<batas_bawah;
 cout<<setw (15) <<f[i]<<endl;
 batas_bawah=batas_bawah+h;

 }
cout<<"masukkan nilai x : ";
cin>>t;
ss=6/(pow(t,2)-(6*t)+9);
cout<<"maka nilai f'(x) = "<<ss<<endl;



for(i=0;i<=n;i++)
 {
     if((i!=0)&&(i!=n))
     {
         if((i%4!=0))
            {
                f1=f1+4*f[i];
            }
            else
            {
                f1=f1+2*f[i];
            }
     }
     else
     {
         f1=f1+f[i];
     }
 }
fo=(f[i+1]-f[i])/h;
cout<<"nilai selisih maju ialah ;"<<ss<<endl;
{
    for(i=0;i<=n;i++)
 {
     if((i!=0)&&(i!=n))
     {
         if((i%4!=0))
            {
                f1=f1+4*f[i];
            }
            else
            {
                f1=f1+2*f[i];
            }
     }
     else
     {
         f1=f1+f[i];
     }
 }
fc=(f[i+1]-f[i-1])/2*h;
cout<<"nilai selisih tengah ialah ;"<<fc<<endl;
for(i=0;i<=n;i++)
 {
     if((i!=0)&&(i!=n))
     {
         if((i%4!=0))
            {
                f1=f1+4*f[i];
            }
            else
            {
                f1=f1+2*f[i];
            }
     }
     else
     {
         f1=f1+f[i];
     }
 }
fd=(f[i]-f[i-1])/(h);
cout<<"nilai selisih mundur ialah ;"<<ss<<endl;

}

   {
for(i=0;i<=n;i++)
 {
     if((i!=0)&&(i!=n))
     {
         if((i%2==1))
            {
                f0=f0+4*f[i];
            }
            else
            {
                f0=f0+2*f[i];
            }
     }
     else
     {
         f0=f0+f[i];
     }
 }
dh=(h/2)*f0;
 cout<<endl;
 cout<<endl;
 cout<<"\tD(h) : "<<dh<<endl;
 for(i=0;i<=n;i+=2)
 {
     if((i!=0)&&(i!=n))
     {
         if((i%4!=0))
            {
                f1=f1+4*f[i];
            }
            else
            {
                f1=f1+2*f[i];
            }
     }
     else
     {
         f1=f1+f[i];
     }
 }
 dhh=(2*h/3)*(f1);
 cout<<"\tD(2h) : "<<dhh<<endl;
 cout<<endl;
 hasil=dh+(1/(pow(2,r)+1)*(dh-dhh));

 cout<<"Hasil dari Extrapolasi Ricahrdson ialah : "<<ss<<endl;

    }
}
