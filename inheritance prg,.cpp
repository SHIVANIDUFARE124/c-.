#include<iostream>
using namespace std;
class vehicle{
	public:
		vehicle()
		{
			cout<<"this is a vehicle"<<endl;
		}
};
class car:public vehicle{
};
int main()
{
	car obj;
	return 0;
}
