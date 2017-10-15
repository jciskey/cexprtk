#ifndef GENERATE_CUSTOM_FUNCTIONS_IMPLEMENTATION
#define GENERATE_CUSTOM_FUNCTIONS_IMPLEMENTATION
#include "cexprtk_custom_functions.hpp"


class CustomFunction_0 : public virtual CustomFunctionBase
{

public:
    typedef ExpressionValueType (*FunctionType)(void *, void ** );

protected:
    FunctionType _cythonfunc;

public:
    CustomFunction_0() = delete;

    CustomFunction_0( 
                 const std::string &key_,
                 void *pycallable_,
                 FunctionType cythonfunc_) : exprtk::ifunction<ExpressionValueType>(0), 
                                             CustomFunctionBase (0, key_, pycallable_),
                                             _cythonfunc(cythonfunc_)
  {
    set_pycallable(pycallable_);
  }

  virtual ExpressionValueType operator()()
{
  ExpressionValueType retval = 0.0;
  if (IfExceptionRaisedReturnNaN(retval))
  {
    return retval;
  }
  retval = _cythonfunc(_pycallable, &_pyexception );
  IfExceptionRaisedReturnNaN(retval);
  return retval;
}


  virtual ~CustomFunction_0(){ }

};  


class CustomFunction_1 : public virtual CustomFunctionBase
{

public:
    typedef ExpressionValueType (*FunctionType)(void *, void ** , ExpressionValueType);

protected:
    FunctionType _cythonfunc;

public:
    CustomFunction_1() = delete;

    CustomFunction_1( 
                 const std::string &key_,
                 void *pycallable_,
                 FunctionType cythonfunc_) : exprtk::ifunction<ExpressionValueType>(1), 
                                             CustomFunctionBase (1, key_, pycallable_),
                                             _cythonfunc(cythonfunc_)
  {
    set_pycallable(pycallable_);
  }

  virtual ExpressionValueType operator()(const ExpressionValueType& a1)
{
  ExpressionValueType retval = 0.0;
  if (IfExceptionRaisedReturnNaN(retval))
  {
    return retval;
  }
  retval = _cythonfunc(_pycallable, &_pyexception , a1);
  IfExceptionRaisedReturnNaN(retval);
  return retval;
}


  virtual ~CustomFunction_1(){ }

};  


class CustomFunction_2 : public virtual CustomFunctionBase
{

public:
    typedef ExpressionValueType (*FunctionType)(void *, void ** , ExpressionValueType,ExpressionValueType);

protected:
    FunctionType _cythonfunc;

public:
    CustomFunction_2() = delete;

    CustomFunction_2( 
                 const std::string &key_,
                 void *pycallable_,
                 FunctionType cythonfunc_) : exprtk::ifunction<ExpressionValueType>(2), 
                                             CustomFunctionBase (2, key_, pycallable_),
                                             _cythonfunc(cythonfunc_)
  {
    set_pycallable(pycallable_);
  }

  virtual ExpressionValueType operator()(const ExpressionValueType& a1,const ExpressionValueType& a2)
{
  ExpressionValueType retval = 0.0;
  if (IfExceptionRaisedReturnNaN(retval))
  {
    return retval;
  }
  retval = _cythonfunc(_pycallable, &_pyexception , a1,a2);
  IfExceptionRaisedReturnNaN(retval);
  return retval;
}


  virtual ~CustomFunction_2(){ }

};  


class CustomFunction_3 : public virtual CustomFunctionBase
{

public:
    typedef ExpressionValueType (*FunctionType)(void *, void ** , ExpressionValueType,ExpressionValueType,ExpressionValueType);

protected:
    FunctionType _cythonfunc;

public:
    CustomFunction_3() = delete;

    CustomFunction_3( 
                 const std::string &key_,
                 void *pycallable_,
                 FunctionType cythonfunc_) : exprtk::ifunction<ExpressionValueType>(3), 
                                             CustomFunctionBase (3, key_, pycallable_),
                                             _cythonfunc(cythonfunc_)
  {
    set_pycallable(pycallable_);
  }

