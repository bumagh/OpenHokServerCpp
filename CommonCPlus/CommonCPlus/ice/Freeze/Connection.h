// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.5.1
//
// <auto-generated>
//
// Generated from file `Connection.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __Freeze_Connection_h__
#define __Freeze_Connection_h__

#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <IceUtil/ScopedArray.h>
#include <IceUtil/Optional.h>
#include <Freeze/Transaction.h>
#include <Ice/Version.h>
#include <Ice/CommunicatorF.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 305
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

#ifndef FREEZE_API
#   ifdef FREEZE_API_EXPORTS
#       define FREEZE_API ICE_DECLSPEC_EXPORT
#   else
#       define FREEZE_API ICE_DECLSPEC_IMPORT
#   endif
#endif

namespace Freeze
{

class Connection;
bool operator==(const Connection&, const Connection&);
bool operator<(const Connection&, const Connection&);
FREEZE_API ::Ice::LocalObject* upCast(::Freeze::Connection*);
typedef ::IceInternal::Handle< ::Freeze::Connection> ConnectionPtr;

}

namespace Freeze
{

class FREEZE_API TransactionAlreadyInProgressException : public ::Ice::LocalException
{
public:

    TransactionAlreadyInProgressException(const char*, int);
    virtual ~TransactionAlreadyInProgressException() throw();

    virtual ::std::string ice_name() const;
    virtual TransactionAlreadyInProgressException* ice_clone() const;
    virtual void ice_throw() const;
};

}

namespace Ice
{
}

namespace Freeze
{

class FREEZE_API Connection : virtual public ::Ice::LocalObject
{
public:

    typedef ConnectionPtr PointerType;

    virtual ::Freeze::TransactionPtr beginTransaction() = 0;

    virtual ::Freeze::TransactionPtr currentTransaction() const = 0;

    virtual void removeMapIndex(const ::std::string&, const ::std::string&) = 0;

    virtual void close() = 0;

    virtual ::Ice::CommunicatorPtr getCommunicator() const = 0;

    virtual ::Ice::EncodingVersion getEncoding() const = 0;

    virtual ::std::string getName() const = 0;
};

inline bool operator==(const Connection& l, const Connection& r)
{
    return static_cast<const ::Ice::LocalObject&>(l) == static_cast<const ::Ice::LocalObject&>(r);
}

inline bool operator<(const Connection& l, const Connection& r)
{
    return static_cast<const ::Ice::LocalObject&>(l) < static_cast<const ::Ice::LocalObject&>(r);
}

}

#endif
