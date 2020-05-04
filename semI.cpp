#include <thread>
#include <iostream>

using namespace std;

int FIRST_ODD_NUM= 1;
int FIRST_EVEN_NUM= 2;
int MAX= 100;

void even(){
int Ev;
for (Ev = FIRST_EVEN_NUM; Ev < MAX; Ev+=2 )
cout<<" "<<Ev;
}

void odd(){
int od;
for(od = FIRST_ODD_NUM; od < MAX;od+=2 )
cout<<" "<<od;
}

int main(){
thread E_thread(even);
thread O_thread(odd);
E_thread.join();
O_thread.join();
return 0;
}
