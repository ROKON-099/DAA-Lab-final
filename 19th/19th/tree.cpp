#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int size;
    cout<<"Input Array Size:";
    cin>>size;
    cout<<"Enter "<<size<<" integers:"<<endl;
    for(int i=0;i<size;i++)
    {
     cout<<"arr["<<i<<"]=";
     cin>>arr[i];
    }
    cout<<"\n\nPrint The Data all row:"<<endl;
     for(int i=0;i<size;i++)
    {
     cout<<"arr["<<i<<"]="<<arr[i]<<" ";

    }
    cout<<"\n\nThe Data of any index and Children:"<<endl;
    int index;
    cout<<"Enter an index (0 to :"<<size-1<<") to see its children:";
    cin>>index;
    if(index<0||index>=size)cout<<"Invalid index! Please use(0 to :"<<size-1<<") to see its children:";
    else{
       cout<<"Data at index"<<index<<"="<<arr[index]<<endl;
       int left=2*index+1;
       int right=2*index+2;
       if(left<size)cout<<"Left child --->index "<<left<<" = "<<arr[left]<<endl;
       else cout<<"Left Child ---> none"<<endl;
       if(right<size)cout<<"Right child --->index "<<right<<" = "<<arr[right]<<endl;
       else cout<<"Right Child ---> none"<<endl;

    }
    cout<<"Print the data of any index and its Parent:"<<endl;
    cout<<"Enter an index (0 to :"<<size-1<<") to see its Parent:";
    cin>>index;
    if(index<0||index>=size)cout<<"Invalid index! Please use(0 to :"<<size-1<<") to see its Parent:";
    else{
       cout<<"Data at index "<<index<<" = "<<arr[index]<<endl;
      int parent=(index-1)/2;
       if(index==0)cout<<"This is the ROOT node.It has no Parents:"<<endl;
       else cout<<"parent --->index["<<parent<<"] ="<<arr[parent]<<endl;
    }
    return 0;
}

