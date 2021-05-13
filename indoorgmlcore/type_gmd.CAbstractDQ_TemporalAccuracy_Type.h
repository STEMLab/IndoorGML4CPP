#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CAbstractDQ_TemporalAccuracy_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CAbstractDQ_TemporalAccuracy_Type

#include "type_gmd.CAbstractDQ_Element_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CAbstractDQ_TemporalAccuracy_Type : public ::indoorgmlcore::gmd::CAbstractDQ_Element_Type
{
public:
	indoorgmlcore_EXPORT CAbstractDQ_TemporalAccuracy_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractDQ_TemporalAccuracy_Type(CAbstractDQ_TemporalAccuracy_Type const& init);
	void operator=(CAbstractDQ_TemporalAccuracy_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CAbstractDQ_TemporalAccuracy_Type); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CAbstractDQ_TemporalAccuracy_Type
