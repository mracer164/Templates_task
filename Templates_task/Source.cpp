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
	else
		
		return elements.size();
}
int main()
{
	
	try 
	{
		Stack<int> iStack;
		Stack<double> dStack;
		Stack<float> fStack;

		iStack.push(7);
		iStack.push(9);
		cout << "Int stack top element: " << iStack.top() << endl;

		dStack.push(42);
		dStack.push(12);
		dStack.push(56.343);
		cout << "Double stack top element: " << dStack.top() << endl;

		fStack.push(34.252);
		fStack.push(5234.32423);
		fStack.push(53.32423);
		fStack.push(56.32423);
		cout << "Float stack top element: " << fStack.top()<<endl;

		cout<<"Number of elements of int Stack: "<<iStack.size()<<endl;
		cout<<"Number of elements of double Stack: "<<dStack.size()<<endl;
		cout<<"Number of elements of float Stack: " <<fStack.size()<<endl;
		
	}
	catch (exception const& ex) {
	cerr << "Exception: " << ex.what() <<endl;
	system ("pause");
	return EXIT_FAILURE;
}


system("pause");
return 0;
}