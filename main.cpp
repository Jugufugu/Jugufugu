#include<iostream>
#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<stdlib.h>

using namespace std;
void sig_handler(int signum)
{
cout<<"Signal Number raised is :"<<signum<<endl;
exit(0);
};
int main()
{
alarm(5);
signal(SIGALRM,sig_handler);
for(;;)
sleep(1);
std::cout<<"Hello World";
return 0;
}

