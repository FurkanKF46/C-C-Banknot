#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Furkan KOCA 221030910028
int main() {
int para,kupur=0,a200=0,a100=0,a50=0,a20=0,a10=0,a5=0,a1=0;
cout<<"Kupurlere bolmek istediginiz miktari giriniz: ";
cin>>para;	
while(para>=200) {
a200=para/200;
para=para%200;
cout<<"200'luk banknot sayisi: "<<a200<<endl;
break;	
}
while(para>=100) {
a100=para/100;
para=para%100;
cout<<"100'luk banknot sayisi: "<<a100<<endl;
break;	
}
while(para>=50) {
a50=para/50;
para=para%50;
cout<<"50'lilik banknot sayisi: "<<a50<<endl;
break;	
}
while(para>=20) {
a20=para/20;
para=para%20;
cout<<"20'lik banknot sayisi: "<<a20<<endl;
break;	
}
while(para>=10) {
a10=para/10;
para=para%10;
cout<<"10'luk banknot sayisi: "<<a10<<endl;
break;	
}
while(para>=5) {
a5=para/5;
para=para%5;
cout<<"5'lik banknot sayisi: "<<a5<<endl;
break;	
}
while(para>=1) {
a1=para/1;
para=para%1;
cout<<"1'lik banknot sayisi: "<<a1<<endl;
break;	
}
}

