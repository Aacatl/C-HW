// inserting into a list
#include <iostream>
#include <string>
#include <fstream>
#include <thread>

using namespace std;
class SomeClass
{
public:
	struct FunctorOne
	{
		void operator()(int count, string name)
		{
			cout << count << endl;
			cout << name << endl;
		}
	};
	struct FunctorTwo
	{
		void operator()(int count, string name)
		{
			cout << count + 13 << endl;
			cout << name << endl;
		}
	};
	struct FunctorThree
	{
		void operator()(int count, string name)
		{
			cout << count << endl;
			cout << name << endl;
		}
	};
};
int main()
{
	int MaxInt = 0;
	while (MaxInt < 100)
	{
		cout << "Start\n";
		SomeClass oj1;
		SomeClass* oj1ptr;
		oj1.FunctorOne()();
		thread funcThreadOne(SomeClass::FunctorOne(&oj1ptr), 7, "One");
		thread funcThreadTwo(SomeClass::FunctorTwo(&oj1ptr),"Two");
		thread funcThreadThree(SomeClass::FunctorThree(&oj1ptr),MaxInt,"Three");
		cout << "\n\n--------------\n\n";
		funcThreadOne.join();
		funcThreadTwo.join();
		funcThreadThree.join();
		cout << "End\n";
	}
}
