
#ifndef NDEBUG
#ifndef ARRAY_CHECK_BOUND
#define ARRAY_CHECK_BOUND
#endif
#endif

namespace lah {

	template<class TYPE>
	Array1<TYPE>::Array1() {
		fElements = nullptr;
		fN1 = 0;
	}
	template<class TYPE>
	Array2<TYPE>::Array2() {
		fElements = nullptr;
		fN1 = 0; fN2 = 0;
	}
	template<class TYPE>
	Array3<TYPE>::Array3() {
		fElements = nullptr;
		fN1 = 0; fN2 = 0; fN3 = 0;
	}
	template<class TYPE>
	Array4<TYPE>::Array4() {
		fElements = nullptr;
		fN1 = 0; fN2 = 0; fN3 = 0; fN4 = 0;
	}
	template<class TYPE>
	Array5<TYPE>::Array5() {
		fElements = nullptr;
		fN1 = 0; fN2 = 0; fN3 = 0; fN4 = 0; fN5=0;
	}
	template<class TYPE>
	Array6<TYPE>::Array6() {
		fElements = nullptr;
		fN1 = 0; fN2 = 0; fN3 = 0; fN4 = 0; fN5=0; fN6=0;
	}
	template<class TYPE>
	Array7<TYPE>::Array7() {
		fElements = nullptr;
		fN1 = 0; fN2 = 0; fN3 = 0; fN4 = 0; fN5=0; fN6=0; fN7=0;
	}

	template<class TYPE>
	Array1<TYPE>::Array1(int N1) {
		fElements = nullptr;
		fN1 = 0;
		alloc(N1);
	}

	template<class TYPE>
	void Array1<TYPE>::alloc(int N1) {
		if(fElements == nullptr||fN1 != N1) {
			dealloc();
			fElements = (TYPE*)malloc(sizeof(TYPE)*N1);
			if(fElements == nullptr) ARRAY_ERROR("");
			fN1 = N1;
		}
	}
	template<class TYPE>
	void Array2<TYPE>::alloc(int N1, int N2) {
		if(fElements == nullptr||fN1 != N1||fN2 != N2) {
			dealloc();
			fElements = (TYPE*)malloc(sizeof(TYPE)*N1*N2);
			if(fElements == nullptr) ARRAY_ERROR("");
			fN1 = N1; fN2 = N2;
		}
	}
	template<class TYPE>
	void Array3<TYPE>::alloc(int N1, int N2, int N3) {
		if(fElements == nullptr||fN1 != N1||fN2 != N2||fN3 != N3) {
			dealloc();
			fElements = (TYPE*)malloc(sizeof(TYPE)*N1*N2*N3);
			if(fElements == nullptr) ARRAY_ERROR("");
			fN1 = N1; fN2 = N2; fN3 = N3;
		}
	}
	template<class TYPE>
	void Array4<TYPE>::alloc(int N1, int N2, int N3, int N4) {
		if(fElements == nullptr||fN1 != N1||fN2 != N2||fN3 != N3||fN4 != N4) {
			dealloc();
			fElements = (TYPE*)malloc(sizeof(TYPE)*N1*N2*N3*N4);
			if(fElements == nullptr) ARRAY_ERROR("");
			fN1 = N1; fN2 = N2; fN3 = N3; fN4 = N4;
		}
	}
	template<class TYPE>
	void Array5<TYPE>::alloc(int N1, int N2, int N3, int N4, int N5) {
		if(fElements == nullptr||fN1 != N1||fN2 != N2||fN3 != N3||fN4 != N4
			|| fN5 != N5) {
			dealloc();
			fElements = (TYPE*)malloc(sizeof(TYPE)*N1*N2*N3*N4*N5);
			if(fElements == nullptr) ARRAY_ERROR("");
			fN1 = N1; fN2 = N2; fN3 = N3; fN4 = N4; fN5=N5;
		}
	}
	template<class TYPE>
	void Array6<TYPE>::alloc(int N1, int N2, int N3, int N4, int N5, int N6) {
		if(fElements == nullptr||fN1 != N1||fN2 != N2||fN3 != N3||fN4 != N4
			||fN5 != N5||fN6 != N6) {
			dealloc();
			fElements = (TYPE*)malloc(sizeof(TYPE)*N1*N2*N3*N4*N5*N6);
			if(fElements == nullptr) ARRAY_ERROR("");
			fN1 = N1; fN2 = N2; fN3 = N3; fN4 = N4; fN5=N5; fN6=N6;
		}
	}
	template<class TYPE>
	void Array7<TYPE>::alloc(int N1, int N2, int N3, int N4, int N5, int N6, int N7) {
		if(fElements == nullptr||fN1 != N1||fN2 != N2||fN3 != N3||fN4 != N4
			||fN5 != N5||fN6 != N6||fN7 != N7) {
			dealloc();
			fElements = (TYPE*)malloc(sizeof(TYPE)*N1*N2*N3*N4*N5*N6*N7);
			if(fElements == nullptr) ARRAY_ERROR("");
			fN1 = N1; fN2 = N2; fN3 = N3; fN4 = N4; fN5=N5; fN6=N6; fN7=N7;
		}
	}

