#include <iostream>

using namespace std;

int n, bu[20];
double twt, awt, wt[20];
void Getdata();
void timecal();
void sjf();

void Getdata(){
int i ;
cout<< "Enter NO. of processes (max:19) :";
cin>>n;
for(i=1;i<=n;i++){
cout<<"Enter BT for process p"<<i<<" = :";
cin>>bu[i];
}
}

void timecal(){
wt[1]=0;
int i;
for(i=2;i<=n;i++){
wt[i]=wt[i-1]+bu[i-1];
twt+=wt[i];
}
cout<<"\nProcess \t|\t BT \t|\t WT ";
cout<<"\n--------\t-\t----\t-\t----";
for(i=1;i<=n;i++){
cout<<"\nProcess-"<<i<<"\t|\t"<<bu[i]<<"\t|\t"<<wt[i];
}
awt=twt/n;
cout<<"\n\nAvrg WT = "<<awt<<"\n";
}


void sjf(){
int i, j, temp;
int min, loc;
cout<<"\n\n----- sequance of submitted before SJF scheduling: ";
for(i=1;i<=n;i++){
cout<<"\n\tBurst time process p = ";
cout<<bu[i];
}
//selection sort
for(j=i+1;j<=n-2;j++){
if(min>bu[j]){
min = bu[j];
loc = j;
}
}
temp = bu[i];
bu[i] = bu[loc];
bu[loc] = temp;

cout<<"\n\n----- sequance of process execution after SJF scheduling";
for(i=1;i<=n;i++){
cout<<"\n\tBurst time process p = ";
cout<<bu[i];
}
}

int main(){
Getdata();
sjf();
timecal();
return 0;
}

