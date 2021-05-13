#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CInterLayerConnectionType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CInterLayerConnectionType

#include "type_gml.CAbstractFeatureType.h"


namespace indoorgmlcore
{

class CInterLayerConnectionType : public ::indoorgmlcore::gml::CAbstractFeatureType
{
public:
	indoorgmlcore_EXPORT CInterLayerConnectionType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CInterLayerConnectionType(CInterLayerConnectionType const& init);
	void operator=(CInterLayerConnectionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CInterLayerConnectionType); }
	MemberElement<CtypeOfTopoExpressionCodeTypeType, _altova_mi_altova_CInterLayerConnectionType_altova_typeOfTopoExpression> typeOfTopoExpression;
	struct typeOfTopoExpression { typedef Iterator<CtypeOfTopoExpressionCodeTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CInterLayerConnectionType_altova_comment> comment;
	struct comment { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CStatePropertyType, _altova_mi_altova_CInterLayerConnectionType_altova_interConnects> interConnects;
	struct interConnects { typedef Iterator<CStatePropertyType> iterator; };
	MemberElement<CSpaceLayerPropertyType, _altova_mi_altova_CInterLayerConnectionType_altova_ConnectedLayers> ConnectedLayers;
	struct ConnectedLayers { typedef Iterator<CSpaceLayerPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CInterLayerConnectionType