  virtual ExpressionValueType operator()(const ExpressionValueType& a1,const ExpressionValueType& a2,const ExpressionValueType& a3)
{
  ExpressionValueType retval = 0.0;
  if (IfExceptionRaisedReturnNaN(retval))
  {
    return retval;
  }
  retval = _cythonfunc(_pycallable, &_pyexception , a1,a2,a3);
  IfExceptionRaisedReturnNaN(retval);
  return retval;
}


  virtual ~CustomFunction_3(){ }

};  


class CustomFunction_4 : public virtual CustomFunctionBase
{

public:
    typedef ExpressionValueType (*FunctionType)(void *, void ** , ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType);

protected:
    FunctionType _cythonfunc;

public:
    CustomFunction_4() = delete;

    CustomFunction_4( 
                 const std::string &key_,
                 void *pycallable_,
                 FunctionType cythonfunc_) : exprtk::ifunction<ExpressionValueType>(4), 
                                             CustomFunctionBase (4, key_, pycallable_),
                                             _cythonfunc(cythonfunc_)
  {
    set_pycallable(pycallable_);
  }

  virtual ExpressionValueType operator()(const ExpressionValueType& a1,const ExpressionValueType& a2,const ExpressionValueType& a3,const ExpressionValueType& a4)
{
  ExpressionValueType retval = 0.0;
  if (IfExceptionRaisedReturnNaN(retval))
  {
    return retval;
  }
  retval = _cythonfunc(_pycallable, &_pyexception , a1,a2,a3,a4);
  IfExceptionRaisedReturnNaN(retval);
  return retval;
}


  virtual ~CustomFunction_4(){ }

};  


class CustomFunction_5 : public virtual CustomFunctionBase
{

public:
    typedef ExpressionValueType (*FunctionType)(void *, void ** , ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType);

protected:
    FunctionType _cythonfunc;

public:
    CustomFunction_5() = delete;

    CustomFunction_5( 
                 const std::string &key_,
                 void *pycallable_,
                 FunctionType cythonfunc_) : exprtk::ifunction<ExpressionValueType>(5), 
                                             CustomFunctionBase (5, key_, pycallable_),
                                             _cythonfunc(cythonfunc_)
  {
    set_pycallable(pycallable_);
  }

  virtual ExpressionValueType operator()(const ExpressionValueType& a1,const ExpressionValueType& a2,const ExpressionValueType& a3,const ExpressionValueType& a4,const ExpressionValueType& a5)
{
  ExpressionValueType retval = 0.0;
  if (IfExceptionRaisedReturnNaN(retval))
  {
    return retval;
  }
  retval = _cythonfunc(_pycallable, &_pyexception , a1,a2,a3,a4,a5);
  IfExceptionRaisedReturnNaN(retval);
  return retval;
}


  virtual ~CustomFunction_5(){ }

};  


class CustomFunction_6 : public virtual CustomFunctionBase
{

public:
    typedef ExpressionValueType (*FunctionType)(void *, void ** , ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType);

protected:
    FunctionType _cythonfunc;

public:
    CustomFunction_6() = delete;

    CustomFunction_6( 
                 const std::string &key_,
                 void *pycallable_,
                 FunctionType cythonfunc_) : exprtk::ifunction<ExpressionValueType>(6), 
                                             CustomFunctionBase (6, key_, pycallable_),
                                             _cythonfunc(cythonfunc_)
  {
    set_pycallable(pycallable_);
  }

  virtual ExpressionValueType operator()(const ExpressionValueType& a1,const ExpressionValueType& a2,const ExpressionValueType& a3,const ExpressionValueType& a4,const ExpressionValueType& a5,const ExpressionValueType& a6)
{
  ExpressionValueType retval = 0.0;
  if (IfExceptionRaisedReturnNaN(retval))
  {
    return retval;
  }
  retval = _cythonfunc(_pycallable, &_pyexception , a1,a2,a3,a4,a5,a6);
  IfExceptionRaisedReturnNaN(retval);
  return retval;
}


  virtual ~CustomFunction_6(){ }

};  


