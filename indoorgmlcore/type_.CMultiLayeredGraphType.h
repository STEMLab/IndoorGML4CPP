#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CMultiLayeredGraphType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CMultiLayeredGraphType

#include "type_gml.CAbstractFeatureType.h"


namespace indoorgmlcore
{

class CMultiLayeredGraphType : public ::indoorgmlcore::gml::CAbstractFeatureType
{
public:
	indoorgmlcore_EXPORT CMultiLayeredGraphType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMultiLayeredGraphType(CMultiLayeredGraphType const& init);
	void operator=(CMultiLayeredGraphType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CMultiLayeredGraphType); }
	MemberElement<CSpaceLayersType, _altova_mi_altova_CMultiLayeredGraphType_altova_spaceLayers> spaceLayers;
	struct spaceLayers { typedef Iterator<CSpaceLayersType> iterator; };
	MemberElement<CInterEdgesType, _altova_mi_altova_CMultiLayeredGraphType_altova_interEdges> interEdges;
	struct interEdges { typedef Iterator<CInterEdgesType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CMultiLayeredGraphType
