#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
string convo;
float cels, fahr;
int main(int argc, char** argv) {
system("COLOR F0");
cout<<"Benvenuto nel covertitore Celsius/Fahrenheit!\n\n";
cout<<"Cosa vuoi convertire?\n";
for (;;){
cin>>convo;
if (convo=="Celsius"||convo=="celsius"||convo=="C"||convo=="c"){
cout<<"Inserisci la temperatura in Celsius.\n";
cin>>cels;
fahr=((9/5)*cels+32);
cout<<"La tua temperatura in Fahrenheit risulta di: ";
cout<<fahr<<" gradi."<<endl<<endl;
cout<<"Grazie per aver usato questo programma! \n";
system("PAUSE");
return 0;
}
 else if (convo=="Fahrenheit"||convo=="fahrenheit"||convo=="F"||convo=="f"){
 cout<<"Inserisci la temperatura in Fahrenheit.\n";
 cin>>fahr;
 cels=(fahr-32)*5/9;
 cout<<"La tua temperatura in Celsius risulta di: ";
 cout<<cels<<" gradi."<<endl<<endl;
 cout<<"Grazie per aver usato questo programma! \n";
 system("PAUSE");
 return 0;
}
else {
cout<<"Non posso convertirlo, riprova.\n";
}
}
return 0;
}
