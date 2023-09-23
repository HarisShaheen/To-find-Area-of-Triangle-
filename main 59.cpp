#include <iostream>
using namespace std;
class Rectangle{
	private:
		int length;
		int width;
		public:
			Rectangle()
			{
				cout<<"Enter the value of length:";
				cin>>length;
				cout<<"Enter the value of width:";
				cin>>width;
			}
			friend void show(Rectangle A); // Prototype  
};
void show(Rectangle A)
{
	int Area;
	Area=A.length*A.width;
	cout<<"Area of Rectangle is:"<<Area<<endl;
}
int main()
{
	Rectangle rect;
		show(rect);
		return 0;
}
