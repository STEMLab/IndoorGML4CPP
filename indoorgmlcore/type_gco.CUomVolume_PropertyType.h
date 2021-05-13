#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CUomVolume_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CUomVolume_PropertyType



namespace indoorgmlcore
{

namespace gco
{	

class CUomVolume_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CUomVolume_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CUomVolume_PropertyType(CUomVolume_PropertyType const& init);
	void operator=(CUomVolume_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gco_altova_CUomVolume_PropertyType); }
	MemberAttribute<string_type,_altova_mi_gco_altova_CUomVolume_PropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gco_altova_CUomVolume_PropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gco_altova_CUomVolume_PropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gco_altova_CUomVolume_PropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gco_altova_CUomVolume_PropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gco_altova_CUomVolume_PropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gco_altova_CUomVolume_PropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gco_altova_CUomVolume_PropertyType_altova_uuidref, 0, 0> uuidref;	// uuidref Cstring

	MemberAttribute<string_type,_altova_mi_gco_altova_CUomVolume_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gml::CUnitDefinitionType, _altova_mi_gco_altova_CUomVolume_PropertyType_altova_UnitDefinition> UnitDefinition;
	struct UnitDefinition { typedef Iterator<gml::CUnitDefinitionType> iterator; };
	MemberElement<gml::CBaseUnitType, _altova_mi_gco_altova_CUomVolume_PropertyType_altova_BaseUnit> BaseUnit;
	struct BaseUnit { typedef Iterator<gml::CBaseUnitType> iterator; };
	MemberElement<gml::CConventionalUnitType, _altova_mi_gco_altova_CUomVolume_PropertyType_altova_ConventionalUnit> ConventionalUnit;
	struct ConventionalUnit { typedef Iterator<gml::CConventionalUnitType> iterator; };
	MemberElement<gml::CDerivedUnitType, _altova_mi_gco_altova_CUomVolume_PropertyType_altova_DerivedUnit> DerivedUnit;
	struct DerivedUnit { typedef Iterator<gml::CDerivedUnitType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gco

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CUomVolume_PropertyType
