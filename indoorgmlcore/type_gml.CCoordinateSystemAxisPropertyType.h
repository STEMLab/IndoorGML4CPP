#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCoordinateSystemAxisPropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCoordinateSystemAxisPropertyType



namespace indoorgmlcore
{

namespace gml
{	

class CCoordinateSystemAxisPropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CCoordinateSystemAxisPropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCoordinateSystemAxisPropertyType(CCoordinateSystemAxisPropertyType const& init);
	void operator=(CCoordinateSystemAxisPropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CCoordinateSystemAxisPropertyType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateSystemAxisPropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateSystemAxisPropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateSystemAxisPropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateSystemAxisPropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateSystemAxisPropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateSystemAxisPropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateSystemAxisPropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateSystemAxisPropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType

	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateSystemAxisPropertyType_altova_remoteSchema, 0, 0> remoteSchema;	// remoteSchema CanyURI
	MemberElement<gml::CCoordinateSystemAxisType, _altova_mi_gml_altova_CCoordinateSystemAxisPropertyType_altova_CoordinateSystemAxis> CoordinateSystemAxis;
	struct CoordinateSystemAxis { typedef Iterator<gml::CCoordinateSystemAxisType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCoordinateSystemAxisPropertyType
