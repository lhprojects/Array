#ifndef ARRAY_ARRAY_H
#define ARRAY_ARRAY_H

#ifndef ARRAY_NOCHECK_BOUND
#	ifndef ARRAY_CHECK_BOUND
#	define ARRAY_CHECK_BOUND
#	endif
#endif

#include <type_traits>

#define ARRAY_NOEXCEPT 

namespace lah {

	template<class TYPE>
	struct Array1 {

		Array1() ARRAY_NOEXCEPT;
		Array1(int N1) : Array1() { alloc(N1); }
		Array1(Array1 const &r);
		Array1 &operator=(Array1 const &r);
		Array1(Array1 &&r) : Array1() ARRAY_NOEXCEPT { swap(r); }
		Array1 &operator=(Array1 &&r) ARRAY_NOEXCEPT { swap(r); }
		~Array1();

		void swap(Array1 &r) ARRAY_NOEXCEPT { 
			std::swap(fN1, r.fN1);
			auto t = r.fElements;
			r.fElements = fElements;
			fElements = t;
		}
		void alloc(int N1);
		void dealloc() ARRAY_NOEXCEPT;

		TYPE &at(int n1);
		TYPE &operator()(int n1);
		TYPE const &operator()(int n1) const;

		int size1() const;
		TYPE *data() { return fElements; }
		TYPE const *data() const { return fElements; }

		TYPE *begin() { return fElements; }
		TYPE const *begin() const { return fElements; }
		TYPE const *cbegin() const { return fElements; }
		TYPE *end() { return fElements + fN1; }
		TYPE const *end() const { return fElements + fN1; }
		TYPE const *cend() const { return fElements + fN1; }
		int size() { return fN1; }

		void copy(TYPE const *data, int n);
	private:
		void deconstruct() ARRAY_NOEXCEPT;
		int fN1;
		TYPE *fElements;
	};

	template<class TYPE>
	struct Array2 {

		Array2() ARRAY_NOEXCEPT;
		Array2(int N1, int N2) : Array2() { alloc(N1, N2); }
		Array2 &operator=(Array2 const &r);
		Array2(Array2 const &r);
		void alloc(int N1, int N2);
		void dealloc() ARRAY_NOEXCEPT;
		TYPE &at(int n1, int n2);
		TYPE &operator()(int n1, int n2);
		TYPE const &operator()(int n1, int n2) const;
		void zeroize();
		void assign_zero();
		int size1() const;
		int size2() const { return fN2; }
		~Array2();
	private:
		void deconstruct() ARRAY_NOEXCEPT;
		int fN1; int fN2;
		TYPE *fElements;
	};

	template<class TYPE>
	struct Array3 {

		Array3() ARRAY_NOEXCEPT;
		Array3(int N1, int N2, int N3) : Array3() { alloc(N1, N2, N3); }
		Array3 &operator=(Array3 const &r);
		Array3(Array3 const &r);
		
		void alloc(int N1, int N2, int N3);
		void dealloc() ARRAY_NOEXCEPT;
		void zeroize() {
			for (int i = 0; i < fN1*fN2*fN3; ++i) {
				fElements[i] = 0;
			}
		}

		TYPE &at(int n1, int n2, int n3);
		TYPE &operator()(int n1, int n2, int n3);
		TYPE const &operator()(int n1, int n2, int n3) const;
		int size1() const;
		int size2() const { return fN2; }
		int size3() const { return fN3; }

		~Array3();
	private:
		void deconstruct() ARRAY_NOEXCEPT;
		int fN1; int fN2; int fN3;
		TYPE *fElements;
	};

	template<class TYPE>
	struct Array4 {

		Array4() ARRAY_NOEXCEPT;
		Array4(int N1, int N2, int N3, int N4) : Array4() { alloc(N1, N2, N3, N4); }
		Array4 &operator=(Array4 const &r);
		Array4(Array4 const &r);
		void alloc(int N1, int N2, int N3, int N4);
		void dealloc() ARRAY_NOEXCEPT;
		TYPE &at(int n1, int n2, int n3, int n4);
		TYPE &operator()(int n1, int n2, int n3, int n4);
		TYPE const &operator()(int n1, int n2, int n3, int n4) const;
		void zeroize();
		TYPE *flat_begin() { return fElements; }
		TYPE *flat_end() { return fElements + fN1*fN2*fN3*fN4; }
		void assign_zero();
		int size1() const;
		~Array4();
	private:
		void deconstruct() ARRAY_NOEXCEPT;
		int fN1; int fN2; int fN3; int fN4;
		TYPE *fElements;
	};

	template<class TYPE>
	struct Array5 {

		Array5() ARRAY_NOEXCEPT;
		Array5(int N1, int N2, int N3, int N4,int N5) : Array5() { alloc(N1, N2, N3, N4, N5); }
		Array5 &operator=(Array5 const &r);
		Array5(Array5 const &r);
		void alloc(int N1, int N2, int N3, int N4,int N5);
		void dealloc() ARRAY_NOEXCEPT;
		TYPE &at(int n1, int n2, int n3, int n4, int n5);
		TYPE &operator()(int n1, int n2, int n3, int n4, int n5) ARRAY_NOEXCEPT;
		TYPE const &operator()(int n1, int n2, int n3, int n4, int n5) const ARRAY_NOEXCEPT;
		void zeroize();
		void assign_zero();
		~Array5();
		void deconstruct() ARRAY_NOEXCEPT;
	private:
		int fN1; int fN2; int fN3; int fN4; int fN5;
		TYPE *fElements;
	};

	template<class TYPE>
	struct Array6 {

		Array6() ARRAY_NOEXCEPT;
		Array6(int N1, int N2, int N3, int N4, int N5, int N6) : Array6() { alloc(N1, N2, N3, N4, N5, N6); }
		Array6 &operator=(Array6 const &r);
		Array6(Array6 const &r);
		void alloc(int N1, int N2, int N3, int N4, int N5, int N6);
		void dealloc() ARRAY_NOEXCEPT;
		TYPE &at(int n1, int n2, int n3, int n4, int n5, int n6);
		TYPE &operator()(int n1, int n2, int n3, int n4, int n5, int n6) ARRAY_NOEXCEPT;
		TYPE const &operator()(int n1, int n2, int n3, int n4, int n5, int n6) const ARRAY_NOEXCEPT;
		void zeroize();
		void assign_zero();
		~Array6();
	private:
		int fN1; int fN2; int fN3; int fN4; int fN5; int fN6;
		TYPE *fElements;
	};

	template<class TYPE>
	struct Array7 {

		Array7() ARRAY_NOEXCEPT;
		Array7(int N1, int N2, int N3, int N4, int N5, int N6, int N7) : Array7() { alloc(N1, N2, N3, N4, N5, N6, N7); }
		Array7 &operator=(Array7 const &r);
		Array7(Array7 const &r);
		void alloc(int N1, int N2, int N3, int N4, int N5, int N6, int N7);
		void dealloc() ARRAY_NOEXCEPT;
		TYPE &at(int n1, int n2, int n3, int n4, int n5, int n6, int n7);
		TYPE &operator()(int n1, int n2, int n3, int n4, int n5, int n6, int n7) ARRAY_NOEXCEPT;
		TYPE const &operator()(int n1, int n2, int n3, int n4, int n5, int n6, int n7) const ARRAY_NOEXCEPT;
		void zeroize();
		void assign_zero();
		int size1() const;
		~Array7();
	private:
		int fN1; int fN2; int fN3; int fN4; int fN5; int fN6; int fN7;
		TYPE *fElements;
	};

}

#include "Array.inc.h"

#endif
