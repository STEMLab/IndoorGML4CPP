#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDatumPropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDatumPropertyType



namespace indoorgmlcore
{

namespace gml
{	

class CDatumPropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CDatumPropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDatumPropertyType(CDatumPropertyType const& init);
	void operator=(CDatumPropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CDatumPropertyType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CDatumPropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gml_altova_CDatumPropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gml_altova_CDatumPropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_CDatumPropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_CDatumPropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gml_altova_CDatumPropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gml_altova_CDatumPropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gml_altova_CDatumPropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType

	MemberAttribute<string_type,_altova_mi_gml_altova_CDatumPropertyType_altova_remoteSchema, 0, 0> remoteSchema;	// remoteSchema CanyURI
	MemberElement<gml::CEngineeringDatumType, _altova_mi_gml_altova_CDatumPropertyType_altova_EngineeringDatum> EngineeringDatum;
	struct EngineeringDatum { typedef Iterator<gml::CEngineeringDatumType> iterator; };
	MemberElement<gml::CGeodeticDatumType, _altova_mi_gml_altova_CDatumPropertyType_altova_GeodeticDatum> GeodeticDatum;
	struct GeodeticDatum { typedef Iterator<gml::CGeodeticDatumType> iterator; };
	MemberElement<gml::CImageDatumType, _altova_mi_gml_altova_CDatumPropertyType_altova_ImageDatum> ImageDatum;
	struct ImageDatum { typedef Iterator<gml::CImageDatumType> iterator; };
	MemberElement<gml::CTemporalDatumType, _altova_mi_gml_altova_CDatumPropertyType_altova_TemporalDatum> TemporalDatum;
	struct TemporalDatum { typedef Iterator<gml::CTemporalDatumType> iterator; };
	MemberElement<gml::CVerticalDatumType, _altova_mi_gml_altova_CDatumPropertyType_altova_VerticalDatum> VerticalDatum;
	struct VerticalDatum { typedef Iterator<gml::CVerticalDatumType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDatumPropertyType
