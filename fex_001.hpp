/*
 * fex_001.hpp
 *
 *  Created on: Aug 15, 2017
 *      Author: bill
 */

#ifndef FEX_001_HPP_
#define FEX_001_HPP_

#include <initializer_list>
#include <vector>
#include <memory>

class A {
public:
	A(std::initializer_list<int> aa): vv{aa}{};
private:
	std::vector<int> vv;
};

class B {
public:
	int xx;
private:
	std::unique_ptr<A> aa;
};



#endif /* FEX_001_HPP_ */
