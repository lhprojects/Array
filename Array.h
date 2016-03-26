#ifndef ARRAY_ARRAY_H
#define ARRAY_ARRAY_H

#ifndef ARRAY_NOCHECK_BOUND
#	ifndef ARRAY_CHECK_BOUND
#	define ARRAY_CHECK_BOUND
#	endif
#endif

namespace lah {

	template<class TYPE>
	struct Array1 {

		Array1();
		Array1(int N1);
		void alloc(int N1);
		void dealloc();
		TYPE &at(int n1);
		TYPE &operator()(int n1);
		void zeroize();
		void assign_zero();
		TYPE *begin() { return fElements; }
		void copy(TYPE const *data, int N);
		void copy(Array1<TYPE> const &r);
		int size1() const;
		~Array1();
	private:
		Array1 &operator=(Array1 const &r);
		Array1(Array1 const &r);
		int fN1;
		TYPE *fElements;
	};

	template<class TYPE>
	struct Array2 {

		Array2();
		void alloc(int N1, int N2);
		void dealloc();
		TYPE &at(int n1, int n2);
		TYPE &operator()(int n1, int n2);
		void zeroize();
		void assign_zero();
		int size1() const;
		~Array2();
	private:
		Array2 &operator=(Array2 const &r);
		Array2(Array2 const &r);
		int fN1; int fN2;
		TYPE *fElements;
	};

	template<class TYPE>
	struct Array3 {

		Array3();
		void alloc(int N1, int N2, int N3);
		void dealloc();
		TYPE &at(int n1, int n2, int n3);
		TYPE &operator()(int n1, int n2, int n3);
		void zeroize();
		void assign_zero();
		int size1() const;
		~Array3();
	private:
		Array3 &operator=(Array3 const &r);
		Array3(Array3 const &r);
		int fN1; int fN2; int fN3;
		TYPE *fElements;
	};

	template<class TYPE>
	struct Array4 {

		Array4();
		void alloc(int N1, int N2, int N3, int N4);
		void dealloc();
		TYPE &at(int n1, int n2, int n3, int n4);
		TYPE &operator()(int n1, int n2, int n3, int n4);
		void zeroize();
		TYPE *flat_begin() { return fElements; }
		TYPE *flat_end() { return fElements + fN1*fN2*fN3*fN4; }
		void assign_zero();
		int size1() const;
		~Array4();
	private:
		Array4 &operator=(Array4 const &r);
		Array4(Array4 const &r);
		int fN1; int fN2; int fN3; int fN4;
		TYPE *fElements;
	};

	template<class TYPE>
	struct Array5 {

		Array5();
		void alloc(int N1, int N2, int N3, int N4,int N5);
		void dealloc();
		TYPE &at(int n1, int n2, int n3, int n4, int n5);
		TYPE &operator()(int n1, int n2, int n3, int n4, int n5);
		void zeroize();
		void assign_zero();
		~Array5();
	private:
		Array5 &operator=(Array5 const &r);
		Array5(Array5 const &r);
		int fN1; int fN2; int fN3; int fN4; int fN5;
		TYPE *fElements;
	};

	template<class TYPE>
	struct Array6 {

		Array6();
		void alloc(int N1, int N2, int N3, int N4, int N5, int N6);
		void dealloc();
		TYPE &at(int n1, int n2, int n3, int n4, int n5, int n6);
		TYPE &operator()(int n1, int n2, int n3, int n4, int n5, int n6);
		void zeroize();
		void assign_zero();
		~Array6();
	private:
		Array6 &operator=(Array6 const &r);
		Array6(Array6 const &r);
		int fN1; int fN2; int fN3; int fN4; int fN5; int fN6;
		TYPE *fElements;
	};

	template<class TYPE>
	struct Array7 {

		Array7();
		void alloc(int N1, int N2, int N3, int N4, int N5, int N6, int N7);
		void dealloc();
		TYPE &at(int n1, int n2, int n3, int n4, int n5, int n6, int n7);
		TYPE &operator()(int n1, int n2, int n3, int n4, int n5, int n6, int n7);
		void zeroize();
		void assign_zero();
		int size1() const;
		~Array7();
	private:
		Array7 &operator=(Array7 const &r);
		Array7(Array7 const &r);
		int fN1; int fN2; int fN3; int fN4; int fN5; int fN6; int fN7;
		TYPE *fElements;
	};

}

#include "Array.inc.h"

#endif