class CustomFunction_7 : public virtual CustomFunctionBase
{

public:
    typedef ExpressionValueType (*FunctionType)(void *, void ** , ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType);

protected:
    FunctionType _cythonfunc;

public:
    CustomFunction_7() = delete;

    CustomFunction_7( 
                 const std::string &key_,
                 void *pycallable_,
                 FunctionType cythonfunc_) : exprtk::ifunction<ExpressionValueType>(7), 
                                             CustomFunctionBase (7, key_, pycallable_),
                                             _cythonfunc(cythonfunc_)
  {
    set_pycallable(pycallable_);
  }

  virtual ExpressionValueType operator()(const ExpressionValueType& a1,const ExpressionValueType& a2,const ExpressionValueType& a3,const ExpressionValueType& a4,const ExpressionValueType& a5,const ExpressionValueType& a6,const ExpressionValueType& a7)
{
  ExpressionValueType retval = 0.0;
  if (IfExceptionRaisedReturnNaN(retval))
  {
    return retval;
  }
  retval = _cythonfunc(_pycallable, &_pyexception , a1,a2,a3,a4,a5,a6,a7);
  IfExceptionRaisedReturnNaN(retval);
  return retval;
}


  virtual ~CustomFunction_7(){ }

};  


class CustomFunction_8 : public virtual CustomFunctionBase
{

public:
    typedef ExpressionValueType (*FunctionType)(void *, void ** , ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType);

protected:
    FunctionType _cythonfunc;

public:
    CustomFunction_8() = delete;

    CustomFunction_8( 
                 const std::string &key_,
                 void *pycallable_,
                 FunctionType cythonfunc_) : exprtk::ifunction<ExpressionValueType>(8), 
                                             CustomFunctionBase (8, key_, pycallable_),
                                             _cythonfunc(cythonfunc_)
  {
    set_pycallable(pycallable_);
  }

  virtual ExpressionValueType operator()(const ExpressionValueType& a1,const ExpressionValueType& a2,const ExpressionValueType& a3,const ExpressionValueType& a4,const ExpressionValueType& a5,const ExpressionValueType& a6,const ExpressionValueType& a7,const ExpressionValueType& a8)
{
  ExpressionValueType retval = 0.0;
  if (IfExceptionRaisedReturnNaN(retval))
  {
    return retval;
  }
  retval = _cythonfunc(_pycallable, &_pyexception , a1,a2,a3,a4,a5,a6,a7,a8);
  IfExceptionRaisedReturnNaN(retval);
  return retval;
}


  virtual ~CustomFunction_8(){ }

};  


class CustomFunction_9 : public virtual CustomFunctionBase
{

public:
    typedef ExpressionValueType (*FunctionType)(void *, void ** , ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType);

protected:
    FunctionType _cythonfunc;

public:
    CustomFunction_9() = delete;

    CustomFunction_9( 
                 const std::string &key_,
                 void *pycallable_,
                 FunctionType cythonfunc_) : exprtk::ifunction<ExpressionValueType>(9), 
                                             CustomFunctionBase (9, key_, pycallable_),
                                             _cythonfunc(cythonfunc_)
  {
    set_pycallable(pycallable_);
  }

  virtual ExpressionValueType operator()(const ExpressionValueType& a1,const ExpressionValueType& a2,const ExpressionValueType& a3,const ExpressionValueType& a4,const ExpressionValueType& a5,const ExpressionValueType& a6,const ExpressionValueType& a7,const ExpressionValueType& a8,const ExpressionValueType& a9)
{
  ExpressionValueType retval = 0.0;
  if (IfExceptionRaisedReturnNaN(retval))
  {
    return retval;
  }
  retval = _cythonfunc(_pycallable, &_pyexception , a1,a2,a3,a4,a5,a6,a7,a8,a9);
  IfExceptionRaisedReturnNaN(retval);
  return retval;
}


  virtual ~CustomFunction_9(){ }

};  


class CustomFunction_10 : public virtual CustomFunctionBase
{

public:
    typedef ExpressionValueType (*FunctionType)(void *, void ** , ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType);

protected:
    FunctionType _cythonfunc;

public:
    CustomFunction_10() = delete;

