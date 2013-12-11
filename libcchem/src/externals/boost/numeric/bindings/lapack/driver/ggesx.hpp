//
// Copyright (c) 2002--2010
// Toon Knapen, Karl Meerbergen, Kresimir Fresl,
// Thomas Klimpel and Rutger ter Borg
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//
// THIS FILE IS AUTOMATICALLY GENERATED
// PLEASE DO NOT EDIT!
//

#ifndef BOOST_NUMERIC_BINDINGS_LAPACK_DRIVER_GGESX_HPP
#define BOOST_NUMERIC_BINDINGS_LAPACK_DRIVER_GGESX_HPP

#include <boost/assert.hpp>
#include <boost/numeric/bindings/begin.hpp>
#include <boost/numeric/bindings/detail/array.hpp>
#include <boost/numeric/bindings/is_column_major.hpp>
#include <boost/numeric/bindings/is_complex.hpp>
#include <boost/numeric/bindings/is_mutable.hpp>
#include <boost/numeric/bindings/is_real.hpp>
#include <boost/numeric/bindings/lapack/workspace.hpp>
#include <boost/numeric/bindings/remove_imaginary.hpp>
#include <boost/numeric/bindings/size.hpp>
#include <boost/numeric/bindings/stride.hpp>
#include <boost/numeric/bindings/traits/detail/utils.hpp>
#include <boost/numeric/bindings/value_type.hpp>
#include <boost/static_assert.hpp>
#include <boost/type_traits/is_same.hpp>
#include <boost/type_traits/remove_const.hpp>
#include <boost/utility/enable_if.hpp>

//
// The LAPACK-backend for ggesx is the netlib-compatible backend.
//
#include <boost/numeric/bindings/lapack/detail/lapack.h>
#include <boost/numeric/bindings/lapack/detail/lapack_option.hpp>

namespace boost {
namespace numeric {
namespace bindings {
namespace lapack {

//
// The detail namespace contains value-type-overloaded functions that
// dispatch to the appropriate back-end LAPACK-routine.
//
namespace detail {

//
// Overloaded function for dispatching to
// * netlib-compatible LAPACK backend (the default), and
// * float value-type.
//
inline std::ptrdiff_t ggesx( const char jobvsl, const char jobvsr,
        const char sort, external_fp selctg, const char sense,
        const fortran_int_t n, float* a, const fortran_int_t lda, float* b,
        const fortran_int_t ldb, fortran_int_t& sdim, float* alphar,
        float* alphai, float* beta, float* vsl, const fortran_int_t ldvsl,
        float* vsr, const fortran_int_t ldvsr, float* rconde, float* rcondv,
        float* work, const fortran_int_t lwork, fortran_int_t* iwork,
        const fortran_int_t liwork, fortran_bool_t* bwork ) {
    fortran_int_t info(0);
    LAPACK_SGGESX( &jobvsl, &jobvsr, &sort, selctg, &sense, &n, a, &lda, b,
            &ldb, &sdim, alphar, alphai, beta, vsl, &ldvsl, vsr, &ldvsr,
            rconde, rcondv, work, &lwork, iwork, &liwork, bwork, &info );
    return info;
}

//
// Overloaded function for dispatching to
// * netlib-compatible LAPACK backend (the default), and
// * double value-type.
//
inline std::ptrdiff_t ggesx( const char jobvsl, const char jobvsr,
        const char sort, external_fp selctg, const char sense,
        const fortran_int_t n, double* a, const fortran_int_t lda, double* b,
        const fortran_int_t ldb, fortran_int_t& sdim, double* alphar,
        double* alphai, double* beta, double* vsl, const fortran_int_t ldvsl,
        double* vsr, const fortran_int_t ldvsr, double* rconde,
        double* rcondv, double* work, const fortran_int_t lwork,
        fortran_int_t* iwork, const fortran_int_t liwork,
        fortran_bool_t* bwork ) {
    fortran_int_t info(0);
    LAPACK_DGGESX( &jobvsl, &jobvsr, &sort, selctg, &sense, &n, a, &lda, b,
            &ldb, &sdim, alphar, alphai, beta, vsl, &ldvsl, vsr, &ldvsr,
            rconde, rcondv, work, &lwork, iwork, &liwork, bwork, &info );
    return info;
}

//
// Overloaded function for dispatching to
// * netlib-compatible LAPACK backend (the default), and
// * complex<float> value-type.
//
inline std::ptrdiff_t ggesx( const char jobvsl, const char jobvsr,
        const char sort, external_fp selctg, const char sense,
        const fortran_int_t n, std::complex<float>* a,
        const fortran_int_t lda, std::complex<float>* b,
        const fortran_int_t ldb, fortran_int_t& sdim,
        std::complex<float>* alpha, std::complex<float>* beta,
        std::complex<float>* vsl, const fortran_int_t ldvsl,
        std::complex<float>* vsr, const fortran_int_t ldvsr, float* rconde,
        float* rcondv, std::complex<float>* work, const fortran_int_t lwork,
        float* rwork, fortran_int_t* iwork, const fortran_int_t liwork,
        fortran_bool_t* bwork ) {
    fortran_int_t info(0);
    LAPACK_CGGESX( &jobvsl, &jobvsr, &sort, selctg, &sense, &n, a, &lda, b,
            &ldb, &sdim, alpha, beta, vsl, &ldvsl, vsr, &ldvsr, rconde,
            rcondv, work, &lwork, rwork, iwork, &liwork, bwork, &info );
    return info;
}

//
// Overloaded function for dispatching to
// * netlib-compatible LAPACK backend (the default), and
// * complex<double> value-type.
//
inline std::ptrdiff_t ggesx( const char jobvsl, const char jobvsr,
        const char sort, external_fp selctg, const char sense,
        const fortran_int_t n, std::complex<double>* a,
        const fortran_int_t lda, std::complex<double>* b,
        const fortran_int_t ldb, fortran_int_t& sdim,
        std::complex<double>* alpha, std::complex<double>* beta,
        std::complex<double>* vsl, const fortran_int_t ldvsl,
        std::complex<double>* vsr, const fortran_int_t ldvsr, double* rconde,
        double* rcondv, std::complex<double>* work, const fortran_int_t lwork,
        double* rwork, fortran_int_t* iwork, const fortran_int_t liwork,
        fortran_bool_t* bwork ) {
    fortran_int_t info(0);
    LAPACK_ZGGESX( &jobvsl, &jobvsr, &sort, selctg, &sense, &n, a, &lda, b,
            &ldb, &sdim, alpha, beta, vsl, &ldvsl, vsr, &ldvsr, rconde,
            rcondv, work, &lwork, rwork, iwork, &liwork, bwork, &info );
    return info;
}

} // namespace detail

//
// Value-type based template class. Use this class if you need a type
// for dispatching to ggesx.
//
template< typename Value, typename Enable = void >
struct ggesx_impl {};

//
// This implementation is enabled if Value is a real type.
//
template< typename Value >
struct ggesx_impl< Value, typename boost::enable_if< is_real< Value > >::type > {

