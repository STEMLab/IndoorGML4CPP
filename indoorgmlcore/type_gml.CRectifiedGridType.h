#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CRectifiedGridType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CRectifiedGridType

#include "type_gml.CGridType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CRectifiedGridType : public ::indoorgmlcore::gml::CGridType
{
public:
	indoorgmlcore_EXPORT CRectifiedGridType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CRectifiedGridType(CRectifiedGridType const& init);
	void operator=(CRectifiedGridType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CRectifiedGridType); }
	MemberElement<gml::CPointPropertyType, _altova_mi_gml_altova_CRectifiedGridType_altova_origin> origin;
	struct origin { typedef Iterator<gml::CPointPropertyType> iterator; };
	MemberElement<gml::CVectorType, _altova_mi_gml_altova_CRectifiedGridType_altova_offsetVector> offsetVector;
	struct offsetVector { typedef Iterator<gml::CVectorType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CRectifiedGridType
