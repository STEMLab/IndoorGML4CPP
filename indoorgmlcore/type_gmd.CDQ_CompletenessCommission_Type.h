#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDQ_CompletenessCommission_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDQ_CompletenessCommission_Type

#include "type_gmd.CAbstractDQ_Completeness_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CDQ_CompletenessCommission_Type : public ::indoorgmlcore::gmd::CAbstractDQ_Completeness_Type
{
public:
	indoorgmlcore_EXPORT CDQ_CompletenessCommission_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDQ_CompletenessCommission_Type(CDQ_CompletenessCommission_Type const& init);
	void operator=(CDQ_CompletenessCommission_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CDQ_CompletenessCommission_Type); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDQ_CompletenessCommission_Type