    CustomFunction_10( 
                 const std::string &key_,
                 void *pycallable_,
                 FunctionType cythonfunc_) : exprtk::ifunction<ExpressionValueType>(10), 
                                             CustomFunctionBase (10, key_, pycallable_),
                                             _cythonfunc(cythonfunc_)
  {
    set_pycallable(pycallable_);
  }

  virtual ExpressionValueType operator()(const ExpressionValueType& a1,const ExpressionValueType& a2,const ExpressionValueType& a3,const ExpressionValueType& a4,const ExpressionValueType& a5,const ExpressionValueType& a6,const ExpressionValueType& a7,const ExpressionValueType& a8,const ExpressionValueType& a9,const ExpressionValueType& a10)
{
  ExpressionValueType retval = 0.0;
  if (IfExceptionRaisedReturnNaN(retval))
  {
    return retval;
  }
  retval = _cythonfunc(_pycallable, &_pyexception , a1,a2,a3,a4,a5,a6,a7,a8,a9,a10);
  IfExceptionRaisedReturnNaN(retval);
  return retval;
}


  virtual ~CustomFunction_10(){ }

};  


class CustomFunction_11 : public virtual CustomFunctionBase
{

public:
    typedef ExpressionValueType (*FunctionType)(void *, void ** , ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType);

protected:
    FunctionType _cythonfunc;

public:
    CustomFunction_11() = delete;

    CustomFunction_11( 
                 const std::string &key_,
                 void *pycallable_,
                 FunctionType cythonfunc_) : exprtk::ifunction<ExpressionValueType>(11), 
                                             CustomFunctionBase (11, key_, pycallable_),
                                             _cythonfunc(cythonfunc_)
  {
    set_pycallable(pycallable_);
  }

  virtual ExpressionValueType operator()(const ExpressionValueType& a1,const ExpressionValueType& a2,const ExpressionValueType& a3,const ExpressionValueType& a4,const ExpressionValueType& a5,const ExpressionValueType& a6,const ExpressionValueType& a7,const ExpressionValueType& a8,const ExpressionValueType& a9,const ExpressionValueType& a10,const ExpressionValueType& a11)
{
  ExpressionValueType retval = 0.0;
  if (IfExceptionRaisedReturnNaN(retval))
  {
    return retval;
  }
  retval = _cythonfunc(_pycallable, &_pyexception , a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11);
  IfExceptionRaisedReturnNaN(retval);
  return retval;
}


  virtual ~CustomFunction_11(){ }

};  


class CustomFunction_12 : public virtual CustomFunctionBase
{

public:
    typedef ExpressionValueType (*FunctionType)(void *, void ** , ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType);

protected:
    FunctionType _cythonfunc;

public:
    CustomFunction_12() = delete;

    CustomFunction_12( 
                 const std::string &key_,
                 void *pycallable_,
                 FunctionType cythonfunc_) : exprtk::ifunction<ExpressionValueType>(12), 
                                             CustomFunctionBase (12, key_, pycallable_),
                                             _cythonfunc(cythonfunc_)
  {
    set_pycallable(pycallable_);
  }

  virtual ExpressionValueType operator()(const ExpressionValueType& a1,const ExpressionValueType& a2,const ExpressionValueType& a3,const ExpressionValueType& a4,const ExpressionValueType& a5,const ExpressionValueType& a6,const ExpressionValueType& a7,const ExpressionValueType& a8,const ExpressionValueType& a9,const ExpressionValueType& a10,const ExpressionValueType& a11,const ExpressionValueType& a12)
{
  ExpressionValueType retval = 0.0;
  if (IfExceptionRaisedReturnNaN(retval))
  {
    return retval;
  }
  retval = _cythonfunc(_pycallable, &_pyexception , a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12);
  IfExceptionRaisedReturnNaN(retval);
  return retval;
}


  virtual ~CustomFunction_12(){ }

};  