    typedef Value value_type;
    typedef typename remove_imaginary< Value >::type real_type;

    //
    // Static member function for user-defined workspaces, that
    // * Deduces the required arguments for dispatching to LAPACK, and
    // * Asserts that most arguments make sense.
    //
    template< typename MatrixA, typename MatrixB, typename VectorALPHAR,
            typename VectorALPHAI, typename VectorBETA, typename MatrixVSL,
            typename MatrixVSR, typename VectorRCONDE, typename VectorRCONDV,
            typename WORK, typename IWORK, typename BWORK >
    static std::ptrdiff_t invoke( const char jobvsl, const char jobvsr,
            const char sort, external_fp selctg, const char sense, MatrixA& a,
            MatrixB& b, fortran_int_t& sdim, VectorALPHAR& alphar,
            VectorALPHAI& alphai, VectorBETA& beta, MatrixVSL& vsl,
            MatrixVSR& vsr, VectorRCONDE& rconde, VectorRCONDV& rcondv,
            detail::workspace3< WORK, IWORK, BWORK > work ) {
        namespace bindings = ::boost::numeric::bindings;
        BOOST_STATIC_ASSERT( (bindings::is_column_major< MatrixA >::value) );
        BOOST_STATIC_ASSERT( (bindings::is_column_major< MatrixB >::value) );
        BOOST_STATIC_ASSERT( (bindings::is_column_major< MatrixVSL >::value) );
        BOOST_STATIC_ASSERT( (bindings::is_column_major< MatrixVSR >::value) );
        BOOST_STATIC_ASSERT( (boost::is_same< typename remove_const<
                typename bindings::value_type< MatrixA >::type >::type,
                typename remove_const< typename bindings::value_type<
                MatrixB >::type >::type >::value) );
        BOOST_STATIC_ASSERT( (boost::is_same< typename remove_const<
                typename bindings::value_type< MatrixA >::type >::type,
                typename remove_const< typename bindings::value_type<
                VectorALPHAR >::type >::type >::value) );
        BOOST_STATIC_ASSERT( (boost::is_same< typename remove_const<
                typename bindings::value_type< MatrixA >::type >::type,
                typename remove_const< typename bindings::value_type<
                VectorALPHAI >::type >::type >::value) );
        BOOST_STATIC_ASSERT( (boost::is_same< typename remove_const<
                typename bindings::value_type< MatrixA >::type >::type,
                typename remove_const< typename bindings::value_type<
                VectorBETA >::type >::type >::value) );
        BOOST_STATIC_ASSERT( (boost::is_same< typename remove_const<
                typename bindings::value_type< MatrixA >::type >::type,
                typename remove_const< typename bindings::value_type<
                MatrixVSL >::type >::type >::value) );
        BOOST_STATIC_ASSERT( (boost::is_same< typename remove_const<
                typename bindings::value_type< MatrixA >::type >::type,
                typename remove_const< typename bindings::value_type<
                MatrixVSR >::type >::type >::value) );
        BOOST_STATIC_ASSERT( (boost::is_same< typename remove_const<
                typename bindings::value_type< MatrixA >::type >::type,
                typename remove_const< typename bindings::value_type<
                VectorRCONDE >::type >::type >::value) );
        BOOST_STATIC_ASSERT( (boost::is_same< typename remove_const<
                typename bindings::value_type< MatrixA >::type >::type,
                typename remove_const< typename bindings::value_type<
                VectorRCONDV >::type >::type >::value) );
        BOOST_STATIC_ASSERT( (bindings::is_mutable< MatrixA >::value) );
        BOOST_STATIC_ASSERT( (bindings::is_mutable< MatrixB >::value) );
        BOOST_STATIC_ASSERT( (bindings::is_mutable< VectorALPHAR >::value) );
        BOOST_STATIC_ASSERT( (bindings::is_mutable< VectorALPHAI >::value) );
        BOOST_STATIC_ASSERT( (bindings::is_mutable< VectorBETA >::value) );
        BOOST_STATIC_ASSERT( (bindings::is_mutable< MatrixVSL >::value) );
        BOOST_STATIC_ASSERT( (bindings::is_mutable< MatrixVSR >::value) );
        BOOST_STATIC_ASSERT( (bindings::is_mutable< VectorRCONDE >::value) );
        BOOST_STATIC_ASSERT( (bindings::is_mutable< VectorRCONDV >::value) );
        BOOST_ASSERT( bindings::size(alphai) >= bindings::size_column(a) );
        BOOST_ASSERT( bindings::size(alphar) >= bindings::size_column(a) );
        BOOST_ASSERT( bindings::size(work.select(fortran_int_t())) >=
                min_size_iwork( bindings::size_column(a), sense ));
        BOOST_ASSERT( bindings::size(work.select(fortran_bool_t())) >=
                min_size_bwork( bindings::size_column(a), sort ));
        BOOST_ASSERT( bindings::size(work.select(real_type())) >=
                min_size_work( bindings::size_column(a), sense ));
        BOOST_ASSERT( bindings::size_column(a) >= 0 );
        BOOST_ASSERT( bindings::size_minor(a) == 1 ||
                bindings::stride_minor(a) == 1 );
        BOOST_ASSERT( bindings::size_minor(b) == 1 ||
                bindings::stride_minor(b) == 1 );
        BOOST_ASSERT( bindings::size_minor(vsl) == 1 ||
                bindings::stride_minor(vsl) == 1 );
        BOOST_ASSERT( bindings::size_minor(vsr) == 1 ||
                bindings::stride_minor(vsr) == 1 );
        BOOST_ASSERT( bindings::stride_major(a) >= std::max< std::ptrdiff_t >(1,
                bindings::size_column(a)) );
        BOOST_ASSERT( bindings::stride_major(b) >= std::max< std::ptrdiff_t >(1,
                bindings::size_column(a)) );
        BOOST_ASSERT( jobvsl == 'N' || jobvsl == 'V' );
        BOOST_ASSERT( jobvsr == 'N' || jobvsr == 'V' );
        BOOST_ASSERT( sense == 'N' || sense == 'E' || sense == 'V' ||
                sense == 'B' );
        BOOST_ASSERT( sort == 'N' || sort == 'S' );
        return detail::ggesx( jobvsl, jobvsr, sort, selctg, sense,
                bindings::size_column(a), bindings::begin_value(a),
                bindings::stride_major(a), bindings::begin_value(b),
                bindings::stride_major(b), sdim,
                bindings::begin_value(alphar), bindings::begin_value(alphai),
                bindings::begin_value(beta), bindings::begin_value(vsl),
                bindings::stride_major(vsl), bindings::begin_value(vsr),
                bindings::stride_major(vsr), bindings::begin_value(rconde),
                bindings::begin_value(rcondv),
                bindings::begin_value(work.select(real_type())),
                bindings::size(work.select(real_type())),
                bindings::begin_value(work.select(fortran_int_t())),
                bindings::size(work.select(fortran_int_t())),
                bindings::begin_value(work.select(fortran_bool_t())) );
    }

