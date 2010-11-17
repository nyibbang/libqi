/*
** AUTOGENERATED CODE, DO NOT EDIT
**
** Author(s):
**  - Cedric GESTES <gestes@aldebaran-robotics.com>
**
** Copyright (C) 2010 Aldebaran Robotics
*/

#ifndef I_WANT_HXX
#error("do not include hxx in your code")
#endif

#ifndef  QI_FUNCTORS_FUNCTOR_HXX_
# define QI_FUNCTORS_FUNCTOR_HXX_

# include <qi/functors/functor.hpp>

namespace qi {

  template < typename R>
  class Functor_0 : public Functor
  {
  public:
    typedef R(*FunctionType) ();

    Functor_0(FunctionType pFunction)
      : fFunction(pFunction)
    {}

    R operator()() {
      return (R)(*fFunction)();
    }

    void call(qi::serialization::SerializedData &params, qi::serialization::SerializedData& result)const {
      QI_FUNCTOR_ASSUME_NBR_PARAMS(params, 0);

      result.write<R>((*fFunction)());
    };

  private:
    FunctionType  fFunction;
  };


  template <typename P0,  typename R>
  class Functor_1 : public Functor
  {
  public:
    typedef R(*FunctionType) (const P0 &p0);

    Functor_1(FunctionType pFunction)
      : fFunction(pFunction)
    {}

    R operator()(const P0 &p0) {
      return (R)(*fFunction)(p0);
    }

    void call(qi::serialization::SerializedData &params, qi::serialization::SerializedData& result)const {
      QI_FUNCTOR_ASSUME_NBR_PARAMS(params, 1);
      P0 p0;

      params.read<P0>(p0);
      result.write<R>((*fFunction)(p0));
    };

  private:
    FunctionType  fFunction;
  };


  template <typename P0, typename P1,  typename R>
  class Functor_2 : public Functor
  {
  public:
    typedef R(*FunctionType) (const P0 &p0, const P1 &p1);

    Functor_2(FunctionType pFunction)
      : fFunction(pFunction)
    {}

    R operator()(const P0 &p0, const P1 &p1) {
      return (R)(*fFunction)(p0, p1);
    }

    void call(qi::serialization::SerializedData &params, qi::serialization::SerializedData& result)const {
      QI_FUNCTOR_ASSUME_NBR_PARAMS(params, 2);
      P0 p0;
      P1 p1;

      params.read<P0>(p0);
      params.read<P1>(p1);
      result.write<R>((*fFunction)(p0, p1));
    };

  private:
    FunctionType  fFunction;
  };


  template <typename P0, typename P1, typename P2,  typename R>
  class Functor_3 : public Functor
  {
  public:
    typedef R(*FunctionType) (const P0 &p0, const P1 &p1, const P2 &p2);

    Functor_3(FunctionType pFunction)
      : fFunction(pFunction)
    {}

    R operator()(const P0 &p0, const P1 &p1, const P2 &p2) {
      return (R)(*fFunction)(p0, p1, p2);
    }

    void call(qi::serialization::SerializedData &params, qi::serialization::SerializedData& result)const {
      QI_FUNCTOR_ASSUME_NBR_PARAMS(params, 3);
      P0 p0;
      P1 p1;
      P2 p2;

      params.read<P0>(p0);
      params.read<P1>(p1);
      params.read<P2>(p2);
      result.write<R>((*fFunction)(p0, p1, p2));
    };

  private:
    FunctionType  fFunction;
  };


  template <typename P0, typename P1, typename P2, typename P3,  typename R>
  class Functor_4 : public Functor
  {
  public:
    typedef R(*FunctionType) (const P0 &p0, const P1 &p1, const P2 &p2, const P3 &p3);

    Functor_4(FunctionType pFunction)
      : fFunction(pFunction)
    {}

    R operator()(const P0 &p0, const P1 &p1, const P2 &p2, const P3 &p3) {
      return (R)(*fFunction)(p0, p1, p2, p3);
    }

    void call(qi::serialization::SerializedData &params, qi::serialization::SerializedData& result)const {
      QI_FUNCTOR_ASSUME_NBR_PARAMS(params, 4);
      P0 p0;
      P1 p1;
      P2 p2;
      P3 p3;

      params.read<P0>(p0);
      params.read<P1>(p1);
      params.read<P2>(p2);
      params.read<P3>(p3);
      result.write<R>((*fFunction)(p0, p1, p2, p3));
    };

  private:
    FunctionType  fFunction;
  };


  template <typename P0, typename P1, typename P2, typename P3, typename P4,  typename R>
  class Functor_5 : public Functor
  {
  public:
    typedef R(*FunctionType) (const P0 &p0, const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4);

    Functor_5(FunctionType pFunction)
      : fFunction(pFunction)
    {}

    R operator()(const P0 &p0, const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4) {
      return (R)(*fFunction)(p0, p1, p2, p3, p4);
    }

    void call(qi::serialization::SerializedData &params, qi::serialization::SerializedData& result)const {
      QI_FUNCTOR_ASSUME_NBR_PARAMS(params, 5);
      P0 p0;
      P1 p1;
      P2 p2;
      P3 p3;
      P4 p4;

      params.read<P0>(p0);
      params.read<P1>(p1);
      params.read<P2>(p2);
      params.read<P3>(p3);
      params.read<P4>(p4);
      result.write<R>((*fFunction)(p0, p1, p2, p3, p4));
    };

  private:
    FunctionType  fFunction;
  };


  template <typename P0, typename P1, typename P2, typename P3, typename P4, typename P5,  typename R>
  class Functor_6 : public Functor
  {
  public:
    typedef R(*FunctionType) (const P0 &p0, const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4, const P5 &p5);

    Functor_6(FunctionType pFunction)
      : fFunction(pFunction)
    {}

    R operator()(const P0 &p0, const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4, const P5 &p5) {
      return (R)(*fFunction)(p0, p1, p2, p3, p4, p5);
    }

    void call(qi::serialization::SerializedData &params, qi::serialization::SerializedData& result)const {
      QI_FUNCTOR_ASSUME_NBR_PARAMS(params, 6);
      P0 p0;
      P1 p1;
      P2 p2;
      P3 p3;
      P4 p4;
      P5 p5;

      params.read<P0>(p0);
      params.read<P1>(p1);
      params.read<P2>(p2);
      params.read<P3>(p3);
      params.read<P4>(p4);
      params.read<P5>(p5);
      result.write<R>((*fFunction)(p0, p1, p2, p3, p4, p5));
    };

  private:
    FunctionType  fFunction;
  };

}
#endif  // QI_FUNCTORS_FUNCTOR_HXX_
