#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CAbstractDQ_ThematicAccuracy_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CAbstractDQ_ThematicAccuracy_Type

#include "type_gmd.CAbstractDQ_Element_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CAbstractDQ_ThematicAccuracy_Type : public ::indoorgmlcore::gmd::CAbstractDQ_Element_Type
{
public:
	indoorgmlcore_EXPORT CAbstractDQ_ThematicAccuracy_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractDQ_ThematicAccuracy_Type(CAbstractDQ_ThematicAccuracy_Type const& init);
	void operator=(CAbstractDQ_ThematicAccuracy_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CAbstractDQ_ThematicAccuracy_Type); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CAbstractDQ_ThematicAccuracy_Type