    //
    // Static member function that
    // * Figures out the minimal workspace requirements, and passes
    //   the results to the user-defined workspace overload of the 
    //   invoke static member function
    // * Enables the unblocked algorithm (BLAS level 2)
    //
    template< typename MatrixA, typename MatrixB, typename VectorALPHAR,
            typename VectorALPHAI, typename VectorBETA, typename MatrixVSL,
            typename MatrixVSR, typename VectorRCONDE, typename VectorRCONDV >
    static std::ptrdiff_t invoke( const char jobvsl, const char jobvsr,
            const char sort, external_fp selctg, const char sense, MatrixA& a,
            MatrixB& b, fortran_int_t& sdim, VectorALPHAR& alphar,
            VectorALPHAI& alphai, VectorBETA& beta, MatrixVSL& vsl,
            MatrixVSR& vsr, VectorRCONDE& rconde, VectorRCONDV& rcondv,
            minimal_workspace ) {
        namespace bindings = ::boost::numeric::bindings;
        bindings::detail::array< real_type > tmp_work( min_size_work(
                bindings::size_column(a), sense ) );
        bindings::detail::array< fortran_int_t > tmp_iwork(
                min_size_iwork( bindings::size_column(a), sense ) );
        bindings::detail::array< fortran_bool_t > tmp_bwork( min_size_bwork(
                bindings::size_column(a), sort ) );
        return invoke( jobvsl, jobvsr, sort, selctg, sense, a, b, sdim,
                alphar, alphai, beta, vsl, vsr, rconde, rcondv,
                workspace( tmp_work, tmp_iwork, tmp_bwork ) );
    }

