#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDirectionPropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDirectionPropertyType



namespace indoorgmlcore
{

namespace gml
{	

class CDirectionPropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CDirectionPropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDirectionPropertyType(CDirectionPropertyType const& init);
	void operator=(CDirectionPropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CDirectionPropertyType); }

	MemberAttribute<bool,_altova_mi_gml_altova_CDirectionPropertyType_altova_owns, 0, 0> owns;	// owns Cboolean
	MemberAttribute<string_type,_altova_mi_gml_altova_CDirectionPropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gml_altova_CDirectionPropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gml_altova_CDirectionPropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_CDirectionPropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_CDirectionPropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gml_altova_CDirectionPropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gml_altova_CDirectionPropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gml_altova_CDirectionPropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType

	MemberAttribute<string_type,_altova_mi_gml_altova_CDirectionPropertyType_altova_remoteSchema, 0, 0> remoteSchema;	// remoteSchema CanyURI
	MemberElement<gml::CDirectionVectorType, _altova_mi_gml_altova_CDirectionPropertyType_altova_DirectionVector> DirectionVector;
	struct DirectionVector { typedef Iterator<gml::CDirectionVectorType> iterator; };
	MemberElement<gml::CDirectionDescriptionType, _altova_mi_gml_altova_CDirectionPropertyType_altova_DirectionDescription> DirectionDescription;
	struct DirectionDescription { typedef Iterator<gml::CDirectionDescriptionType> iterator; };
	MemberElement<gml::CCompassPointEnumerationType, _altova_mi_gml_altova_CDirectionPropertyType_altova_CompassPoint> CompassPoint;
	struct CompassPoint { typedef Iterator<gml::CCompassPointEnumerationType> iterator; };
	MemberElement<gml::CCodeType, _altova_mi_gml_altova_CDirectionPropertyType_altova_DirectionKeyword> DirectionKeyword;
	struct DirectionKeyword { typedef Iterator<gml::CCodeType> iterator; };
	MemberElement<gml::CStringOrRefType, _altova_mi_gml_altova_CDirectionPropertyType_altova_DirectionString> DirectionString;
	struct DirectionString { typedef Iterator<gml::CStringOrRefType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDirectionPropertyType
