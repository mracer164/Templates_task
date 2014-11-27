#include <iostream>
#include <cstdlib>
#include<string>
#include<vector>
#include<stdexcept>

using namespace std;

template <typename T, typename V = vector<T> >
	class Stack 
	{
	private:
		V elements; 
	public:
		void push(T const&);
		void pop(); 
		T top() const; 
		T size() const; 

		bool empty() const 
		{ 
			return elements.empty();
		}
	};

template <typename T, typename V>
void Stack<T,V>::push (T const& e)
{
	elements.push_back(e); 
}

template <typename T, typename V>
void Stack<T,V>::pop ()
{
	if (elements.empty()) 
	{
		throw out_of_range("Empty stack!");
	}
	elements.pop_back(); 
}

template <typename T, typename V>
T Stack<T,V>::top () const
{
	if (elements.empty()) 
	{
		throw out_of_range("Empty stack!");
	}
	return elements.back();
}

template <typename T, typename V>
T Stack<T,V>::size() const
{
	if(elements.empty())
	{
	throw out_of_range("Empty stack!");
	}
	elements.size();
}

int main()
{
	try 
	{
		Stack<int> iStack;
		Stack<double> dStack;
		Stack<string> sStack;

		iStack.push(7);
		cout << iStack.top() << endl;
		iStack.push(9);
		cout << iStack.top() << endl;

		dStack.push(42);
		dStack.push(12);
		cout << dStack.top() << endl;
		
		cout << dStack.top() << endl;
		

		sStack.push("el");
		cout<< sStack.top()<<endl;

		cout<<"Number of elements of int Stack: "<<iStack.size()<<endl;
		cout<<"Number of elements of double Stack: "<<dStack.size()<<endl;
		/*cout<<"Number of elements of string Stack: "<<sStack.size()<<endl;*/
	}
	catch (exception const& ex) {
	cerr << "Exception: " << ex.what() <<endl;
	system ("pause");
	return EXIT_FAILURE;
}


system("pause");
return 0;
}