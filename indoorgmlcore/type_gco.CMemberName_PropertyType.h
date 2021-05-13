#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CMemberName_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CMemberName_PropertyType



namespace indoorgmlcore
{

namespace gco
{	

class CMemberName_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CMemberName_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMemberName_PropertyType(CMemberName_PropertyType const& init);
	void operator=(CMemberName_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gco_altova_CMemberName_PropertyType); }
	MemberAttribute<string_type,_altova_mi_gco_altova_CMemberName_PropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gco_altova_CMemberName_PropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gco_altova_CMemberName_PropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gco_altova_CMemberName_PropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gco_altova_CMemberName_PropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gco_altova_CMemberName_PropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gco_altova_CMemberName_PropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gco_altova_CMemberName_PropertyType_altova_uuidref, 0, 0> uuidref;	// uuidref Cstring

	MemberAttribute<string_type,_altova_mi_gco_altova_CMemberName_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gco::CMemberName_Type, _altova_mi_gco_altova_CMemberName_PropertyType_altova_MemberName> MemberName;
	struct MemberName { typedef Iterator<gco::CMemberName_Type> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gco

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CMemberName_PropertyType