    //
    // Static member function that
    // * Figures out the optimal workspace requirements, and passes
    //   the results to the user-defined workspace overload of the 
    //   invoke static member
    // * Enables the blocked algorithm (BLAS level 3)
    //
    template< typename MatrixA, typename MatrixB, typename VectorALPHAR,
            typename VectorALPHAI, typename VectorBETA, typename MatrixVSL,
            typename MatrixVSR, typename VectorRCONDE, typename VectorRCONDV >
    static std::ptrdiff_t invoke( const char jobvsl, const char jobvsr,
            const char sort, external_fp selctg, const char sense, MatrixA& a,
            MatrixB& b, fortran_int_t& sdim, VectorALPHAR& alphar,
            VectorALPHAI& alphai, VectorBETA& beta, MatrixVSL& vsl,
            MatrixVSR& vsr, VectorRCONDE& rconde, VectorRCONDV& rcondv,
            optimal_workspace ) {
        namespace bindings = ::boost::numeric::bindings;
        real_type opt_size_work;
        bindings::detail::array< fortran_int_t > tmp_iwork(
                min_size_iwork( bindings::size_column(a), sense ) );
        bindings::detail::array< fortran_bool_t > tmp_bwork( min_size_bwork(
                bindings::size_column(a), sort ) );
        detail::ggesx( jobvsl, jobvsr, sort, selctg, sense,
                bindings::size_column(a), bindings::begin_value(a),
                bindings::stride_major(a), bindings::begin_value(b),
                bindings::stride_major(b), sdim,
                bindings::begin_value(alphar), bindings::begin_value(alphai),
                bindings::begin_value(beta), bindings::begin_value(vsl),
                bindings::stride_major(vsl), bindings::begin_value(vsr),
                bindings::stride_major(vsr), bindings::begin_value(rconde),
                bindings::begin_value(rcondv), &opt_size_work, -1,
                bindings::begin_value(tmp_iwork), -1,
                bindings::begin_value(tmp_bwork) );
        bindings::detail::array< real_type > tmp_work(
                traits::detail::to_int( opt_size_work ) );
        return invoke( jobvsl, jobvsr, sort, selctg, sense, a, b, sdim,
                alphar, alphai, beta, vsl, vsr, rconde, rcondv,
                workspace( tmp_work, tmp_iwork, tmp_bwork ) );
    }

    //
    // Static member function that returns the minimum size of
    // workspace-array work.
    //
    static std::ptrdiff_t min_size_work( const std::ptrdiff_t n,
            const char sense ) {
        if ( n == 0 )
            return 1;
        if ( sense == 'N' )
            return std::max< std::ptrdiff_t >( 8*n, 6*n+16 );
        else
            return std::max< std::ptrdiff_t >( 8*n, std::max<
                    std::ptrdiff_t >( 6*n+16, n*n/2 ));
    }

    //
    // Static member function that returns the minimum size of
    // workspace-array iwork.
    //
    static std::ptrdiff_t min_size_iwork( const std::ptrdiff_t n,
            const char sense ) {
        if ( sense == 'N' )
            return 1;
        else
            return std::max< std::ptrdiff_t >( 1, n+6 );
    }

    //
    // Static member function that returns the minimum size of
    // workspace-array bwork.
    //
    static std::ptrdiff_t min_size_bwork( const std::ptrdiff_t n,
            const char sort ) {
        if ( sort == 'N' )
            return 0;
        else
            return n;
    }
};

//
// This implementation is enabled if Value is a complex type.
//
template< typename Value >
struct ggesx_impl< Value, typename boost::enable_if< is_complex< Value > >::type > {

    typedef Value value_type;
    typedef typename remove_imaginary< Value >::type real_type;

    //
    // Static member function for user-defined workspaces, that
    // * Deduces the required arguments for dispatching to LAPACK, and
    // * Asserts that most arguments make sense.
    //
    template< typename MatrixA, typename MatrixB, typename VectorALPHA,
            typename VectorBETA, typename MatrixVSL, typename MatrixVSR,
            typename VectorRCONDE, typename VectorRCONDV, typename WORK,
            typename RWORK, typename IWORK, typename BWORK >
    static std::ptrdiff_t invoke( const char jobvsl, const char jobvsr,
            const char sort, external_fp selctg, const char sense, MatrixA& a,
            MatrixB& b, fortran_int_t& sdim, VectorALPHA& alpha,
            VectorBETA& beta, MatrixVSL& vsl, MatrixVSR& vsr,
            VectorRCONDE& rconde, VectorRCONDV& rcondv, detail::workspace4<
            WORK, RWORK, IWORK, BWORK > work ) {
        namespace bindings = ::boost::numeric::bindings;
        BOOST_STATIC_ASSERT( (bindings::is_column_major< MatrixA >::value) );
        BOOST_STATIC_ASSERT( (bindings::is_column_major< MatrixB >::value) );
        BOOST_STATIC_ASSERT( (bindings::is_column_major< MatrixVSL >::value) );
        BOOST_STATIC_ASSERT( (bindings::is_column_major< MatrixVSR >::value) );
        BOOST_STATIC_ASSERT( (boost::is_same< typename remove_const<
                typename bindings::value_type< VectorRCONDE >::type >::type,
                typename remove_const< typename bindings::value_type<
                VectorRCONDV >::type >::type >::value) );
        BOOST_STATIC_ASSERT( (boost::is_same< typename remove_const<
                typename bindings::value_type< MatrixA >::type >::type,
                typename remove_const< typename bindings::value_type<
                MatrixB >::type >::type >::value) );
        BOOST_STATIC_ASSERT( (boost::is_same< typename remove_const<
                typename bindings::value_type< MatrixA >::type >::type,
                typename remove_const< typename bindings::value_type<
                VectorALPHA >::type >::type >::value) );
        BOOST_STATIC_ASSERT( (boost::is_same< typename remove_const<
                typename bindings::value_type< MatrixA >::type >::type,
                typename remove_const< typename bindings::value_type<
                VectorBETA >::type >::type >::value) );
        BOOST_STATIC_ASSERT( (boost::is_same< typename remove_const<
                typename bindings::value_type< MatrixA >::type >::type,
                typename remove_const< typename bindings::value_type<
                MatrixVSL >::type >::type >::value) );
        BOOST_STATIC_ASSERT( (boost::is_same< typename remove_const<
                typename bindings::value_type< MatrixA >::type >::type,
                typename remove_const< typename bindings::value_type<
                MatrixVSR >::type >::type >::value) );
        BOOST_STATIC_ASSERT( (bindings::is_mutable< MatrixA >::value) );
        BOOST_STATIC_ASSERT( (bindings::is_mutable< MatrixB >::value) );
        BOOST_STATIC_ASSERT( (bindings::is_mutable< VectorALPHA >::value) );
        BOOST_STATIC_ASSERT( (bindings::is_mutable< VectorBETA >::value) );
        BOOST_STATIC_ASSERT( (bindings::is_mutable< MatrixVSL >::value) );
        BOOST_STATIC_ASSERT( (bindings::is_mutable< MatrixVSR >::value) );
        BOOST_STATIC_ASSERT( (bindings::is_mutable< VectorRCONDE >::value) );
        BOOST_STATIC_ASSERT( (bindings::is_mutable< VectorRCONDV >::value) );
        BOOST_ASSERT( bindings::size(alpha) >= bindings::size_column(a) );
        BOOST_ASSERT( bindings::size(beta) >= bindings::size_column(a) );
        BOOST_ASSERT( bindings::size(work.select(fortran_int_t())) >=
                min_size_iwork( bindings::size_column(a), sense ));
        BOOST_ASSERT( bindings::size(work.select(fortran_bool_t())) >=
                min_size_bwork( bindings::size_column(a), sort ));
        BOOST_ASSERT( bindings::size(work.select(real_type())) >=
                min_size_rwork( bindings::size_column(a) ));
        BOOST_ASSERT( bindings::size(work.select(value_type())) >=
                min_size_work( bindings::size_column(a), sense ));
        BOOST_ASSERT( bindings::size_column(a) >= 0 );
        BOOST_ASSERT( bindings::size_minor(a) == 1 ||
                bindings::stride_minor(a) == 1 );
        BOOST_ASSERT( bindings::size_minor(b) == 1 ||
                bindings::stride_minor(b) == 1 );
        BOOST_ASSERT( bindings::size_minor(vsl) == 1 ||
                bindings::stride_minor(vsl) == 1 );
        BOOST_ASSERT( bindings::size_minor(vsr) == 1 ||
                bindings::stride_minor(vsr) == 1 );
        BOOST_ASSERT( bindings::stride_major(a) >= std::max< std::ptrdiff_t >(1,
                bindings::size_column(a)) );
        BOOST_ASSERT( bindings::stride_major(b) >= std::max< std::ptrdiff_t >(1,
                bindings::size_column(a)) );
        BOOST_ASSERT( jobvsl == 'N' || jobvsl == 'V' );
        BOOST_ASSERT( jobvsr == 'N' || jobvsr == 'V' );
        BOOST_ASSERT( sense == 'N' || sense == 'E' || sense == 'V' ||
                sense == 'B' );
        BOOST_ASSERT( sort == 'N' || sort == 'S' );
        return detail::ggesx( jobvsl, jobvsr, sort, selctg, sense,
                bindings::size_column(a), bindings::begin_value(a),
                bindings::stride_major(a), bindings::begin_value(b),
                bindings::stride_major(b), sdim, bindings::begin_value(alpha),
                bindings::begin_value(beta), bindings::begin_value(vsl),
                bindings::stride_major(vsl), bindings::begin_value(vsr),
                bindings::stride_major(vsr), bindings::begin_value(rconde),
                bindings::begin_value(rcondv),
                bindings::begin_value(work.select(value_type())),
                bindings::size(work.select(value_type())),
                bindings::begin_value(work.select(real_type())),
                bindings::begin_value(work.select(fortran_int_t())),
                bindings::size(work.select(value_type())),
                bindings::begin_value(work.select(fortran_bool_t())) );
    }

    //
    // Static member function that
    // * Figures out the minimal workspace requirements, and passes
    //   the results to the user-defined workspace overload of the 
    //   invoke static member function
    // * Enables the unblocked algorithm (BLAS level 2)
    //
    template< typename MatrixA, typename MatrixB, typename VectorALPHA,
            typename VectorBETA, typename MatrixVSL, typename MatrixVSR,
            typename VectorRCONDE, typename VectorRCONDV >
    static std::ptrdiff_t invoke( const char jobvsl, const char jobvsr,
            const char sort, external_fp selctg, const char sense, MatrixA& a,
            MatrixB& b, fortran_int_t& sdim, VectorALPHA& alpha,
            VectorBETA& beta, MatrixVSL& vsl, MatrixVSR& vsr,
            VectorRCONDE& rconde, VectorRCONDV& rcondv, minimal_workspace ) {
        namespace bindings = ::boost::numeric::bindings;
        bindings::detail::array< value_type > tmp_work( min_size_work(
                bindings::size_column(a), sense ) );
        bindings::detail::array< real_type > tmp_rwork( min_size_rwork(
                bindings::size_column(a) ) );
        bindings::detail::array< fortran_int_t > tmp_iwork(
                min_size_iwork( bindings::size_column(a), sense ) );
        bindings::detail::array< fortran_bool_t > tmp_bwork( min_size_bwork(
                bindings::size_column(a), sort ) );
        return invoke( jobvsl, jobvsr, sort, selctg, sense, a, b, sdim, alpha,
                beta, vsl, vsr, rconde, rcondv, workspace( tmp_work,
                tmp_rwork, tmp_iwork, tmp_bwork ) );
    }

