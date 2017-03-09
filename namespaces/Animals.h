#pragma once

#include <iostream>
#include <string>

using namespace std;

namespace jwp {

	const string CATNAME = "Tiddles";

	class Cat {
	public:
		Cat();
		virtual ~Cat();
		void speak();

	};

} 
