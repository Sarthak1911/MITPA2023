#include<iostream>
using namespace std;
int main()
{
    int w, f, frames[50];
    cout<<"Enter window size: ";
    cin>>w;

    cout<<"Enter no of frames: ";
    cin>>f;

    cout<<"Enter frames:"<<endl;
    for (int i = 1; i <= f; i++)
    {
        cin>>frames[i];
    }
    cout<<"With sliding window protocol the frames will be sent in the following manner."<<endl;
    cout<<"After sending "<<w<<" frames at each stage sender waites for ack send by the receiver"<<endl;
    for (int i = 1; i <= f; i++)
    {
        if (i%w==0)
        {
            cout<<frames[i]<<endl;
            cout<<"Acknowledgement of above frames sent is received by the sender"<<endl;
        }
        else
        {
            cout<<frames[i]<<" ";
        }
        
    }
    if (f%w!=0)
        {
            cout<<"\nAcknowlegde of above frames sent is recieved by sender"<<endl;
        }
    
    return 0;
}