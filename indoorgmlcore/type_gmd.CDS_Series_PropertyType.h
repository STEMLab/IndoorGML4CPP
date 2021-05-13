#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDS_Series_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDS_Series_PropertyType



namespace indoorgmlcore
{

namespace gmd
{	

class CDS_Series_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CDS_Series_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDS_Series_PropertyType(CDS_Series_PropertyType const& init);
	void operator=(CDS_Series_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CDS_Series_PropertyType); }
	MemberAttribute<string_type,_altova_mi_gmd_altova_CDS_Series_PropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CDS_Series_PropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CDS_Series_PropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CDS_Series_PropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CDS_Series_PropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gmd_altova_CDS_Series_PropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gmd_altova_CDS_Series_PropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gmd_altova_CDS_Series_PropertyType_altova_uuidref, 0, 0> uuidref;	// uuidref Cstring

	MemberAttribute<string_type,_altova_mi_gmd_altova_CDS_Series_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gmd::CDS_Series_Type, _altova_mi_gmd_altova_CDS_Series_PropertyType_altova_DS_Series> DS_Series;
	struct DS_Series { typedef Iterator<gmd::CDS_Series_Type> iterator; };
	MemberElement<gmd::CDS_Platform_Type, _altova_mi_gmd_altova_CDS_Series_PropertyType_altova_DS_Platform> DS_Platform;
	struct DS_Platform { typedef Iterator<gmd::CDS_Platform_Type> iterator; };
	MemberElement<gmd::CDS_ProductionSeries_Type, _altova_mi_gmd_altova_CDS_Series_PropertyType_altova_DS_ProductionSeries> DS_ProductionSeries;
	struct DS_ProductionSeries { typedef Iterator<gmd::CDS_ProductionSeries_Type> iterator; };
	MemberElement<gmd::CDS_Sensor_Type, _altova_mi_gmd_altova_CDS_Series_PropertyType_altova_DS_Sensor> DS_Sensor;
	struct DS_Sensor { typedef Iterator<gmd::CDS_Sensor_Type> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDS_Series_PropertyType