class CustomFunction_13 : public virtual CustomFunctionBase
{

public:
    typedef ExpressionValueType (*FunctionType)(void *, void ** , ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType);

protected:
    FunctionType _cythonfunc;

public:
    CustomFunction_13() = delete;

    CustomFunction_13( 
                 const std::string &key_,
                 void *pycallable_,
                 FunctionType cythonfunc_) : exprtk::ifunction<ExpressionValueType>(13), 
                                             CustomFunctionBase (13, key_, pycallable_),
                                             _cythonfunc(cythonfunc_)
  {
    set_pycallable(pycallable_);
  }

  virtual ExpressionValueType operator()(const ExpressionValueType& a1,const ExpressionValueType& a2,const ExpressionValueType& a3,const ExpressionValueType& a4,const ExpressionValueType& a5,const ExpressionValueType& a6,const ExpressionValueType& a7,const ExpressionValueType& a8,const ExpressionValueType& a9,const ExpressionValueType& a10,const ExpressionValueType& a11,const ExpressionValueType& a12,const ExpressionValueType& a13)
{
  ExpressionValueType retval = 0.0;
  if (IfExceptionRaisedReturnNaN(retval))
  {
    return retval;
  }
  retval = _cythonfunc(_pycallable, &_pyexception , a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13);
  IfExceptionRaisedReturnNaN(retval);
  return retval;
}


  virtual ~CustomFunction_13(){ }

};  


class CustomFunction_14 : public virtual CustomFunctionBase
{

public:
    typedef ExpressionValueType (*FunctionType)(void *, void ** , ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType);

protected:
    FunctionType _cythonfunc;

public:
    CustomFunction_14() = delete;

    CustomFunction_14( 
                 const std::string &key_,
                 void *pycallable_,
                 FunctionType cythonfunc_) : exprtk::ifunction<ExpressionValueType>(14), 
                                             CustomFunctionBase (14, key_, pycallable_),
                                             _cythonfunc(cythonfunc_)
  {
    set_pycallable(pycallable_);
  }

  virtual ExpressionValueType operator()(const ExpressionValueType& a1,const ExpressionValueType& a2,const ExpressionValueType& a3,const ExpressionValueType& a4,const ExpressionValueType& a5,const ExpressionValueType& a6,const ExpressionValueType& a7,const ExpressionValueType& a8,const ExpressionValueType& a9,const ExpressionValueType& a10,const ExpressionValueType& a11,const ExpressionValueType& a12,const ExpressionValueType& a13,const ExpressionValueType& a14)
{
  ExpressionValueType retval = 0.0;
  if (IfExceptionRaisedReturnNaN(retval))
  {
    return retval;
  }
  retval = _cythonfunc(_pycallable, &_pyexception , a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14);
  IfExceptionRaisedReturnNaN(retval);
  return retval;
}


  virtual ~CustomFunction_14(){ }

};  


class CustomFunction_15 : public virtual CustomFunctionBase
{

public:
    typedef ExpressionValueType (*FunctionType)(void *, void ** , ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType);

protected:
    FunctionType _cythonfunc;

public:
    CustomFunction_15() = delete;

    CustomFunction_15( 
                 const std::string &key_,
                 void *pycallable_,
                 FunctionType cythonfunc_) : exprtk::ifunction<ExpressionValueType>(15), 
                                             CustomFunctionBase (15, key_, pycallable_),
                                             _cythonfunc(cythonfunc_)
  {
    set_pycallable(pycallable_);
  }

  virtual ExpressionValueType operator()(const ExpressionValueType& a1,const ExpressionValueType& a2,const ExpressionValueType& a3,const ExpressionValueType& a4,const ExpressionValueType& a5,const ExpressionValueType& a6,const ExpressionValueType& a7,const ExpressionValueType& a8,const ExpressionValueType& a9,const ExpressionValueType& a10,const ExpressionValueType& a11,const ExpressionValueType& a12,const ExpressionValueType& a13,const ExpressionValueType& a14,const ExpressionValueType& a15)
{
  ExpressionValueType retval = 0.0;
  if (IfExceptionRaisedReturnNaN(retval))
  {
    return retval;
  }
  retval = _cythonfunc(_pycallable, &_pyexception , a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15);
  IfExceptionRaisedReturnNaN(retval);
  return retval;
}