    //
    // Static member function that
    // * Figures out the optimal workspace requirements, and passes
    //   the results to the user-defined workspace overload of the 
    //   invoke static member
    // * Enables the blocked algorithm (BLAS level 3)
    //
    template< typename MatrixA, typename MatrixB, typename VectorALPHA,
            typename VectorBETA, typename MatrixVSL, typename MatrixVSR,
            typename VectorRCONDE, typename VectorRCONDV >
    static std::ptrdiff_t invoke( const char jobvsl, const char jobvsr,
            const char sort, external_fp selctg, const char sense, MatrixA& a,
            MatrixB& b, fortran_int_t& sdim, VectorALPHA& alpha,
            VectorBETA& beta, MatrixVSL& vsl, MatrixVSR& vsr,
            VectorRCONDE& rconde, VectorRCONDV& rcondv, optimal_workspace ) {
        namespace bindings = ::boost::numeric::bindings;
        value_type opt_size_work;
        bindings::detail::array< real_type > tmp_rwork( min_size_rwork(
                bindings::size_column(a) ) );
        bindings::detail::array< fortran_int_t > tmp_iwork(
                min_size_iwork( bindings::size_column(a), sense ) );
        bindings::detail::array< fortran_bool_t > tmp_bwork( min_size_bwork(
                bindings::size_column(a), sort ) );
        detail::ggesx( jobvsl, jobvsr, sort, selctg, sense,
                bindings::size_column(a), bindings::begin_value(a),
                bindings::stride_major(a), bindings::begin_value(b),
                bindings::stride_major(b), sdim, bindings::begin_value(alpha),
                bindings::begin_value(beta), bindings::begin_value(vsl),
                bindings::stride_major(vsl), bindings::begin_value(vsr),
                bindings::stride_major(vsr), bindings::begin_value(rconde),
                bindings::begin_value(rcondv), &opt_size_work, -1,
                bindings::begin_value(tmp_rwork),
                bindings::begin_value(tmp_iwork), -1,
                bindings::begin_value(tmp_bwork) );
        bindings::detail::array< value_type > tmp_work(
                traits::detail::to_int( opt_size_work ) );
        return invoke( jobvsl, jobvsr, sort, selctg, sense, a, b, sdim, alpha,
                beta, vsl, vsr, rconde, rcondv, workspace( tmp_work,
                tmp_rwork, tmp_iwork, tmp_bwork ) );
    }

    //
    // Static member function that returns the minimum size of
    // workspace-array work.
    //
    static std::ptrdiff_t min_size_work( const std::ptrdiff_t n,
            const char sense ) {
        if ( sense == 'N' )
            return std::max< std::ptrdiff_t >( 1, 2*n );
        else
            return std::max< std::ptrdiff_t >( 1, std::max<
                    std::ptrdiff_t >( 2*n, n*n/2 ) );
    }

    //
    // Static member function that returns the minimum size of
    // workspace-array rwork.
    //
    static std::ptrdiff_t min_size_rwork( const std::ptrdiff_t n ) {
        return 8*n;
    }

    //
    // Static member function that returns the minimum size of
    // workspace-array iwork.
    //
    static std::ptrdiff_t min_size_iwork( const std::ptrdiff_t n,
            const char sense ) {
        if ( sense == 'N' )
            return 1;
        else
            return std::max< std::ptrdiff_t >( 1, n+2 );
    }

