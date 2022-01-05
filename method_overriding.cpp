#include<iostream>
#include<string>
using namespace std;
class base{
	public:
		int a;
		void read(){
			cout << "enter the value of a:" ;
			cin >> a;
		}
		void display(){
			cout << "value of a" << a << endl;
			}
	};
	class child: public base {
		public:
			int b;
			child() {
			     a = 20;
			  }
			  void read() {
			  	cout << "enter the value of b:";
			  	cin >> b;
			  }
			  void display() {
			  	cout << "value of a" << a << "value of b" << b << endl;
			  	}
};
int main () {
	base obj;
	child obj1;
	obj.read();
	obj.display();
	obj1.read();
	obj1.display();
	return 0;
}
			    
			    
			
