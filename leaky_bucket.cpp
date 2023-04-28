#include<iostream>
using namespace std;
int main()
{
    int no_queries, input_size, output_size;
    int bucket_size, size_left, storage;

    storage = 0;
    no_queries = 4;
    bucket_size = 10;
    input_size = 4;
    output_size = 1;
    for (int i = 0; i < no_queries; i++)
    {
        size_left = bucket_size - storage;
        if (input_size <= size_left)
        {
            storage += input_size;
        }
        else
        {
            cout<<"Packet loss: "<<input_size<<endl;
        }
        cout<<"Buffer Size: "<<storage<<" out of Bucket Size: "<<bucket_size<<endl;
        storage-= output_size;
    }
    return 0;
}