  virtual ~CustomFunction_15(){ }

};  


class CustomFunction_16 : public virtual CustomFunctionBase
{

public:
    typedef ExpressionValueType (*FunctionType)(void *, void ** , ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType);

protected:
    FunctionType _cythonfunc;

public:
    CustomFunction_16() = delete;

    CustomFunction_16( 
                 const std::string &key_,
                 void *pycallable_,
                 FunctionType cythonfunc_) : exprtk::ifunction<ExpressionValueType>(16), 
                                             CustomFunctionBase (16, key_, pycallable_),
                                             _cythonfunc(cythonfunc_)
  {
    set_pycallable(pycallable_);
  }

  virtual ExpressionValueType operator()(const ExpressionValueType& a1,const ExpressionValueType& a2,const ExpressionValueType& a3,const ExpressionValueType& a4,const ExpressionValueType& a5,const ExpressionValueType& a6,const ExpressionValueType& a7,const ExpressionValueType& a8,const ExpressionValueType& a9,const ExpressionValueType& a10,const ExpressionValueType& a11,const ExpressionValueType& a12,const ExpressionValueType& a13,const ExpressionValueType& a14,const ExpressionValueType& a15,const ExpressionValueType& a16)
{
  ExpressionValueType retval = 0.0;
  if (IfExceptionRaisedReturnNaN(retval))
  {
    return retval;
  }
  retval = _cythonfunc(_pycallable, &_pyexception , a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16);
  IfExceptionRaisedReturnNaN(retval);
  return retval;
}


  virtual ~CustomFunction_16(){ }

};  


class CustomFunction_17 : public virtual CustomFunctionBase
{

public:
    typedef ExpressionValueType (*FunctionType)(void *, void ** , ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType);

protected:
    FunctionType _cythonfunc;

public:
    CustomFunction_17() = delete;

    CustomFunction_17( 
                 const std::string &key_,
                 void *pycallable_,
                 FunctionType cythonfunc_) : exprtk::ifunction<ExpressionValueType>(17), 
                                             CustomFunctionBase (17, key_, pycallable_),
                                             _cythonfunc(cythonfunc_)
  {
    set_pycallable(pycallable_);
  }

  virtual ExpressionValueType operator()(const ExpressionValueType& a1,const ExpressionValueType& a2,const ExpressionValueType& a3,const ExpressionValueType& a4,const ExpressionValueType& a5,const ExpressionValueType& a6,const ExpressionValueType& a7,const ExpressionValueType& a8,const ExpressionValueType& a9,const ExpressionValueType& a10,const ExpressionValueType& a11,const ExpressionValueType& a12,const ExpressionValueType& a13,const ExpressionValueType& a14,const ExpressionValueType& a15,const ExpressionValueType& a16,const ExpressionValueType& a17)
{
  ExpressionValueType retval = 0.0;
  if (IfExceptionRaisedReturnNaN(retval))
  {
    return retval;
  }
  retval = _cythonfunc(_pycallable, &_pyexception , a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17);
  IfExceptionRaisedReturnNaN(retval);
  return retval;
}


  virtual ~CustomFunction_17(){ }

};  


class CustomFunction_18 : public virtual CustomFunctionBase
{

public:
    typedef ExpressionValueType (*FunctionType)(void *, void ** , ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType);

protected:
    FunctionType _cythonfunc;

public:
    CustomFunction_18() = delete;

    CustomFunction_18( 
                 const std::string &key_,
                 void *pycallable_,
                 FunctionType cythonfunc_) : exprtk::ifunction<ExpressionValueType>(18), 
                                             CustomFunctionBase (18, key_, pycallable_),
                                             _cythonfunc(cythonfunc_)
  {
    set_pycallable(pycallable_);
  }

