//#include"bit.h"
// Function to set the bth bit of a 
int main(){
int setBit(int a, int b) 
{ 
    return (a | (1 << (b - 1))); 
} 
  
// Function to clear the bth bit of a
int clearBit(int a, int b) 
{ 
    return (a & (~(1 << (b - 1)))); 
} 
  
// Function to toggle the bth bit of a 
int toggleBit(int a, int b) 
{ 
    return (a ^ (1 << (b - 1))); 
} 

//Function to query
int query(int a,int b)
{
    return(a & (1<<(b-1)));
}
}