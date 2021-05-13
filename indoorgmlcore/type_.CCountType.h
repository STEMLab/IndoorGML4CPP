#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CCountType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CCountType

#include "type_xs.CintegerType.h"


namespace indoorgmlcore
{

class CCountType : public ::indoorgmlcore::xs::CintegerType
{
public:
	indoorgmlcore_EXPORT CCountType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCountType(CCountType const& init);
	void operator=(CCountType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CCountType); }
	indoorgmlcore_EXPORT void operator=(const __int64& value);

	MemberAttribute<string_type,_altova_mi_altova_CCountType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CCountType
