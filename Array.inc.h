
#ifndef NDEBUG
#ifndef ARRAY_CHECK_BOUND
#define ARRAY_CHECK_BOUND
#endif
#endif

#ifndef ARRAY_ERROR
#	define ARRAY_ERROR(x) if(!(x)) { printf("%s", #x);}
#endif
namespace lah {

	template<class TYPE>
	Array1<TYPE>::Array1() ARRAY_NOEXCEPT {
		fElements = nullptr;
		fN1 = 0;
	}
	template<class TYPE>
	Array2<TYPE>::Array2() ARRAY_NOEXCEPT {
		fElements = nullptr;
		fN1 = 0; fN2 = 0;
	}
	template<class TYPE>
	Array3<TYPE>::Array3() ARRAY_NOEXCEPT {
		fElements = nullptr;
		fN1 = 0; fN2 = 0; fN3 = 0;
	}
	template<class TYPE>
	Array4<TYPE>::Array4() ARRAY_NOEXCEPT {
		fElements = nullptr;
		fN1 = 0; fN2 = 0; fN3 = 0; fN4 = 0;
	}
	template<class TYPE>
	Array5<TYPE>::Array5() ARRAY_NOEXCEPT {
		fElements = nullptr;
		fN1 = 0; fN2 = 0; fN3 = 0; fN4 = 0; fN5=0;
	}
	template<class TYPE>
	Array6<TYPE>::Array6() ARRAY_NOEXCEPT {
		fElements = nullptr;
		fN1 = 0; fN2 = 0; fN3 = 0; fN4 = 0; fN5=0; fN6=0;
	}
	template<class TYPE>
	Array7<TYPE>::Array7() ARRAY_NOEXCEPT {
		fElements = nullptr;
		fN1 = 0; fN2 = 0; fN3 = 0; fN4 = 0; fN5=0; fN6=0; fN7=0;
	}

	template<class TYPE>
	void Array1<TYPE>::copy(TYPE const * data, int n) {
		alloc(n);
		for (int i = 0; i < n; ++i) {
			at(i) = data[i];
		}
	}

	template<class TYPE>
	void Array1<TYPE>::alloc(int N1) {
		if (fElements == nullptr || fN1 != N1) {
			dealloc();
			// http://en.cppreference.com/w/cpp/language/value_initialization
			// 3) if T is an array type, each element of the array is value-initialized
			// 4) otherwise, the object is zero-initialized
			fElements = new TYPE[N1]();
			fN1 = N1;
		} else {
			for (int i = 0; i < fN1; ++i) {
				fElements[i].~TYPE();
			}
			new(fElements) TYPE[fN1]();
		}
	}
	template<class TYPE>
	void Array2<TYPE>::alloc(int N1, int N2) {
		if(fElements == nullptr||fN1 != N1||fN2 != N2) {
			dealloc();
			fElements = new TYPE[N1*N2]();
			fN1 = N1; fN2 = N2;
		} else {
			for (int i = 0; i < fN1*fN2; ++i) {
				fElements[i].~TYPE();
			}
			new(fElements) TYPE[fN1*fN2]();
		}
	}
	template<class TYPE>
	void Array3<TYPE>::alloc(int N1, int N2, int N3) {
		if(fElements == nullptr||fN1 != N1||fN2 != N2||fN3 != N3) {
			dealloc();
			fElements = new TYPE[N1*N2*N3]();
			fN1 = N1; fN2 = N2; fN3 = N3;
		} else {
			for (int i = 0; i < fN1*fN2*fN3; ++i) {
				fElements[i].~TYPE();
			}
			new(fElements) TYPE[fN1*fN2*fN3]();
		}
	}
	template<class TYPE>
	void Array4<TYPE>::alloc(int N1, int N2, int N3, int N4) {
		if(fElements == nullptr||fN1 != N1||fN2 != N2||fN3 != N3||fN4 != N4) {
			dealloc();
			fElements = new TYPE[N1*N2*N3*N4]();
			fN1 = N1; fN2 = N2; fN3 = N3; fN4 = N4;
		} else {
			for (int i = 0; i < fN1*fN2*fN3*fN4; ++i) {
				fElements[i].~TYPE();
			}
			new(fElements) TYPE[fN1*fN2*fN3*fN4]();
		}
	}
	template<class TYPE>
	void Array5<TYPE>::alloc(int N1, int N2, int N3, int N4, int N5) {
		if(fElements == nullptr||fN1 != N1||fN2 != N2||fN3 != N3||fN4 != N4
			|| fN5 != N5) {
			dealloc();
			fElements = new TYPE[N1*N2*N3*N4*N5]();
			fN1 = N1; fN2 = N2; fN3 = N3; fN4 = N4; fN5 = N5;
		} else {
			for (int i = 0; i < fN1*fN2*fN3*fN4*fN5; ++i) {
				fElements[i].~TYPE();
			}
			new(fElements) TYPE[fN1*fN2*fN3*fN4*fN5]();
		}
	}
	template<class TYPE>
	void Array6<TYPE>::alloc(int N1, int N2, int N3, int N4, int N5, int N6) {
		if(fElements == nullptr||fN1 != N1||fN2 != N2||fN3 != N3||fN4 != N4
			||fN5 != N5||fN6 != N6) {
			dealloc();
			fElements = new TYPE[N1*N2*N3*N4*N5*N6]();
			fN1 = N1; fN2 = N2; fN3 = N3; fN4 = N4; fN5 = N5; fN6 = N6;
		} else {
			for (int i = 0; i < fN1*fN2*fN3*fN4*fN5*fN6; ++i) {
				fElements[i].~TYPE();
			}
			new(fElements) TYPE[fN1*fN2*fN3*fN4*fN5*fN6]();
		}
	}
	template<class TYPE>
	void Array7<TYPE>::alloc(int N1, int N2, int N3, int N4, int N5, int N6, int N7) {
		if(fElements == nullptr||fN1 != N1||fN2 != N2||fN3 != N3||fN4 != N4
			||fN5 != N5||fN6 != N6||fN7 != N7) {
			dealloc();
			fElements = new TYPE[N1*N2*N3*N4*N5*N6*N7]();
			fN1 = N1; fN2 = N2; fN3 = N3; fN4 = N4; fN5 = N5; fN6 = N6; fN7 = N7;
		} else {
			for (int i = 0; i < fN1*fN2*fN3*fN4*fN5*fN6*fN7; ++i) {
				fElements[i].~TYPE();
			}
			new(fElements) TYPE[fN1*fN2*fN3*fN4*fN5*fN6*fN7]();
		}
	}

	template<class TYPE>
	Array1<TYPE> &Array1<TYPE>::operator=(Array1<TYPE> const &r) {
		if (fElements == nullptr || fN1 != r.fN1) {
			dealloc();
			fElements = new TYPE[fN1]();
			fN1 = r.fN1;
		}
		for (int i = 0; i < fN1; ++i) {
			fElements[i] = r.fElements[i];
		}
		return *this;
	}
	template<class TYPE>
	Array2<TYPE> &Array2<TYPE>::operator=(Array2<TYPE> const &r) {
		if (fElements == nullptr || fN1 != r.fN1 || fN2 != r.fN2) {
			dealloc();
			fElements = new TYPE[fN1*fN2]();
			fN1 = r.fN1; fN2 = r.fN2;
		}
		for (int i = 0; i < fN1*fN2; ++i) {
			fElements[i] = r.fElements[i];
		}
		return *this;
	}
	template<class TYPE>
	Array3<TYPE> &Array3<TYPE>::operator=(Array3<TYPE> const &r) {
		if (fElements == nullptr || fN1 != r.fN1 || fN2 != r.fN2 || fN3 != r.fN3) {
			dealloc();
			fElements = new TYPE[fN1*fN2*fN3]();
			fN1 = r.fN1; fN2 = r.fN2; fN3 = r.fN3;
		}
		for (int i = 0; i < fN1*fN2*fN3; ++i) {
			fElements[i] = r.fElements[i];
		}
		return *this;
	}

	template<class TYPE>
	void Array1<TYPE>::dealloc() ARRAY_NOEXCEPT {
		if(fElements != nullptr) {
			delete[] fElements;
			fElements = nullptr;
			fN1 = 0;
		}
	}
	template<class TYPE>
	void Array2<TYPE>::dealloc() ARRAY_NOEXCEPT {
		if(fElements != nullptr) {
			delete[] fElements;
			fElements = nullptr;
			fN1 = 0; fN2 = 0;
		}
	}
	template<class TYPE>
	void Array3<TYPE>::dealloc() ARRAY_NOEXCEPT {
		if(fElements != nullptr) {
			delete[] fElements;
			fElements = nullptr;
			fN1 = 0; fN2 = 0; fN3 = 0;
		}
	}
	template<class TYPE>
	void Array4<TYPE>::dealloc() ARRAY_NOEXCEPT {
		if(fElements != nullptr) {
			delete[] fElements;
			fElements = nullptr;
			fN1 = 0; fN2 = 0; fN3 = 0; fN4 = 0;
		}
	}
	template<class TYPE>
	void Array5<TYPE>::dealloc() ARRAY_NOEXCEPT {
		if(fElements != nullptr) {
			delete[] fElements;
			fElements = nullptr;
			fN1 = 0; fN2 = 0; fN3 = 0; fN4 = 0; fN5 = 0;
		}
	}
	template<class TYPE>
	void Array6<TYPE>::dealloc() ARRAY_NOEXCEPT {
		if(fElements != nullptr) {
			delete[] fElements;
			fElements = nullptr;
			fN1 = 0; fN2 = 0; fN3 = 0; fN4 = 0; fN5 = 0; fN6 = 0;
		}
	}
	template<class TYPE>
	void Array7<TYPE>::dealloc() ARRAY_NOEXCEPT {
		if(fElements != nullptr) {
			delete[] fElements;
			fElements = nullptr;
			fN1 = 0; fN2 = 0; fN3 = 0; fN4 = 0; fN5 = 0; fN6 = 0; fN7 = 0;
		}
	}

	template<class TYPE>
	TYPE &Array1<TYPE>::at(int n1) {
#ifdef ARRAY_CHECK_BOUND
		if(n1<0 || n1>=fN1) ARRAY_ERROR("");
#endif
		return *(fElements + n1);
	}
	template<class TYPE>
	TYPE &Array1<TYPE>::operator()(int n1) {
#ifdef ARRAY_CHECK_BOUND
		if(n1<0 || n1>=fN1) ARRAY_ERROR("");
#endif
		return *(fElements + n1);
	}

	template<class TYPE>
	TYPE const &Array1<TYPE>::operator()(int n1) const {
#ifdef ARRAY_CHECK_BOUND
		if (n1<0 || n1 >= fN1) ARRAY_ERROR("");
#endif
		return *(fElements + n1);
	}
	template<class TYPE>
	TYPE &Array2<TYPE>::at(int n1, int n2) {
#ifdef ARRAY_CHECK_BOUND
		if(n1<0 || n1>=fN1) ARRAY_ERROR("");
		if(n2<0 || n2>=fN2) ARRAY_ERROR("");
#endif
		return *(fElements + n1*fN2 + n2);
	}
	template<class TYPE>
	TYPE &Array2<TYPE>::operator()(int n1, int n2) {
#ifdef ARRAY_CHECK_BOUND
		if(n1<0 || n1>=fN1) ARRAY_ERROR("");
		if(n2<0 || n2>=fN2) ARRAY_ERROR("");
#endif
		return *(fElements + n1*fN2 + n2);
	}
	template<class TYPE>
	TYPE const &Array2<TYPE>::operator()(int n1, int n2) const {
#ifdef ARRAY_CHECK_BOUND
		if (n1<0 || n1 >= fN1) ARRAY_ERROR("");
		if (n2<0 || n2 >= fN2) ARRAY_ERROR("");
#endif
		return *(fElements + n1*fN2 + n2);
	}
	template<class TYPE>
	TYPE &Array3<TYPE>::at(int n1, int n2, int n3) {
#ifdef ARRAY_CHECK_BOUND
		if(n1<0 || n1>=fN1) ARRAY_ERROR("");
		if(n2<0 || n2>=fN2) ARRAY_ERROR("");
		if(n3<0 || n3>=fN3) ARRAY_ERROR("");
#endif
		return *(fElements + (n1*fN2 + n2)*fN3 + n3);
	}
	template<class TYPE>
	TYPE &Array3<TYPE>::operator()(int n1, int n2, int n3) {
#ifdef ARRAY_CHECK_BOUND
		if(n1<0 || n1>=fN1) ARRAY_ERROR("");
		if(n2<0 || n2>=fN2) ARRAY_ERROR("");
		if(n3<0 || n3>=fN3) ARRAY_ERROR("");
#endif
		return *(fElements + (n1*fN2 + n2)*fN3 + n3);
	}
	template<class TYPE>
	TYPE const &Array3<TYPE>::operator()(int n1, int n2, int n3) const {
#ifdef ARRAY_CHECK_BOUND
		if (n1<0 || n1 >= fN1) ARRAY_ERROR("");
		if (n2<0 || n2 >= fN2) ARRAY_ERROR("");
		if (n3<0 || n3 >= fN3) ARRAY_ERROR("");
#endif
		return *(fElements + (n1*fN2 + n2)*fN3 + n3);
	}
	template<class TYPE>
	TYPE &Array4<TYPE>::at(int n1, int n2, int n3, int n4) {
#ifdef ARRAY_CHECK_BOUND
		if(n1<0 || n1>=fN1) ARRAY_ERROR("");
		if(n2<0 || n2>=fN2) ARRAY_ERROR("");
		if(n3<0 || n3>=fN3) ARRAY_ERROR("");
		if(n4<0 || n4>=fN4) ARRAY_ERROR("");
#endif
		return *(fElements + ((n1*fN2 + n2)*fN3 + n3)*fN4 + n4);
	}
	template<class TYPE>
	TYPE &Array4<TYPE>::operator()(int n1, int n2, int n3, int n4) {
#ifdef ARRAY_CHECK_BOUND
		if(n1<0 || n1>=fN1) ARRAY_ERROR("");
		if(n2<0 || n2>=fN2) ARRAY_ERROR("");
		if(n3<0 || n3>=fN3) ARRAY_ERROR("");
		if(n4<0 || n4>=fN4) ARRAY_ERROR("");
#endif
		return *(fElements + ((n1*fN2 + n2)*fN3 + n3)*fN4 + n4);
	}
	template<class TYPE>
	TYPE const &Array4<TYPE>::operator()(int n1, int n2, int n3, int n4) const {
#ifdef ARRAY_CHECK_BOUND
		if (n1<0 || n1 >= fN1) ARRAY_ERROR("");
		if (n2<0 || n2 >= fN2) ARRAY_ERROR("");
		if (n3<0 || n3 >= fN3) ARRAY_ERROR("");
		if (n4<0 || n4 >= fN4) ARRAY_ERROR("");
#endif
		return *(fElements + ((n1*fN2 + n2)*fN3 + n3)*fN4 + n4);
	}
	template<class TYPE>
	TYPE &Array5<TYPE>::at(int n1, int n2, int n3, int n4, int n5) {
#ifdef ARRAY_CHECK_BOUND
		if(n1<0 || n1>=fN1) ARRAY_ERROR("");
		if(n2<0 || n2>=fN2) ARRAY_ERROR("");
		if(n3<0 || n3>=fN3) ARRAY_ERROR("");
		if(n4<0 || n4>=fN4) ARRAY_ERROR("");
		if(n5<0 || n5>=fN5) ARRAY_ERROR("");
#endif
		return *(fElements + (((n1*fN2 + n2)*fN3 + n3)*fN4 + n4)*fN5 + n5);
	}
	template<class TYPE>
	TYPE &Array5<TYPE>::operator()(int n1, int n2, int n3, int n4, int n5) ARRAY_NOEXCEPT{
#ifdef ARRAY_CHECK_BOUND
		if(n1<0 || n1>=fN1) ARRAY_ERROR("");
		if(n2<0 || n2>=fN2) ARRAY_ERROR("");
		if(n3<0 || n3>=fN3) ARRAY_ERROR("");
		if(n4<0 || n4>=fN4) ARRAY_ERROR("");
		if(n5<0 || n5>=fN5) ARRAY_ERROR("");
#endif
		return *(fElements + (((n1*fN2 + n2)*fN3 + n3)*fN4 + n4)*fN5 + n5);
	}
	template<class TYPE>
	TYPE const &Array5<TYPE>::operator()(int n1, int n2, int n3, int n4, int n5) const ARRAY_NOEXCEPT {
#ifdef ARRAY_CHECK_BOUND
		if (n1<0 || n1 >= fN1) ARRAY_ERROR("");
		if (n2<0 || n2 >= fN2) ARRAY_ERROR("");
		if (n3<0 || n3 >= fN3) ARRAY_ERROR("");
		if (n4<0 || n4 >= fN4) ARRAY_ERROR("");
		if (n5<0 || n5 >= fN5) ARRAY_ERROR("");
#endif
		return *(fElements + (((n1*fN2 + n2)*fN3 + n3)*fN4 + n4)*fN5 + n5);
	}
	template<class TYPE>
	TYPE &Array6<TYPE>::at(int n1, int n2, int n3, int n4, int n5, int n6) {
#ifdef ARRAY_CHECK_BOUND
		if(n1<0 || n1>=fN1) ARRAY_ERROR("");
		if(n2<0 || n2>=fN2) ARRAY_ERROR("");
		if(n3<0 || n3>=fN3) ARRAY_ERROR("");
		if(n4<0 || n4>=fN4) ARRAY_ERROR("");
		if(n5<0 || n5>=fN5) ARRAY_ERROR("");
		if(n6<0 || n6>=fN6) ARRAY_ERROR("");
#endif
		return *(fElements + ((((n1*fN2 + n2)*fN3 + n3)*fN4 + n4)*fN5 + n5)*fN6 + n6);
	}
	template<class TYPE>
	TYPE &Array6<TYPE>::operator()(int n1, int n2, int n3, int n4, int n5, int n6) ARRAY_NOEXCEPT {
#ifdef ARRAY_CHECK_BOUND
		if(n1<0 || n1>=fN1) ARRAY_ERROR("");
		if(n2<0 || n2>=fN2) ARRAY_ERROR("");
		if(n3<0 || n3>=fN3) ARRAY_ERROR("");
		if(n4<0 || n4>=fN4) ARRAY_ERROR("");
		if(n5<0 || n5>=fN5) ARRAY_ERROR("");
		if(n6<0 || n6>=fN6) ARRAY_ERROR("");
#endif
		return *(fElements + ((((n1*fN2 + n2)*fN3 + n3)*fN4 + n4)*fN5 + n5)*fN6 + n6);
	}
	template<class TYPE>
	TYPE const &Array6<TYPE>::operator()(int n1, int n2, int n3, int n4, int n5, int n6) const ARRAY_NOEXCEPT {
#ifdef ARRAY_CHECK_BOUND
		if (n1<0 || n1 >= fN1) ARRAY_ERROR("");
		if (n2<0 || n2 >= fN2) ARRAY_ERROR("");
		if (n3<0 || n3 >= fN3) ARRAY_ERROR("");
		if (n4<0 || n4 >= fN4) ARRAY_ERROR("");
		if (n5<0 || n5 >= fN5) ARRAY_ERROR("");
		if (n6<0 || n6 >= fN6) ARRAY_ERROR("");
#endif
		return *(fElements + ((((n1*fN2 + n2)*fN3 + n3)*fN4 + n4)*fN5 + n5)*fN6 + n6);
	}
	template<class TYPE>
	TYPE &Array7<TYPE>::at(int n1, int n2, int n3, int n4, int n5, int n6, int n7) {
#ifdef ARRAY_CHECK_BOUND
		if(n1<0 || n1>=fN1) ARRAY_ERROR("");
		if(n2<0 || n2>=fN2) ARRAY_ERROR("");
		if(n3<0 || n3>=fN3) ARRAY_ERROR("");
		if(n4<0 || n4>=fN4) ARRAY_ERROR("");
		if(n5<0 || n5>=fN5) ARRAY_ERROR("");
		if(n6<0 || n6>=fN6) ARRAY_ERROR("");
		if(n7<0 || n7>=fN7) ARRAY_ERROR("");
#endif
		return *(fElements + (((((n1*fN2 + n2)*fN3 + n3)*fN4 + n4)*fN5 + n5)*fN6 + n6)*fN7 + n7);
	}
	template<class TYPE>
	TYPE &Array7<TYPE>::operator()(int n1, int n2, int n3, int n4, int n5, int n6, int n7) ARRAY_NOEXCEPT {
#ifdef ARRAY_CHECK_BOUND
		if(n1<0 || n1>=fN1) ARRAY_ERROR("");
		if(n2<0 || n2>=fN2) ARRAY_ERROR("");
		if(n3<0 || n3>=fN3) ARRAY_ERROR("");
		if(n4<0 || n4>=fN4) ARRAY_ERROR("");
		if(n5<0 || n5>=fN5) ARRAY_ERROR("");
		if(n6<0 || n6>=fN6) ARRAY_ERROR("");
		if(n7<0 || n7>=fN7) ARRAY_ERROR("");
#endif
		return *(fElements + (((((n1*fN2 + n2)*fN3 + n3)*fN4 + n4)*fN5 + n5)*fN6 + n6)*fN7 + n7);
	}
	template<class TYPE>
	TYPE const &Array7<TYPE>::operator()(int n1, int n2, int n3, int n4, int n5, int n6, int n7) const ARRAY_NOEXCEPT {
#ifdef ARRAY_CHECK_BOUND
		if (n1<0 || n1 >= fN1) ARRAY_ERROR("");
		if (n2<0 || n2 >= fN2) ARRAY_ERROR("");
		if (n3<0 || n3 >= fN3) ARRAY_ERROR("");
		if (n4<0 || n4 >= fN4) ARRAY_ERROR("");
		if (n5<0 || n5 >= fN5) ARRAY_ERROR("");
		if (n6<0 || n6 >= fN6) ARRAY_ERROR("");
		if (n7<0 || n7 >= fN7) ARRAY_ERROR("");
#endif
		return *(fElements + (((((n1*fN2 + n2)*fN3 + n3)*fN4 + n4)*fN5 + n5)*fN6 + n6)*fN7 + n7);
	}

	template<class TYPE>
	int Array1<TYPE>::size1() const {
		return fN1;
	}
	template<class TYPE>
	int Array2<TYPE>::size1() const {
		return fN1;
	}
	template<class TYPE>
	int Array3<TYPE>::size1() const {
		return fN1;
	}
	template<class TYPE>
	int Array4<TYPE>::size1() const {
		return fN1;
	}
	template<class TYPE>
	int Array7<TYPE>::size1() const {
		return fN1;
	}

	template<class TYPE>
	Array1<TYPE>::~Array1() {
		dealloc();
	}
	template<class TYPE>
	Array2<TYPE>::~Array2() {
		dealloc();
	}
	template<class TYPE>
	Array3<TYPE>::~Array3() {
		dealloc();
	}
	template<class TYPE>
	Array4<TYPE>::~Array4() {
		dealloc();
	}
	template<class TYPE>
	Array5<TYPE>::~Array5() {
		dealloc();
	}
	template<class TYPE>
	Array6<TYPE>::~Array6() {
		dealloc();
	}
	template<class TYPE>
	Array7<TYPE>::~Array7() {
		dealloc();
	}

}
