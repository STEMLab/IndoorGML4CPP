#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CMultiPointPropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CMultiPointPropertyType



namespace indoorgmlcore
{

namespace gml
{	

class CMultiPointPropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CMultiPointPropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMultiPointPropertyType(CMultiPointPropertyType const& init);
	void operator=(CMultiPointPropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CMultiPointPropertyType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CMultiPointPropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gml_altova_CMultiPointPropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gml_altova_CMultiPointPropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_CMultiPointPropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_CMultiPointPropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gml_altova_CMultiPointPropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gml_altova_CMultiPointPropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gml_altova_CMultiPointPropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType

	MemberAttribute<string_type,_altova_mi_gml_altova_CMultiPointPropertyType_altova_remoteSchema, 0, 0> remoteSchema;	// remoteSchema CanyURI

	MemberAttribute<bool,_altova_mi_gml_altova_CMultiPointPropertyType_altova_owns, 0, 0> owns;	// owns Cboolean
	MemberElement<gml::CMultiPointType, _altova_mi_gml_altova_CMultiPointPropertyType_altova_MultiPoint> MultiPoint;
	struct MultiPoint { typedef Iterator<gml::CMultiPointType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CMultiPointPropertyType
