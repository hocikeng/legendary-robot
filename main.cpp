#include <stdio.h>
#include <iostream>
using namespace std;
class troad
{
public:
int Width;
float Length;
troad();
troad(float length0, int width0);
};
troad::troad(float length0, int width0)
{
if (length0>0)
Length=length0;
else Length=1;
if (width0>0)
Width=width0;
else Width=1;
}
troad::troad()
{
Length=0;
Width=0;
}
int main()
{
troad road;
std::cout<<"Road Length = "<<road.Length<<"\nRoad Width = "<<road.Width<<std::endl;
troad road1(50.5,4);
std::cout<<"Road Length = "<<road1.Length<<"\nRoad Width = "<<road1.Width<<std::endl;
return 0;
}
