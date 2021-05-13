#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCoordinateOperationPropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCoordinateOperationPropertyType



namespace indoorgmlcore
{

namespace gml
{	

class CCoordinateOperationPropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CCoordinateOperationPropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCoordinateOperationPropertyType(CCoordinateOperationPropertyType const& init);
	void operator=(CCoordinateOperationPropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CCoordinateOperationPropertyType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateOperationPropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateOperationPropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateOperationPropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateOperationPropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateOperationPropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateOperationPropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateOperationPropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateOperationPropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType

	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateOperationPropertyType_altova_remoteSchema, 0, 0> remoteSchema;	// remoteSchema CanyURI
	MemberElement<gml::CConcatenatedOperationType, _altova_mi_gml_altova_CCoordinateOperationPropertyType_altova_ConcatenatedOperation> ConcatenatedOperation;
	struct ConcatenatedOperation { typedef Iterator<gml::CConcatenatedOperationType> iterator; };
	MemberElement<gml::CConversionType, _altova_mi_gml_altova_CCoordinateOperationPropertyType_altova_Conversion> Conversion;
	struct Conversion { typedef Iterator<gml::CConversionType> iterator; };
	MemberElement<gml::CPassThroughOperationType, _altova_mi_gml_altova_CCoordinateOperationPropertyType_altova_PassThroughOperation> PassThroughOperation;
	struct PassThroughOperation { typedef Iterator<gml::CPassThroughOperationType> iterator; };
	MemberElement<gml::CTransformationType, _altova_mi_gml_altova_CCoordinateOperationPropertyType_altova_Transformation> Transformation;
	struct Transformation { typedef Iterator<gml::CTransformationType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCoordinateOperationPropertyType
