
#include <iostream>
#include <stack>

int main() {
	std::stack<int> st;

	// push elements
	st.push(10);
	st.push(20);
	st.push(30);

	std::cout << "Top element: " << st.top() << '\n';
	std::cout << "Size: " << st.size() << '\n';

	// pop one element
	st.pop();
	std::cout << "After pop, top: " << st.top() << " Size: " << st.size() << '\n';

	// check empty and clear stack by popping
	std::cout << "Popping all elements:" << '\n';
	while (!st.empty()) {
		std::cout << st.top() << '\n';
		st.pop();
	}

	std::cout << "Stack empty: " << std::boolalpha << st.empty() << '\n';
	return 0;
}
