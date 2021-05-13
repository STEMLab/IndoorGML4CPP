#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CStringOrRefType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CStringOrRefType

#include "type_xs.CstringType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CStringOrRefType : public ::indoorgmlcore::xs::CstringType
{
public:
	indoorgmlcore_EXPORT CStringOrRefType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CStringOrRefType(CStringOrRefType const& init);
	void operator=(CStringOrRefType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CStringOrRefType); }
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	MemberAttribute<string_type,_altova_mi_gml_altova_CStringOrRefType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gml_altova_CStringOrRefType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gml_altova_CStringOrRefType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_CStringOrRefType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_CStringOrRefType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gml_altova_CStringOrRefType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gml_altova_CStringOrRefType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gml_altova_CStringOrRefType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType

	MemberAttribute<string_type,_altova_mi_gml_altova_CStringOrRefType_altova_remoteSchema, 0, 0> remoteSchema;	// remoteSchema CanyURI
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CStringOrRefType
