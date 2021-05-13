#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CMultiplicity_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CMultiplicity_PropertyType



namespace indoorgmlcore
{

namespace gco
{	

class CMultiplicity_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CMultiplicity_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMultiplicity_PropertyType(CMultiplicity_PropertyType const& init);
	void operator=(CMultiplicity_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gco_altova_CMultiplicity_PropertyType); }
	MemberAttribute<string_type,_altova_mi_gco_altova_CMultiplicity_PropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gco_altova_CMultiplicity_PropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gco_altova_CMultiplicity_PropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gco_altova_CMultiplicity_PropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gco_altova_CMultiplicity_PropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gco_altova_CMultiplicity_PropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gco_altova_CMultiplicity_PropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gco_altova_CMultiplicity_PropertyType_altova_uuidref, 0, 0> uuidref;	// uuidref Cstring

	MemberAttribute<string_type,_altova_mi_gco_altova_CMultiplicity_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gco::CMultiplicity_Type, _altova_mi_gco_altova_CMultiplicity_PropertyType_altova_Multiplicity> Multiplicity;
	struct Multiplicity { typedef Iterator<gco::CMultiplicity_Type> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gco

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CMultiplicity_PropertyType