  virtual ExpressionValueType operator()(const ExpressionValueType& a1,const ExpressionValueType& a2,const ExpressionValueType& a3,const ExpressionValueType& a4,const ExpressionValueType& a5,const ExpressionValueType& a6,const ExpressionValueType& a7,const ExpressionValueType& a8,const ExpressionValueType& a9,const ExpressionValueType& a10,const ExpressionValueType& a11,const ExpressionValueType& a12,const ExpressionValueType& a13,const ExpressionValueType& a14,const ExpressionValueType& a15,const ExpressionValueType& a16,const ExpressionValueType& a17,const ExpressionValueType& a18)
{
  ExpressionValueType retval = 0.0;
  if (IfExceptionRaisedReturnNaN(retval))
  {
    return retval;
  }
  retval = _cythonfunc(_pycallable, &_pyexception , a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18);
  IfExceptionRaisedReturnNaN(retval);
  return retval;
}


  virtual ~CustomFunction_18(){ }

};  


class CustomFunction_19 : public virtual CustomFunctionBase
{

public:
    typedef ExpressionValueType (*FunctionType)(void *, void ** , ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType);

protected:
    FunctionType _cythonfunc;

public:
    CustomFunction_19() = delete;

    CustomFunction_19( 
                 const std::string &key_,
                 void *pycallable_,
                 FunctionType cythonfunc_) : exprtk::ifunction<ExpressionValueType>(19), 
                                             CustomFunctionBase (19, key_, pycallable_),
                                             _cythonfunc(cythonfunc_)
  {
    set_pycallable(pycallable_);
  }

  virtual ExpressionValueType operator()(const ExpressionValueType& a1,const ExpressionValueType& a2,const ExpressionValueType& a3,const ExpressionValueType& a4,const ExpressionValueType& a5,const ExpressionValueType& a6,const ExpressionValueType& a7,const ExpressionValueType& a8,const ExpressionValueType& a9,const ExpressionValueType& a10,const ExpressionValueType& a11,const ExpressionValueType& a12,const ExpressionValueType& a13,const ExpressionValueType& a14,const ExpressionValueType& a15,const ExpressionValueType& a16,const ExpressionValueType& a17,const ExpressionValueType& a18,const ExpressionValueType& a19)
{
  ExpressionValueType retval = 0.0;
  if (IfExceptionRaisedReturnNaN(retval))
  {
    return retval;
  }
  retval = _cythonfunc(_pycallable, &_pyexception , a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19);
  IfExceptionRaisedReturnNaN(retval);
  return retval;
}


  virtual ~CustomFunction_19(){ }

};  


class CustomFunction_20 : public virtual CustomFunctionBase
{

public:
    typedef ExpressionValueType (*FunctionType)(void *, void ** , ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType,ExpressionValueType);

protected:
    FunctionType _cythonfunc;

public:
    CustomFunction_20() = delete;

    CustomFunction_20( 
                 const std::string &key_,
                 void *pycallable_,
                 FunctionType cythonfunc_) : exprtk::ifunction<ExpressionValueType>(20), 
                                             CustomFunctionBase (20, key_, pycallable_),
                                             _cythonfunc(cythonfunc_)
  {
    set_pycallable(pycallable_);
  }

  virtual ExpressionValueType operator()(const ExpressionValueType& a1,const ExpressionValueType& a2,const ExpressionValueType& a3,const ExpressionValueType& a4,const ExpressionValueType& a5,const ExpressionValueType& a6,const ExpressionValueType& a7,const ExpressionValueType& a8,const ExpressionValueType& a9,const ExpressionValueType& a10,const ExpressionValueType& a11,const ExpressionValueType& a12,const ExpressionValueType& a13,const ExpressionValueType& a14,const ExpressionValueType& a15,const ExpressionValueType& a16,const ExpressionValueType& a17,const ExpressionValueType& a18,const ExpressionValueType& a19,const ExpressionValueType& a20)
{
  ExpressionValueType retval = 0.0;
  if (IfExceptionRaisedReturnNaN(retval))
  {
    return retval;
  }
  retval = _cythonfunc(_pycallable, &_pyexception , a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20);
  IfExceptionRaisedReturnNaN(retval);
  return retval;
}


  virtual ~CustomFunction_20(){ }

};  
#endif
