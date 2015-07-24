#include <iostream>

using namespace std;

enum class  Status
{

    
    ok=0,
    error=6,
};

int main()
{
    
   Status ret=Status::error;
   Status a=(Status)9;
   cout<<(int)a<<endl;
    
   cout << "Hello World" << endl; 
   
   return 0;
}

