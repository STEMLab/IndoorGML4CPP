#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSphericalCSPropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSphericalCSPropertyType



namespace indoorgmlcore
{

namespace gml
{	

class CSphericalCSPropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CSphericalCSPropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CSphericalCSPropertyType(CSphericalCSPropertyType const& init);
	void operator=(CSphericalCSPropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CSphericalCSPropertyType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CSphericalCSPropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gml_altova_CSphericalCSPropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gml_altova_CSphericalCSPropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_CSphericalCSPropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_CSphericalCSPropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gml_altova_CSphericalCSPropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gml_altova_CSphericalCSPropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gml_altova_CSphericalCSPropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType

	MemberAttribute<string_type,_altova_mi_gml_altova_CSphericalCSPropertyType_altova_remoteSchema, 0, 0> remoteSchema;	// remoteSchema CanyURI
	MemberElement<gml::CSphericalCSType, _altova_mi_gml_altova_CSphericalCSPropertyType_altova_SphericalCS> SphericalCS;
	struct SphericalCS { typedef Iterator<gml::CSphericalCSType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSphericalCSPropertyType
