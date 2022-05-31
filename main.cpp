#include<iostream>
#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<stdlib.h>
#include "signalhandler.h"
using namespace std;
void sig_handler(int signum)
{
cout<<"Signal Number raised is :"<<signum<<endl;
exit(0);
};
int main()
{
//signalhandler ss;
//ss.execute();
//alarm(5);
signal(SIGINT,sig_handler);
signalhandler ss;
ss.execute();

return 0;
}

