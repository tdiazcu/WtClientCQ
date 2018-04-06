// RecordSetsModel.cpp
// Representa el Modelo en el MVC del ResultSet
// Se conecta con el CQ y contruye la tabla de elementos JSON del RS

#include <boost/algorithm/string/replace.hpp>

#include "RecordSetsModel.h"

//#include "CQJSON.h"
#ifdef MyDEBUG
#	include "CQJSONdummy.h"
#else
#	include "CQJSON.h"
#endif

#if !defined (FALSE_DEFINED)
#	define FALSE         0
#	define FALSE_DEFINED 1
#endif
#if !defined (TRUE_DEFINED)
#	define TRUE          0
#	define TRUE_DEFINED  1
#endif

/// Constructor
RecordSetsModel::RecordSetsModel(WObject* parent) : WStandardItemModel(parent)
{
#ifdef MyDEBUG
	cqSession = CQJSONdummy::getInstance();
#else
	cqSession = CQJSON::getInstance();
#endif
	cqSession->UserLogon("admin", "", "SAMPL", "SAMPLCNX");
}

/// Destructor
RecordSetsModel::~RecordSetsModel()
{
}