    //
    // Static member function that returns the minimum size of
    // workspace-array bwork.
    //
    static std::ptrdiff_t min_size_bwork( const std::ptrdiff_t n,
            const char sort ) {
        if ( sort == 'N' )
            return 0;
        else
            return n;
    }
};


//
// Functions for direct use. These functions are overloaded for temporaries,
// so that wrapped types can still be passed and used for write-access. In
// addition, if applicable, they are overloaded for user-defined workspaces.
// Calls to these functions are passed to the ggesx_impl classes. In the 
// documentation, most overloads are collapsed to avoid a large number of
// prototypes which are very similar.
//

//
// Overloaded function for ggesx. Its overload differs for
// * User-defined workspace
//
template< typename MatrixA, typename MatrixB, typename VectorALPHAR,
        typename VectorALPHAI, typename VectorBETA, typename MatrixVSL,
        typename MatrixVSR, typename VectorRCONDE, typename VectorRCONDV,
        typename Workspace >
inline typename boost::enable_if< detail::is_workspace< Workspace >,
        std::ptrdiff_t >::type
ggesx( const char jobvsl, const char jobvsr, const char sort,
        external_fp selctg, const char sense, MatrixA& a, MatrixB& b,
        fortran_int_t& sdim, VectorALPHAR& alphar, VectorALPHAI& alphai,
        VectorBETA& beta, MatrixVSL& vsl, MatrixVSR& vsr,
        VectorRCONDE& rconde, VectorRCONDV& rcondv, Workspace work ) {
    return ggesx_impl< typename bindings::value_type<
            MatrixA >::type >::invoke( jobvsl, jobvsr, sort, selctg, sense, a,
            b, sdim, alphar, alphai, beta, vsl, vsr, rconde, rcondv, work );
}

//
// Overloaded function for ggesx. Its overload differs for
// * Default workspace-type (optimal)
//
template< typename MatrixA, typename MatrixB, typename VectorALPHAR,
        typename VectorALPHAI, typename VectorBETA, typename MatrixVSL,
        typename MatrixVSR, typename VectorRCONDE, typename VectorRCONDV >
inline typename boost::disable_if< detail::is_workspace< VectorRCONDV >,
        std::ptrdiff_t >::type
ggesx( const char jobvsl, const char jobvsr, const char sort,
        external_fp selctg, const char sense, MatrixA& a, MatrixB& b,
        fortran_int_t& sdim, VectorALPHAR& alphar, VectorALPHAI& alphai,
        VectorBETA& beta, MatrixVSL& vsl, MatrixVSR& vsr,
        VectorRCONDE& rconde, VectorRCONDV& rcondv ) {
    return ggesx_impl< typename bindings::value_type<
            MatrixA >::type >::invoke( jobvsl, jobvsr, sort, selctg, sense, a,
            b, sdim, alphar, alphai, beta, vsl, vsr, rconde, rcondv,
            optimal_workspace() );
}
//
// Overloaded function for ggesx. Its overload differs for
// * User-defined workspace
//
template< typename MatrixA, typename MatrixB, typename VectorALPHA,
        typename VectorBETA, typename MatrixVSL, typename MatrixVSR,
        typename VectorRCONDE, typename VectorRCONDV, typename Workspace >
inline typename boost::enable_if< detail::is_workspace< Workspace >,
        std::ptrdiff_t >::type
ggesx( const char jobvsl, const char jobvsr, const char sort,
        external_fp selctg, const char sense, MatrixA& a, MatrixB& b,
        fortran_int_t& sdim, VectorALPHA& alpha, VectorBETA& beta,
        MatrixVSL& vsl, MatrixVSR& vsr, VectorRCONDE& rconde,
        VectorRCONDV& rcondv, Workspace work ) {
    return ggesx_impl< typename bindings::value_type<
            MatrixA >::type >::invoke( jobvsl, jobvsr, sort, selctg, sense, a,
            b, sdim, alpha, beta, vsl, vsr, rconde, rcondv, work );
}

//
// Overloaded function for ggesx. Its overload differs for
// * Default workspace-type (optimal)
//
template< typename MatrixA, typename MatrixB, typename VectorALPHA,
        typename VectorBETA, typename MatrixVSL, typename MatrixVSR,
        typename VectorRCONDE, typename VectorRCONDV >
inline typename boost::disable_if< detail::is_workspace< VectorRCONDV >,
        std::ptrdiff_t >::type
ggesx( const char jobvsl, const char jobvsr, const char sort,
        external_fp selctg, const char sense, MatrixA& a, MatrixB& b,
        fortran_int_t& sdim, VectorALPHA& alpha, VectorBETA& beta,
        MatrixVSL& vsl, MatrixVSR& vsr, VectorRCONDE& rconde,
        VectorRCONDV& rcondv ) {
    return ggesx_impl< typename bindings::value_type<
            MatrixA >::type >::invoke( jobvsl, jobvsr, sort, selctg, sense, a,
            b, sdim, alpha, beta, vsl, vsr, rconde, rcondv,
            optimal_workspace() );
}

} // namespace lapack
} // namespace bindings
} // namespace numeric
} // namespace boost

#endif
