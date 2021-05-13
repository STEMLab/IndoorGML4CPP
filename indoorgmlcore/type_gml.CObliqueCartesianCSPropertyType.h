#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CObliqueCartesianCSPropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CObliqueCartesianCSPropertyType



namespace indoorgmlcore
{

namespace gml
{	

class CObliqueCartesianCSPropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CObliqueCartesianCSPropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CObliqueCartesianCSPropertyType(CObliqueCartesianCSPropertyType const& init);
	void operator=(CObliqueCartesianCSPropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CObliqueCartesianCSPropertyType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CObliqueCartesianCSPropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gml_altova_CObliqueCartesianCSPropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gml_altova_CObliqueCartesianCSPropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_CObliqueCartesianCSPropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_CObliqueCartesianCSPropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gml_altova_CObliqueCartesianCSPropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gml_altova_CObliqueCartesianCSPropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gml_altova_CObliqueCartesianCSPropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType

	MemberAttribute<string_type,_altova_mi_gml_altova_CObliqueCartesianCSPropertyType_altova_remoteSchema, 0, 0> remoteSchema;	// remoteSchema CanyURI
	MemberElement<gml::CObliqueCartesianCSType, _altova_mi_gml_altova_CObliqueCartesianCSPropertyType_altova_ObliqueCartesianCS> ObliqueCartesianCS;
	struct ObliqueCartesianCS { typedef Iterator<gml::CObliqueCartesianCSType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CObliqueCartesianCSPropertyType