	template<class TYPE>
	void Array1<TYPE>::dealloc() {
		if(fElements != nullptr) {
			::free(fElements);
			fElements = nullptr;
			fN1 = 0;
		}
	}
	template<class TYPE>
	void Array2<TYPE>::dealloc() {
		if(fElements != nullptr) {
			::free(fElements);
			fElements = nullptr;
			fN1 = 0; fN2 = 0;
		}
	}
	template<class TYPE>
	void Array3<TYPE>::dealloc() {
		if(fElements != nullptr) {
			::free(fElements);
			fElements = nullptr;
			fN1 = 0; fN2 = 0; fN3 = 0;
		}
	}
	template<class TYPE>
	void Array4<TYPE>::dealloc() {
		if(fElements != nullptr) {
			::free(fElements);
			fElements = nullptr;
			fN1 = 0; fN2 = 0; fN3 = 0; fN4 = 0;
		}
	}
	template<class TYPE>
	void Array5<TYPE>::dealloc() {
		if(fElements != nullptr) {
			::free(fElements);
			fElements = nullptr;
			fN1 = 0; fN2 = 0; fN3 = 0; fN4 = 0; fN5 = 0;
		}
	}
	template<class TYPE>
	void Array6<TYPE>::dealloc() {
		if(fElements != nullptr) {
			::free(fElements);
			fElements = nullptr;
			fN1 = 0; fN2 = 0; fN3 = 0; fN4 = 0; fN5 = 0; fN6 = 0;
		}
	}
	template<class TYPE>
	void Array7<TYPE>::dealloc() {
		if(fElements != nullptr) {
			::free(fElements);
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
	};
	template<class TYPE>
	TYPE &Array1<TYPE>::operator()(int n1) {
#ifdef ARRAY_CHECK_BOUND
		if(n1<0 || n1>=fN1) ARRAY_ERROR("");
#endif
		return *(fElements + n1);
	};
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
	TYPE &Array5<TYPE>::operator()(int n1, int n2, int n3, int n4, int n5) {
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
	TYPE &Array6<TYPE>::operator()(int n1, int n2, int n3, int n4, int n5, int n6) {
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
	TYPE &Array7<TYPE>::operator()(int n1, int n2, int n3, int n4, int n5, int n6, int n7) {
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
	void Array1<TYPE>::copy(TYPE const *data, int N) {
		if(fN1 != N) {
			dealloc();
			alloc(N);
		}
		for(int i = 0; i < N; ++i) {
			fElements[i] = data[i];
		}
	}
	template<class TYPE>
	void Array1<TYPE>::copy(Array1<TYPE> const &r) {
		copy(r.fElements, r.fN1);
	}


	template<class TYPE>
	void Array1<TYPE>::zeroize() {
		::memset(fElements, 0, sizeof(TYPE)*fN1);
	}
	template<class TYPE>
	void Array1<TYPE>::assign_zero() {
		int N = fN1;
		for(int i = 0; i < N; ++i) {
			fElements[i] = 0;
		}
	}
	template<class TYPE>
	void Array2<TYPE>::zeroize() {
		::memset(fElements, 0, sizeof(TYPE)*fN1*fN2);
	}
	template<class TYPE>
	void Array2<TYPE>::assign_zero() {
		int N = fN1*fN2;
		for(int i = 0; i < N; ++i) {
			fElements[i] = 0;
		}
	}
	template<class TYPE>
	void Array3<TYPE>::zeroize() {
		::memset(fElements, 0, sizeof(TYPE)*fN1*fN2*fN3);
	}
	template<class TYPE>
	void Array3<TYPE>::assign_zero() {
		int N = fN1*fN2*fN3;
		for(int i = 0; i < N; ++i) {
			fElements[i] = 0;
		}
	}
	template<class TYPE>
	void Array4<TYPE>::zeroize() {
		::memset(fElements, 0, sizeof(TYPE)*fN1*fN2*fN3*fN4);
	}
	template<class TYPE>
	void Array4<TYPE>::assign_zero() {
		int N = fN1*fN2*fN3*fN4;
		for(int i = 0; i < N; ++i) {
			fElements[i] = 0;
		}
	}
	template<class TYPE>
	void Array5<TYPE>::zeroize() {
		::memset(fElements, 0, sizeof(TYPE)*fN1*fN2*fN3*fN4*fN5);
	}
	template<class TYPE>
	void Array5<TYPE>::assign_zero() {
		int N = fN1*fN2*fN3*fN4*fN5;
		for(int i = 0; i < N; ++i) {
			fElements[i] = 0;
		}
	}
	template<class TYPE>
	void Array6<TYPE>::zeroize() {
		::memset(fElements, 0, sizeof(TYPE)*fN1*fN2*fN3*fN4*fN5*fN6);
	}
	template<class TYPE>
	void Array6<TYPE>::assign_zero() {
		int N = fN1*fN2*fN3*fN4*fN5*fN6;
		for(int i = 0; i < N; ++i) {
			fElements[i] = 0;
		}
	}
	template<class TYPE>
	void Array7<TYPE>::zeroize() {
		::memset(fElements, 0, sizeof(TYPE)*fN1*fN2*fN3*fN4*fN5*fN6*fN7);
	}
	template<class TYPE>
	void Array7<TYPE>::assign_zero() {
		int N = fN1*fN2*fN3*fN4*fN5*fN6*fN7;
		for(int i = 0; i < N; ++i) {
			fElements[i] = 0;
		}
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
