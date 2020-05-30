#pragma once

/// This is a brief description of this class
///
/// this is a *detailed* description of this **class**.
///
/// ### Example
///~~~~~~~~~~~~~~~~~~~~~~~.cpp
/// MyClass * a{new MyClass}; // a comment
/// MyClass * b{new MyClass}; // a comment
/// MyClass * c{new MyClass}; // a comment
///~~~~~~~~~~~~~~~~~~~~~~~
class MyClass
{
public:

	/// brief descr
	///
	/// this is the detailed one. More details. This is similar to anotherMemberFunction()
	/// @param a this describes parameter a
	/// @param b this describes parameter b
	/// @returns this function does not return nothing important
	/// @see anotherMemberFunction() anotherMemberFunction2()
	/// @note This is a note
	/// @attention A little more important than a note
	/// @warning A warning is super important
	void  memberFunction(int a, int b);



	void anotherMemberFunction();


	void anotherMemberFunction2();
};

